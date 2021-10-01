using System;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.Localization.Tables;

namespace UnityEditor.Localization
{
    class LocalizationAssetPostProcessor : AssetPostprocessor
    {
        #pragma warning disable CA1801 // CA1801 Review unused parameters
        static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
        {
            // TODO: Handle deleted assets. We should use the asset guid to determine the asset type and what we need to do if anything.
            foreach (var assetPath in deletedAssets)
            {
                if (assetPath.EndsWith("asset"))
                {
                    LocalizationEditorSettings.Instance.TableCollectionCache.Clear();
                    break;
                }
            }

            foreach (var assetPath in importedAssets)
            {
                if (assetPath.EndsWith("asset"))
                {
                    var assetType = AssetDatabase.GetMainAssetTypeAtPath(assetPath);
                    if (typeof(LocalizationTableCollection).IsAssignableFrom(assetType))
                    {
                        var collection = AssetDatabase.LoadAssetAtPath<LocalizationTableCollection>(assetPath);
                        collection.ImportCollectionIntoProject();
                    }
                    else if (typeof(SharedTableData).IsAssignableFrom(assetType))
                    {
                        var sharedTableData = AssetDatabase.LoadAssetAtPath<SharedTableData>(assetPath);
                        if (sharedTableData != null)
                        {
                            Debug.Assert(AssetDatabase.TryGetGUIDAndLocalFileIdentifier(sharedTableData, out string sharedTableDataGuid, out long _), "Failed to extract SharedTableData Guid", sharedTableData);
                            var guid = Guid.Parse(sharedTableDataGuid);

                            if (sharedTableData.TableCollectionNameGuid != Guid.Empty)
                                Debug.Assert(sharedTableData.TableCollectionNameGuid == guid, "SharedTableData Name Guid does not match the assets Guid. This may cause issues matching the correct TableCollectionName.", sharedTableData);
                            else
                                sharedTableData.TableCollectionNameGuid = guid;

                            // If the collection asset was deleted and then restored we may have a collection using an invalid handle (LOC-182)
                            var collection = LocalizationEditorSettings.GetCollectionForSharedTableData(sharedTableData);
                            if (collection != null)
                            {
                                bool modified = false;
                                if (collection.SharedData == null)
                                {
                                    modified = true;
                                    collection.SharedData = sharedTableData;
                                }

                                foreach (var tableReference in collection.Tables)
                                {
                                    if (tableReference.asset == null && tableReference.asset.SharedData != null)
                                        continue;

                                    modified = true;
                                    tableReference.asset.SharedData = sharedTableData;
                                }

                                if (modified)
                                    LocalizationEditorSettings.EditorEvents.RaiseCollectionModified(null, collection);
                            }
                        }
                    }
                    else if (typeof(Locale).IsAssignableFrom(assetType))
                    {
                        var locale = AssetDatabase.LoadAssetAtPath<Locale>(assetPath);
                        Debug.Assert(locale != null, "Failed to load Locale asset.");
                        LocalizationEditorSettings.AddLocale(locale, false);
                    }
                }
            }
        }

        #pragma warning restore CA1801
    }

    class LocalizationAssetModificationProcessor : AssetModificationProcessor
    {
        static AssetDeleteResult OnWillDeleteAsset(string assetPath, RemoveAssetOptions _)
        {
            if (assetPath.EndsWith("asset"))
            {
                var assetType = AssetDatabase.GetMainAssetTypeAtPath(assetPath);
                if (typeof(LocalizationTableCollection).IsAssignableFrom(assetType))
                {
                    var tableCollection = AssetDatabase.LoadAssetAtPath<LocalizationTableCollection>(assetPath);
                    tableCollection.RemoveCollectionFromProject();
                }
                else if (typeof(SharedTableData).IsAssignableFrom(assetType))
                {
                    var sharedData = AssetDatabase.LoadAssetAtPath<SharedTableData>(assetPath);
                    var collection = LocalizationEditorSettings.GetCollectionForSharedTableData(sharedData);
                    collection?.RemoveCollectionFromProject();
                }
                else if (typeof(LocalizationTable).IsAssignableFrom(assetType))
                {
                    var table = AssetDatabase.LoadAssetAtPath<LocalizationTable>(assetPath);
                    var collection = LocalizationEditorSettings.GetCollectionFromTable(table);
                    collection?.RemoveTable(table);
                }
                else if (typeof(Locale).IsAssignableFrom(assetType))
                {
                    var locale = AssetDatabase.LoadAssetAtPath<Locale>(assetPath);
                    LocalizationEditorSettings.RemoveLocale(locale, false);
                }
            }
            return AssetDeleteResult.DidNotDelete;
        }
    }
}
