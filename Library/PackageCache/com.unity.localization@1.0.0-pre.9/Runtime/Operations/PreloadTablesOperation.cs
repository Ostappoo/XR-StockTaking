using System.Collections.Generic;
using UnityEngine.Localization.Settings;
using UnityEngine.Localization.Tables;
using UnityEngine.Pool;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityEngine.Localization
{
    class PreloadTablesOperation<TTable, TEntry> : WaitForCurrentOperationAsyncOperationBase<LocalizedDatabase<TTable, TEntry>>
        where TTable : DetailedLocalizationTable<TEntry>
        where TEntry : TableEntry
    {
        LocalizedDatabase<TTable, TEntry> m_Database;
        readonly List<AsyncOperationHandle<TTable>> m_LoadTables = new List<AsyncOperationHandle<TTable>>();
        readonly List<AsyncOperationHandle> m_LoadTablesOperation = new List<AsyncOperationHandle>();
        readonly List<AsyncOperationHandle> m_PreloadTablesOperations = new List<AsyncOperationHandle>();

        IList<TableReference> m_TableReferences;
        Locale m_SelectedLocale;

        public void Init(LocalizedDatabase<TTable, TEntry> database, IList<TableReference> tableReference, Locale locale = null)
        {
            m_Database = database;
            m_TableReferences = tableReference;
            m_SelectedLocale = locale;
            CurrentOperation = null;
        }

        protected override void Execute()
        {
            BeginPreloadingTables();
        }

        void BeginPreloadingTables()
        {
            foreach (var tableReference in m_TableReferences)
            {
                var table = m_Database.GetTableAsync(tableReference, m_SelectedLocale);
                m_LoadTables.Add(table);

                if (!table.IsDone)
                {
                    m_LoadTablesOperation.Add(table);
                }
            }

            if (m_LoadTablesOperation.Count > 0)
            {
                var loadTablesOperationHandle = AddressablesInterface.ResourceManager.CreateGenericGroupOperation(m_LoadTablesOperation);
                if (!loadTablesOperationHandle.IsDone)
                {
                    CurrentOperation = loadTablesOperationHandle;
                    loadTablesOperationHandle.CompletedTypeless += LoadTableContents;
                    return;
                }
            }

            LoadTableContents();
        }

        void LoadTableContents(AsyncOperationHandle handle)
        {
            LoadTableContents();
        }

        void LoadTableContents()
        {
            // Iterate through the loaded tables, add them to our known tables and preload the actual table contents if required.
            foreach (var table in m_LoadTables)
            {
                if (table.Result == null)
                {
                    Complete(null, false, "Table is null.");
                    return;
                }

                if (table.Result is IPreloadRequired preloadRequired)
                {
                    m_PreloadTablesOperations.Add(preloadRequired.PreloadOperation);
                }
            }

            if (m_PreloadTablesOperations.Count == 0)
            {
                Complete(m_Database, true, null);
                return;
            }

            var preloadTablesContents = AddressablesInterface.ResourceManager.CreateGenericGroupOperation(m_PreloadTablesOperations);
            if (!preloadTablesContents.IsDone)
            {
                CurrentOperation = preloadTablesContents;
                preloadTablesContents.CompletedTypeless += FinishPreloading;
            }
            else
            {
                FinishPreloading(preloadTablesContents);
            }
        }

        void FinishPreloading(AsyncOperationHandle op)
        {
            Complete(m_Database, op.Status == AsyncOperationStatus.Succeeded, null);
        }

        protected override void Destroy()
        {
            base.Destroy();
            m_LoadTables.Clear();
            m_LoadTablesOperation.Clear();
            m_PreloadTablesOperations.Clear();
            m_TableReferences = null;
            GenericPool<PreloadTablesOperation<TTable, TEntry>>.Release(this);
        }
    }
}
