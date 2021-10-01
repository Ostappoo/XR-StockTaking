using System;
using System.Collections.Generic;
using UnityEngine.Localization.Pseudo;
using UnityEngine.Localization.SmartFormat;
using UnityEngine.Localization.Tables;
using UnityEngine.Pool;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityEngine.Localization.Settings
{
    /// <summary>
    /// Handles loading strings and their tables for the selected locale.
    /// </summary>
    [Serializable]
    public class LocalizedStringDatabase : LocalizedDatabase<StringTable, StringTableEntry>
    {
        [SerializeField]
        MissingTranslationBehavior m_MissingTranslationState = MissingTranslationBehavior.ShowMissingTranslationMessage;

        const string k_DefaultNoTranslationMessage = "No translation found for '{key}' in {table.TableCollectionName}";

        [SerializeField]
        [Tooltip("The string that will be used when a localized value is missing. This is a Smart String which has access to the following placeholders:\n" +
            "\t{key}: The name of the key\n" +
            "\t{keyId}: The numeric Id of the key\n" +
            "\t{table}: The table object, this can be further queried, for example {table.TableCollectionName}\n" +
            "\t{locale}: The locale asset, this can be further queried, for example {locale.name}")]
        string m_NoTranslationFoundMessage = k_DefaultNoTranslationMessage;

        [SerializeReference]
        SmartFormatter m_SmartFormat = Smart.CreateDefaultSmartFormat();

        StringTable m_MissingTranslationTable;

        /// <summary>
        /// The message to display when a string can not be localized.
        /// This is a Smart String which has access to the following named placeholders:
        /// <list type="table">
        /// <listheader>
        ///     <term>Placeholder</term>
        ///     <description>Description</description>
        /// </listheader>
        /// <item>
        ///     <term>{key}</term>
        ///     <description>The name of the key.</description>
        /// </item>
        /// <item>
        ///     <term>{keyId}</term>
        ///     <description>The numeric Id of the key.</description>
        /// </item>
        /// <item>
        ///     <term>{table}</term>
        ///     <description>The table object, this can be further queried, for example <b>{table.TableCollectionName}</b>.</description>
        /// </item>
        /// <item>
        ///     <term>{locale}</term>
        ///     <description>The locale asset, this can be further queried, for example <b>{locale.name}</b>.</description>
        /// </item>
        /// </list>
        /// </summary>
        public string NoTranslationFoundMessage
        {
            get => m_NoTranslationFoundMessage;
            set => m_NoTranslationFoundMessage = value;
        }

        /// <summary>
        /// Controls how Unity will handle missing translation values.
        /// </summary>
        public MissingTranslationBehavior MissingTranslationState
        {
            get => m_MissingTranslationState;
            set => m_MissingTranslationState = value;
        }

        /// <summary>
        /// The <see cref="SmartFormatter"/> that will be used for all smart string operations.
        /// </summary>
        public SmartFormatter SmartFormatter
        {
            get => m_SmartFormat;
            set => m_SmartFormat = value;
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// This method is asynchronous and may not have an immediate result.
        /// Check [IsDone](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.IsDone) to see if the data is available,
        /// if it is false then you can use the [Completed](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.Completed) event to get a callback when it is finished,
        /// yield on the operation or call [WaitForCompletion](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.WaitForCompletion)
        /// to force the operation to complete.
        /// </summary>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <returns></returns>
        public AsyncOperationHandle<string> GetLocalizedStringAsync(TableEntryReference tableEntryReference, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings, params object[] arguments)
        {
            return GetLocalizedStringAsync(GetDefaultTable(), tableEntryReference, arguments, locale, fallbackBehavior);
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// </summary>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <returns></returns>
        public string GetLocalizedString(TableEntryReference tableEntryReference, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings, params object[] arguments)
        {
            return GetLocalizedStringAsync(GetDefaultTable(), tableEntryReference, locale, fallbackBehavior, arguments).WaitForCompletion();
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// This method is asynchronous and may not have an immediate result.
        /// Check [IsDone](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.IsDone) to see if the data is available,
        /// if it is false then you can use the [Completed](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.Completed) event to get a callback when it is finished,
        /// yield on the operation or call [WaitForCompletion](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.WaitForCompletion)
        /// to force the operation to complete.
        /// </summary>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <returns></returns>
        public AsyncOperationHandle<string> GetLocalizedStringAsync(TableEntryReference tableEntryReference, IList<object> arguments, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings)
        {
            return GetLocalizedStringAsync(GetDefaultTable(), tableEntryReference, arguments, locale, fallbackBehavior);
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// </summary>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <returns></returns>
        public string GetLocalizedString(TableEntryReference tableEntryReference, IList<object> arguments, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings)
        {
            return GetLocalizedStringAsync(GetDefaultTable(), tableEntryReference, locale, fallbackBehavior, arguments).WaitForCompletion();
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// The string will first be formatted with <see cref="SmartFormat"/> if <see cref="StringTableEntry.IsSmart"/> is enabled otherwise it will use String.Format.
        /// This method is asynchronous and may not have an immediate result.
        /// Check [IsDone](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.IsDone) to see if the data is available,
        /// if it is false then you can use the [Completed](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.Completed) event to get a callback when it is finished,
        /// yield on the operation or call [WaitForCompletion](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.WaitForCompletion)
        /// to force the operation to complete.
        /// </summary>
        /// <param name="tableReference">A reference to the table to check for the string.</param>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <returns></returns>
        public virtual AsyncOperationHandle<string> GetLocalizedStringAsync(TableReference tableReference, TableEntryReference tableEntryReference, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings, params object[] arguments)
        {
            return GetLocalizedStringAsync(tableReference, tableEntryReference, arguments, locale, fallbackBehavior);
        }

        /// Attempts to retrieve a string from the requested table.
        /// The string will first be formatted with <see cref="SmartFormat"/> if <see cref="StringTableEntry.IsSmart"/> is enabled otherwise it will use String.Format.
        /// </summary>
        /// <param name="tableReference">A reference to the table to check for the string.</param>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <returns></returns>
        public virtual string GetLocalizedString(TableReference tableReference, TableEntryReference tableEntryReference, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings, params object[] arguments)
        {
            return GetLocalizedStringAsync(tableReference, tableEntryReference, arguments, locale, fallbackBehavior).WaitForCompletion();
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// The string will first be formatted with <see cref="SmartFormat"/> if <see cref="StringTableEntry.IsSmart"/> is enabled otherwise it will use String.Format.
        /// This method is asynchronous and may not have an immediate result.
        /// Check [IsDone](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.IsDone) to see if the data is available,
        /// if it is false then you can use the [Completed](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.Completed) event to get a callback when it is finished,
        /// yield on the operation or call [WaitForCompletion](xref:UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.WaitForCompletion)
        /// to force the operation to complete.
        /// </summary>
        /// <param name="tableReference">A reference to the table to check for the string.</param>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <returns></returns>
        public virtual AsyncOperationHandle<string> GetLocalizedStringAsync(TableReference tableReference, TableEntryReference tableEntryReference, IList<object> arguments, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings)
        {
            var tableEntryOperation = GetTableEntryAsync(tableReference, tableEntryReference, locale, fallbackBehavior);

            var operation = GenericPool<GetLocalizedStringOperation>.Get();
            operation.Dependency = tableEntryOperation;
            operation.Init(tableEntryOperation, locale, this, tableReference, tableEntryReference, arguments);
            var handle = AddressablesInterface.ResourceManager.StartOperation(operation, tableEntryOperation);

            // We don't want to force users to have to manage the reference counting so by default we will release the operation for reuse once completed in the next frame
            // If a user wants to hold onto it then they should call Acquire on the operation and later Release.
            handle.CompletedTypeless += ReleaseNextFrame;

            return handle;
        }

        /// <summary>
        /// Attempts to retrieve a string from the requested table.
        /// The string will first be formatted with <see cref="SmartFormat"/> if <see cref="StringTableEntry.IsSmart"/> is enabled otherwise it will use String.Format.
        /// </summary>
        /// <param name="tableReference">A reference to the table to check for the string.</param>
        /// <param name="tableEntryReference">A reference to the entry in the <see cref="StringTable"/></param>
        /// <param name="arguments">Arguments passed to SmartFormat or String.Format.</param>
        /// <param name="locale">The <see cref="Locale"/> to use instead of the default <see cref="LocalizationSettings.SelectedLocale"/></param>
        /// <param name="fallbackBehavior">A Enum which determines if a Fallback should be used when no value could be found for the Locale.</param>
        /// <returns></returns>
        public virtual string GetLocalizedString(TableReference tableReference, TableEntryReference tableEntryReference, IList<object> arguments, Locale locale = null, FallbackBehavior fallbackBehavior = FallbackBehavior.UseProjectSettings)
        {
            return GetLocalizedStringAsync(tableReference, tableEntryReference, arguments, locale, fallbackBehavior).WaitForCompletion();
        }

        protected internal virtual string GenerateLocalizedString(StringTable table, StringTableEntry entry, TableReference tableReference, TableEntryReference tableEntryReference, Locale locale, IList<object> arguments)
        {
            var result = entry?.GetLocalizedString(locale?.Formatter, arguments, locale as PseudoLocale);

            if (string.IsNullOrEmpty(result))
            {
                var sharedTableData = table?.SharedData;
                if (sharedTableData == null && tableReference.ReferenceType == TableReference.Type.Guid)
                {
                    var sharedTableDataOperation = GetSharedTableData(tableReference.TableCollectionNameGuid);
                    if (sharedTableDataOperation.IsDone)
                        sharedTableData = sharedTableDataOperation.Result;
                }

                string key = tableEntryReference.ResolveKeyName(sharedTableData);
                return ProcessUntranslatedText(key, tableEntryReference.KeyId, tableReference, table, locale);
            }

            return result;
        }

        /// <summary>
        /// If a table does not exist for a Locale then we should create a temporary one and populate it with what info we can so it can be used for the untranslated text message.
        /// </summary>
        /// <param name="tableReference"></param>
        /// <returns></returns>
        StringTable GetUntranslatedTextTempTable(TableReference tableReference)
        {
            if (m_MissingTranslationTable == null)
            {
                m_MissingTranslationTable = ScriptableObject.CreateInstance<StringTable>();
                m_MissingTranslationTable.SharedData = ScriptableObject.CreateInstance<SharedTableData>();
            }

            if (tableReference.ReferenceType == TableReference.Type.Guid)
            {
                m_MissingTranslationTable.SharedData.TableCollectionNameGuid = tableReference;

                // Try to extract the table name
                var sharedTableData = GetSharedTableData(tableReference.TableCollectionNameGuid);
                if (sharedTableData.IsDone && sharedTableData.Result != null)
                {
                    m_MissingTranslationTable.SharedData.TableCollectionName = sharedTableData.Result.TableCollectionName;
                }
                else
                {
                    m_MissingTranslationTable.SharedData.TableCollectionName = tableReference.TableCollectionNameGuid.ToString();
                }
            }
            else if (tableReference.ReferenceType == TableReference.Type.Name)
            {
                m_MissingTranslationTable.SharedData.TableCollectionName = tableReference.TableCollectionName;
                m_MissingTranslationTable.SharedData.TableCollectionNameGuid = Guid.Empty; // We don't really have a way to get a Guid from a table name.
            }

            return m_MissingTranslationTable;
        }

        /// <summary>
        /// Returns a string to indicate that the entry could not be found for the key when calling <see cref="GetLocalizedStringAsync"/>.
        /// </summary>
        /// <param name="key"> The name of the key </param>
        /// <param name="keyId"> The numeric Id of the key </param>
        /// <param name="tableReference"></param>
        /// <param name="table"> The table object, this can be further queried, for example {table.TableCollectionName} </param>
        /// <param name="locale"> The locale asset, this can be further queried, for example {locale.name} </param>
        /// <returns></returns>
        internal string ProcessUntranslatedText(string key, long keyId, TableReference tableReference, StringTable table, Locale locale)
        {
            if (table == null)
            {
                table = GetUntranslatedTextTempTable(tableReference);
            }

            if (MissingTranslationState != 0)
            {
                using (DictionaryPool<string, object>.Get(out var dict))
                {
                    dict["key"] = key;
                    dict["keyId"] = keyId;
                    dict["table"] = table;
                    dict["locale"] = locale;

                    var message = m_SmartFormat.Format(string.IsNullOrEmpty(NoTranslationFoundMessage) ? k_DefaultNoTranslationMessage : NoTranslationFoundMessage, dict);

                    if (MissingTranslationState.HasFlag(MissingTranslationBehavior.PrintWarning))
                    {
                        Debug.LogWarning(message);
                    }

                    if (MissingTranslationState.HasFlag(MissingTranslationBehavior.ShowMissingTranslationMessage))
                    {
                        return message;
                    }
                }
            }

            return string.Empty;
        }
    }
}
