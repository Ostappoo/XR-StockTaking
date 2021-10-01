using System;
using System.Collections.Generic;
using CsvHelper;
using UnityEngine;
using UnityEngine.Localization.Metadata;
using UnityEngine.Localization.Tables;

namespace UnityEditor.Localization.Plugins.CSV.Columns
{
    /// <summary>
    /// Represents 3 possible columns in CSV data:
    /// <list type="number">
    /// <item>Key - The unique name of the entry. This value is always included when exporting.</item>
    /// <item>Id - The Id value for the entry. This field is optional however strongly recomended if you expect to change the Key names.</item>
    /// <item>Shared Comments - <see cref="Comment"/> taken from <see cref="SharedTableData"/> for each entry. This field is optional.</item>
    /// </list>
    /// When importing from CSV all columns are treated as optional however there must be at least 1 Key or Id field.
    /// When adding new values to be imported from the CSV the Id field can be left blank or given the value 0, a new Id will be assigned during import.
    /// </summary>
    [Serializable]
    public class KeyIdColumns : CsvColumns, IKeyColumn
    {
        [Tooltip("Should the Id be included as an additional column? It is recommended to enable this if you expect Key names to have changed when re-importing the CSV file.")]
        [SerializeField] bool m_IncludeId = true;

        [Tooltip("Should the Comment metadata be included as a Column?")]
        [SerializeField] bool m_IncludeSharedComments = true;

        [Tooltip("The name of the Key Column that should be used as the header when exporting and mapped against when importing.")]
        [SerializeField] string m_KeyFieldName = "Key";

        [Tooltip("The name of the Id Column that should be used as the header when exporting and mapped against when importing.")]
        [SerializeField] string m_IdFieldName = "Id";

        [Tooltip("The name of the Comment Column that should be used as the header when exporting and mapped against when importing.")]
        [SerializeField] string m_CommentFieldName = "Shared Comments";

        SharedTableData m_SharedTableData;
        int m_KeyFieldIndex, m_IdFieldIndex, m_CommentFieldIndex;

        /// <summary>
        /// Should the Id field be included as a field when exporting?
        /// When importing <see cref="IdFieldName"/> will be used to determine if the field is present.
        /// </summary>
        public bool IncludeId
        {
            get => m_IncludeId;
            set => m_IncludeId = value;
        }

        /// <summary>
        /// Should the shared <see cref="Comment"/> be included as a field when exporting?
        /// When importing <see cref="SharedCommentFieldName"/> will be used to determine if the field is present.
        /// </summary>
        public bool IncludeSharedComments
        {
            get => m_IncludeSharedComments;
            set => m_IncludeSharedComments = value;
        }

        /// <summary>
        /// The name of the Key field when exporting and importing.
        /// When importing this name will be checked against the headers to determine if a Key column is present in the CSV data.
        /// </summary>
        public string KeyFieldName
        {
            get => m_KeyFieldName;
            set => m_KeyFieldName = value;
        }

        /// <summary>
        /// The name of the Id field when exporting and importing.
        /// When importing this name will be checked against the headers to determine if an Id column is present in the CSV data.
        /// </summary>
        public string IdFieldName
        {
            get => m_IdFieldName;
            set => m_IdFieldName = value;
        }

        /// <summary>
        /// The name of the Shared Comments field when importing and exporting.
        /// When importing this name will be checked against the headers to determine if a Shared Comment column is present in the CSV data.
        /// </summary>
        public string SharedCommentFieldName
        {
            get => m_CommentFieldName;
            set => m_CommentFieldName = value;
        }

        public override void ReadBegin(StringTableCollection collection, CsvReader csvReader)
        {
            m_SharedTableData = collection.SharedData;
            m_KeyFieldIndex = csvReader.GetFieldIndex(KeyFieldName, isTryGet: true);
            m_IdFieldIndex = csvReader.GetFieldIndex(IdFieldName, isTryGet: true);

            if (m_KeyFieldIndex == -1 && m_IdFieldIndex == -1)
            {
                var list = string.Join(",", csvReader.Context.HeaderRecord);
                throw new Exception($"Could not find a header field with the name `{KeyFieldName}` or an Id field with the name `{IdFieldName}`.\nAt least 1 Key or Id field must exist in the header field names:\n`{list}`");
            }

            m_CommentFieldIndex = csvReader.GetFieldIndex(SharedCommentFieldName, isTryGet: true);
        }

        public override void ReadEnd(StringTableCollection collection)
        {
            m_SharedTableData = null;
        }

        public override void ReadRow(SharedTableData.SharedTableEntry keyEntry, CsvReader reader) {}

        public override void WriteBegin(StringTableCollection collection, CsvWriter csvWriter)
        {
            csvWriter.WriteField("Key");

            if (IncludeId)
                csvWriter.WriteField("Id");

            if (IncludeSharedComments)
                csvWriter.WriteField("Shared Comment");
        }

        public override void WriteRow(SharedTableData.SharedTableEntry keyEntry, IList<StringTableEntry> tableEntries, CsvWriter writer)
        {
            writer.WriteField(keyEntry.Key, true);

            if (IncludeId)
                writer.WriteField(keyEntry.Id);

            if (IncludeSharedComments)
            {
                var comment = keyEntry.Metadata.GetMetadata<Comment>();
                writer.WriteField(comment?.CommentText, true);
            }
        }

        public SharedTableData.SharedTableEntry ReadKey(CsvReader reader)
        {
            SharedTableData.SharedTableEntry key;
            string keyName = null;

            if (m_KeyFieldIndex != -1)
                keyName = reader.GetField(m_KeyFieldIndex);

            // The Id field is optional so that a new value can be added to existing data. We will generate an Id for it
            long id = 0;
            bool hasId = m_IdFieldIndex != -1 ? reader.TryGetField<long>(m_IdFieldIndex, out id) : false;
            if (hasId && id != 0)
            {
                key = m_SharedTableData.GetEntry(id);

                if (key == null)
                {
                    // Add a new key entry
                    if (string.IsNullOrEmpty(keyName))
                    {
                        key = m_SharedTableData.AddKey();
                        m_SharedTableData.RemapId(key.Id, id);
                    }
                    else
                    {
                        key = m_SharedTableData.AddKey(keyName, id);
                    }
                }
                else if (key.Key != keyName)
                {
                    // Rename the key
                    m_SharedTableData.RenameKey(key.Id, keyName);
                }
            }
            else
            {
                key = m_SharedTableData.GetEntry(keyName) ?? m_SharedTableData.AddKey(keyName);
            }

            if (m_CommentFieldIndex != -1)
            {
                var comment = key.Metadata.GetMetadata<Comment>();
                if (comment == null)
                {
                    comment = new Comment();
                    key.Metadata.AddMetadata(comment);
                }
                comment.CommentText = reader.GetField(m_CommentFieldIndex);
            }

            return key;
        }
    }
}
