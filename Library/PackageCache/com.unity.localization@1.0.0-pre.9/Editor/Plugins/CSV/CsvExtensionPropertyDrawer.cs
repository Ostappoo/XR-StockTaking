using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor.Localization.Plugins.CSV.Columns;
using UnityEditor.Localization.Reporting;
using UnityEditor.Localization.UI;
using UnityEngine;

namespace UnityEditor.Localization.Plugins.CSV
{
    class CsvExtensionPropertyDrawerData
    {
        public SerializedProperty m_Columns;
        public SerializedProperty m_ConnectedFile;
        public ReorderableListExtended m_ColumnsList;
    }

    [CustomPropertyDrawer(typeof(CsvExtension))]
    class CsvExtensionPropertyDrawer : PropertyDrawerExtended<CsvExtensionPropertyDrawerData>
    {
        class Styles
        {
            public static readonly GUIContent addDefaultColumns = new GUIContent("Add Default Columns");
            public static readonly GUIContent addDefaultColumnsWithComments = new GUIContent("Add Default Columns(With Comments)");
            public static readonly GUIContent header = new GUIContent("Comma Separated Values (CSV)");
            public static readonly GUIContent save = new GUIContent("Save");
            public static readonly GUIContent open = new GUIContent("Open");
            public static readonly GUIContent import = new GUIContent("Import");
            public static readonly GUIContent export = new GUIContent("Export");
        }

        public override CsvExtensionPropertyDrawerData CreatePropertyData(SerializedProperty property)
        {
            var data = new CsvExtensionPropertyDrawerData
            {
                m_Columns = property.FindPropertyRelative("m_ColumnsList"),
                m_ConnectedFile = property.FindPropertyRelative("m_ConnectedFile")
            };
            data.m_ColumnsList = new ReorderableListExtended(property.serializedObject, data.m_Columns);
            data.m_ColumnsList.AddMenuType = typeof(CsvColumns);
            data.m_ColumnsList.AddMenuItems = menu =>
            {
                menu.AddItem(Styles.addDefaultColumns, false, () => AddDefaultColumns(data, false));
                menu.AddItem(Styles.addDefaultColumnsWithComments, false, () => AddDefaultColumns(data, true));
            };

            return data;
        }

        static void AddDefaultColumns(CsvExtensionPropertyDrawerData data, bool includeComments)
        {
            var columns = ColumnMapping.CreateDefaultMapping(includeComments);

            data.m_Columns.ClearArray();
            foreach (var c in columns)
            {
                var colElement = data.m_Columns.AddArrayElement();
                colElement.managedReferenceValue = c;
            }
            data.m_Columns.serializedObject.ApplyModifiedProperties();
        }

        static void Export(string path, StringTableCollection collection, IList<CsvColumns> columns)
        {
            using (var stream = new StreamWriter(path, false, Encoding.UTF8))
            {
                var reporter = TaskReporter.CreateDefaultReporter();
                reporter.Start("Exporting " + path, string.Empty);
                Csv.Export(stream, collection, columns, reporter);
            }
        }

        static void Import(string path, StringTableCollection collection, IList<CsvColumns> columns)
        {
            using (var stream = new StreamReader(path))
            {
                var reporter = TaskReporter.CreateDefaultReporter();
                reporter.Start("Importing " + path, string.Empty);
                Csv.ImportInto(stream, collection, columns, true, reporter);
            }
        }

        public override float GetPropertyHeight(CsvExtensionPropertyDrawerData data, SerializedProperty property, GUIContent label)
        {
            float height = data.m_ColumnsList.GetHeight() + (EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing) * 3;
            if (!string.IsNullOrEmpty(data.m_ConnectedFile.stringValue))
                height += (EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing) * 2;
            return height;
        }

        public override void OnGUI(CsvExtensionPropertyDrawerData data, Rect position, SerializedProperty property, GUIContent label)
        {
            position.yMin += EditorGUIUtility.standardVerticalSpacing;
            position.height = EditorGUIUtility.singleLineHeight;

            EditorGUI.LabelField(position, Styles.header, EditorStyles.boldLabel);
            position.MoveToNextLine();

            position.height = data.m_ColumnsList.GetHeight();
            data.m_ColumnsList.DoList(position);
            position.MoveToNextLine();
            position.height = EditorGUIUtility.singleLineHeight;
            var buttonsRect = position.SplitHorizontal();
            position.MoveToNextLine();

            if (GUI.Button(buttonsRect.left, Styles.save))
            {
                var target = property.GetActualObjectForSerializedProperty<CsvExtension>(fieldInfo);
                var collection = target.TargetCollection as StringTableCollection;

                var path = EditorUtility.SaveFilePanel("Export to CSV", MenuItems.PreviousDirectory, collection.TableCollectionName, "csv");
                if (string.IsNullOrEmpty(path))
                    return;

                data.m_ConnectedFile.stringValue = path;
                Export(path, collection, target.Columns);
            }

            if (GUI.Button(buttonsRect.right, Styles.open))
            {
                var target = property.GetActualObjectForSerializedProperty<CsvExtension>(fieldInfo);
                var collection = target.TargetCollection as StringTableCollection;

                var path = EditorUtility.OpenFilePanel("Import CSV", MenuItems.PreviousDirectory, "csv");
                if (string.IsNullOrEmpty(path))
                    return;

                data.m_ConnectedFile.stringValue = path;
                Import(path, collection, target.Columns);
            }

            if (!string.IsNullOrEmpty(data.m_ConnectedFile.stringValue))
            {
                position.height = (EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing) * 2;
                EditorGUI.HelpBox(position, string.Empty, MessageType.None);

                position.height = EditorGUIUtility.singleLineHeight;
                var split = position.SplitHorizontalFixedWidthRight(20);

                EditorGUI.LabelField(split.left, data.m_ConnectedFile.stringValue, EditorStyles.miniLabel);
                if (GUI.Button(split.right, "-"))
                {
                    data.m_ConnectedFile.stringValue = string.Empty;
                }
                position.MoveToNextLine();

                var syncButtonsRect = position.SplitHorizontal();

                if (GUI.Button(syncButtonsRect.left, Styles.export))
                {
                    var target = property.GetActualObjectForSerializedProperty<CsvExtension>(fieldInfo);
                    var collection = target.TargetCollection as StringTableCollection;
                    Export(data.m_ConnectedFile.stringValue, collection, target.Columns);
                }

                using (new EditorGUI.DisabledScope(!File.Exists(data.m_ConnectedFile.stringValue)))
                {
                    if (GUI.Button(syncButtonsRect.right, Styles.import))
                    {
                        var target = property.GetActualObjectForSerializedProperty<CsvExtension>(fieldInfo);
                        var collection = target.TargetCollection as StringTableCollection;
                        Import(data.m_ConnectedFile.stringValue, collection, target.Columns);
                    }
                }
                position.MoveToNextLine();
            }
        }
    }
}
