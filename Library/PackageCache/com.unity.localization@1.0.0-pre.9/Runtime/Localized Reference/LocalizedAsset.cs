using System;
using UnityEngine.Localization.Settings;
using UnityEngine.Localization.Tables;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityEngine.Localization
{
    #if MODULE_AUDIO
    /// <summary>
    /// Provides a specialized <see cref="LocalizedAsset{TObject}"/> which can be used to localize [AudioClip](https://docs.unity3d.com/ScriptReference/AudioClip.html) assets.
    /// </summary>
    [Serializable]
    public class LocalizedAudioClip : LocalizedAsset<AudioClip> {}
    #endif

    /// <summary>
    /// Provides a specialized <see cref="LocalizedAsset{TObject}"/> which can be used to localize [Prefabs](https://docs.unity3d.com/Manual/Prefabs.html).
    /// </summary>
    [Serializable]
    public class LocalizedGameObject : LocalizedAsset<GameObject> {}

    /// <summary>
    /// Provides a specialized <see cref="LocalizedAsset{TObject}"/> which can be used to localize [Materials](https://docs.unity3d.com/ScriptReference/Material.html).
    /// </summary>
    [Serializable]
    public class LocalizedMaterial : LocalizedAsset<Material> {}

    /// <summary>
    /// Provides a specialized <see cref="LocalizedAsset{TObject}"/> which can be used to localize [Sprites](https://docs.unity3d.com/ScriptReference/Sprite.html).
    /// </summary>
    [Serializable]
    public class LocalizedSprite : LocalizedAsset<Sprite> {}

    /// <summary>
    /// Provides a specialized <see cref="LocalizedAsset{TObject}"/> which can be used to localize [Textures](https://docs.unity3d.com/ScriptReference/Texture.html) assets.
    /// </summary>
    [Serializable]
    public class LocalizedTexture : LocalizedAsset<Texture> {}

    /// <summary>
    /// Provides a way to reference an <see cref="AssetTableEntry"/> inside of a specific <see cref="AssetTable"/> and request the localized asset.
    /// </summary>
    /// <typeparam name="TObject">The type that should be supported. This can be any type that inherits from [UnityEngine.Object](https://docs.unity3d.com/ScriptReference/Object.html).</typeparam>
    /// <example>
    /// This example shows how a <see cref="LocalizedAsset{TObject}"/> can be used to localize a [Prefabs](https://docs.unity3d.com/Manual/Prefabs.html).
    /// See also <seealso cref="LocalizedGameObject"/> and <seealso cref="Components.LocalizedGameObjectEvent"/>.
    /// <code source="../../DocCodeSamples.Tests/LocalizedAssetSamples.cs" region="localized-prefab"/>
    /// </example>
    [Serializable]
    public partial class LocalizedAsset<TObject> : LocalizedReference where TObject : Object
    {
        ChangeHandler m_ChangeHandler;
        AsyncOperationHandle<TObject>? m_CurrentLoadingOperation;

        /// <summary>
        /// Delegate used by <see cref="AssetChanged"/>.
        /// </summary>
        /// <param name="value">The localized asset.</param>
        public delegate void ChangeHandler(TObject value);

        public override bool WaitForCompletion
        {
            set
            {
                if (value == WaitForCompletion)
                    return;

                base.WaitForCompletion = value;
                if (value && m_CurrentLoadingOperation.HasValue && !m_CurrentLoadingOperation.Value.IsDone)
                    m_CurrentLoadingOperation.Value.WaitForCompletion();
            }
        }

        /// <summary>
        /// The current loading operation for the asset when using <see cref="AssetChanged"/>. This is <c>null</c> if a loading operation is not available.
        /// </summary>
        public AsyncOperationHandle<TObject>? CurrentLoadingOperation
        {
            get => m_CurrentLoadingOperation;
            internal set => m_CurrentLoadingOperation = value;
        }

        /// <summary>
        /// Provides a callback that will be invoked when the asset is available or has changed.
        /// </summary>
        /// <remarks>
        /// The following events will trigger an update:
        /// - The first time the action is added to the event.
        /// - The <seealso cref="LocalizationSettings.SelectedLocale"/> changing.
        /// - The <see cref="TableReference"/> or <see cref="TableEntryReference"/> changing.
        ///
        /// When the first <see cref="ChangeHandler"/> is added, a loading operation (see <see cref="CurrentLoadingOperation"/>) will automatically
        /// start and the localized asset will be sent to the subscriber when completed. Any adding additional subscribers added after
        /// loading has completed will also be sent the latest localized asset when they are added.
        /// This ensures that a subscriber will always have the correct localized value regardless of when it was added.
        /// </remarks>
        /// <example>
        /// This example shows how the <see cref="AssetChanged"/> event could be used to change the Font on some localized Text.
        /// <code source="../../DocCodeSamples.Tests/LocalizedAssetSamples.cs" region="localized-text-font"/>
        /// </example>
        public event ChangeHandler AssetChanged
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
                {
                    LocalizationSettings.SelectedLocaleChanged -= HandleLocaleChange;
                    ClearLoadingOperation();
                }
            }
        }

        /// <summary>
        /// Returns <c>true</c> if <seealso cref="AssetChanged"/> has any subscribers.
        /// </summary>
        public bool HasChangeHandler => m_ChangeHandler != null;

        /// <summary>
        /// Provides a localized asset from a <see cref="AssetTable"/> with the <see cref="TableReference"/> and the
        /// the asset that matches <see cref="TableEntryReference"/>.
        /// </summary>
        /// <remarks>
        /// The asset may have already been loaded, either during a previous operation or if Preload mode is used. Check the <see cref="AsyncOperationHandle.IsDone"/> property to see if the asset is already loaded and therefore is immediately available.
        /// See [Async operation handling](https://docs.unity3d.com/Packages/com.unity.addressables@latest/index.html?subfolder=/manual/AddressableAssetsAsyncOperationHandle.html) for further details.
        /// </remarks>
        /// <returns>Returns the loading operation for the request.</returns>
        /// <example>
        /// This example shows how <see cref="GetLocalizedString"/> can be used to request an updated string when the <see cref="LocalizationSettings.SelectedLocale"/> changes.
        /// <code source="../../DocCodeSamples.Tests/LocalizedAssetSamples.cs" region="localized-sprite"/>
        /// </example>
        public AsyncOperationHandle<TObject> LoadAssetAsync()
        {
            LocalizationSettings.ValidateSettingsExist("Can not Load Asset.");
            return LocalizationSettings.AssetDatabase.GetLocalizedAssetAsync<TObject>(TableReference, TableEntryReference);
        }

        /// <summary>
        /// Provides a localized asset from a <see cref="AssetTable"/> with the <see cref="TableReference"/> and the
        /// the asset that matches <see cref="TableEntryReference"/>.
        /// </summary>
        /// <returns>Returns the localized asset.</returns>
        public TObject LoadAsset()
        {
            return LoadAssetAsync().WaitForCompletion();
        }

        protected internal override void ForceUpdate()
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

            #if UNITY_EDITOR
            m_CurrentTable = TableReference;
            m_CurrentTableEntry = TableEntryReference;

            // Dont update if we have no selected Locale
            if (!LocalizationSettings.Instance.IsPlaying && LocalizationSettings.SelectedLocale == null)
                return;
            #endif

            if (IsEmpty)
            {
                #if UNITY_EDITOR
                // If we are empty and playing or previewing then we should force an update.
                if (!LocalizationSettings.Instance.IsPlaying)
                    m_ChangeHandler(null);
                #endif
                return;
            }

            m_CurrentLoadingOperation = LoadAssetAsync();

            if (!m_CurrentLoadingOperation.Value.IsDone)
            {
                if (!WaitForCompletion)
                {
                    m_CurrentLoadingOperation.Value.Completed += AutomaticLoadingCompleted;
                    return;
                }
                m_CurrentLoadingOperation.Value.WaitForCompletion();
            }

            AutomaticLoadingCompleted(m_CurrentLoadingOperation.Value);
        }

        void AutomaticLoadingCompleted(AsyncOperationHandle<TObject> loadOperation)
        {
            if (loadOperation.Status != AsyncOperationStatus.Succeeded)
            {
                m_CurrentLoadingOperation = null;
                return;
            }

            m_ChangeHandler(loadOperation.Result);
        }

        internal void ClearLoadingOperation()
        {
            if (m_CurrentLoadingOperation.HasValue)
            {
                // We should only call this if we are not done as its possible that the internal list is null if its not been used.
                if (!m_CurrentLoadingOperation.Value.IsDone)
                    m_CurrentLoadingOperation.Value.Completed -= AutomaticLoadingCompleted;
                m_CurrentLoadingOperation = null;
            }
        }

        protected override void Reset()
        {
            ClearLoadingOperation();
        }
    }
}
