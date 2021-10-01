using System;
using UnityEngine.Localization.Settings;
using UnityEngine.Localization.Tables;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityEngine.Localization
{
    /// <summary>
    /// Provides a way to access a <see cref="LocalizationTable"/> at runtime.
    /// See <seealso cref="LocalizedStringTable"/> and <seealso cref="LocalizedAssetTable"/> for implementations.
    /// </summary>
    [Serializable]
    public abstract class LocalizedTable<TTable, TEntry>
        #if UNITY_EDITOR
        : ISerializationCallbackReceiver
        #endif
        where TTable : DetailedLocalizationTable<TEntry>
        where TEntry : TableEntry
    {
        [SerializeField]
        TableReference m_TableReference;

        ChangeHandler m_ChangeHandler;
        AsyncOperationHandle<TTable>? m_CurrentLoadingOperation;

        #if UNITY_EDITOR
        // This is so we can detect when a change is made via the inspector.
        protected TableReference m_CurrentTable;
        #endif

        protected abstract LocalizedDatabase<TTable, TEntry> Database { get; }

        /// <summary>
        /// The current loading operation for the table when using <see cref="TableChanged"/> or null if one is not available.
        /// </summary>
        public AsyncOperationHandle<TTable>? CurrentLoadingOperation
        {
            get => m_CurrentLoadingOperation;
            internal set => m_CurrentLoadingOperation = value;
        }

        /// <summary>
        /// Delegate used by <see cref="TableChanged"/>.
        /// </summary>
        /// <param name="value">The localized table.</param>
        public delegate void ChangeHandler(TTable value);

        /// <summary>
        /// Provides a reference to the <see cref="LocalizationTable"/>.
        /// A table reference can be either the name of the table or the table collection name Guid.
        /// </summary>
        /// <remarks>
        /// Note: Changing this value will trigger an update to any <see cref="TableChanged"/> subscribers.
        /// </remarks>
        public TableReference TableReference
        {
            get => m_TableReference;

            set
            {
                if (value.Equals(m_TableReference))
                    return;

                m_TableReference = value;
                ForceUpdate();
            }
        }

        /// <summary>
        /// Does <see cref="TableReference"/> contain a valid reference?
        /// </summary>
        public bool IsEmpty => TableReference.ReferenceType == TableReference.Type.Empty;

        /// <summary>
        /// Provides a callback that will be invoked when the table is available or has changed.
        /// </summary>
        /// <remarks>
        /// The following events will trigger an update:
        /// - The first time the action is added to the event.
        /// - The <seealso cref="LocalizationSettings.SelectedLocale"/> changing.
        /// - The <see cref="TableReference"/> changing.
        ///
        /// When the first <see cref="ChangeHandler"/> is added, a loading operation (see <see cref="CurrentLoadingOperation"/>) automatically starts.
        /// When the operation completes, the localized table is sent to the subscriber.
        /// If you add any additional subscribers added after loading has completed, they are also sent the latest localized table.
        /// This ensures that a subscriber will always have the correct localized value regardless of when it was added.
        /// </remarks>
        /// <example>
        /// This example shows how the <see cref="TableChanged"/> event can be used to print out the contents of the table.
        /// <code source="../../DocCodeSamples.Tests/LocalizedStringSamples.cs"/>
        /// </example>
        public event ChangeHandler TableChanged
        {
            add
            {
                if (value == null)
                    throw new ArgumentNullException();

                bool wasEmpty = m_ChangeHandler == null;
                m_ChangeHandler += value;

                if (wasEmpty)
                {
                    LocalizationSettings.ValidateSettingsExist();
                    LocalizationSettings.SelectedLocaleChanged += HandleLocaleChange;
                    ForceUpdate();
                }
                else if (CurrentLoadingOperation.HasValue && CurrentLoadingOperation.Value.IsDone)
                {
                    // Call the event with the latest value.
                    value(m_CurrentLoadingOperation.Value.Result);
                }
            }
            remove
            {
                if (value == null)
                    throw new ArgumentNullException();

                m_ChangeHandler -= value;

                if (m_ChangeHandler == null)
                    ClearLoadingOperation();
            }
        }

        /// <summary>
        /// Provides the table with the <see cref="TableReference"/>.
        /// </summary>
        /// <remarks>
        /// The <see cref="AsyncOperationHandle.Completed"/> event provides notification once the operation has finished and the table has been found or an error has occurred.
        /// A table may have already been loaded during a previous operation or when using Preload mode.
        /// Check the <see cref="AsyncOperationHandle.IsDone"/> property to see if the table is already loaded and immediately available.
        /// See [Async operation handling](https://docs.unity3d.com/Packages/com.unity.addressables@latest/index.html?subfolder=/manual/AddressableAssetsAsyncOperationHandle.html) for further details.
        /// </remarks>
        /// <returns>Returns the loading operation for the requested table.</returns>
        public AsyncOperationHandle<TTable> GetTableAsync() => Database.GetTableAsync(TableReference);

        /// <summary>
        /// Provides the table with the <see cref="TableReference"/>.
        /// </summary>
        /// <returns></returns>
        public TTable GetTable() => GetTableAsync().WaitForCompletion();

        protected void ForceUpdate()
        {
            if (m_ChangeHandler != null)
            {
                HandleLocaleChange(null);
            }
        }

        void HandleLocaleChange(Locale _)
        {
            // Cancel any previous loading operations.
            ClearLoadingOperation();

            // Don't try and load empty references.
            if (IsEmpty)
                return;

            CurrentLoadingOperation = GetTableAsync();
            if (CurrentLoadingOperation.Value.IsDone)
                AutomaticLoadingCompleted(CurrentLoadingOperation.Value);
            else
                CurrentLoadingOperation.Value.Completed += AutomaticLoadingCompleted;
        }

        void AutomaticLoadingCompleted(AsyncOperationHandle<TTable> loadOperation)
        {
            if (loadOperation.Status != AsyncOperationStatus.Succeeded)
            {
                CurrentLoadingOperation = null;
                return;
            }

            m_ChangeHandler(loadOperation.Result);
        }

        void ClearLoadingOperation()
        {
            if (CurrentLoadingOperation.HasValue)
            {
                // We should only call this if we are not done as its possible that the internal list is null if its not been used.
                if (!CurrentLoadingOperation.Value.IsDone)
                    CurrentLoadingOperation.Value.Completed -= AutomaticLoadingCompleted;
                CurrentLoadingOperation = null;
            }
        }

        /// <summary>
        /// Returns a string representation including the <see cref="TableReference"/>.
        /// </summary>
        /// <returns></returns>
        public override string ToString() => TableReference;

        #if UNITY_EDITOR
        void ChangedThroughSerialization()
        {
            ClearLoadingOperation();
            ForceUpdate();
        }

        public void OnBeforeSerialize() => UpdateIfChangedThroughSerialization();
        public void OnAfterDeserialize() => UpdateIfChangedThroughSerialization();
        void UpdateIfChangedThroughSerialization()
        {
            if (!m_CurrentTable.Equals(TableReference))
            {
                m_CurrentTable = TableReference;

                // We must defer as we can not call certain parts of Unity during serialization
                UnityEditor.EditorApplication.delayCall += ChangedThroughSerialization;
            }
        }

        #endif
    }
}
