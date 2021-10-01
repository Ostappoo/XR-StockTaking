using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Tables;

namespace UnityEditor.Localization.Plugins.Google.Columns
{
    /// <summary>
    /// The fields that will be populated during <see cref="GoogleSheets.PushStringTableCollection"/>.
    /// This is used to configure the send operation so that the data will be sent in the most efficient manner.
    /// This means that if you only wish to populate the value field of a sheet then using <see cref="PushFields.Value"/>
    /// will result in only the data for that field being sent, even if the note values have been set.
    /// </summary>
    [Flags]
    public enum PushFields
    {
        Value = 1,
        Note = 2,
        ValueAndNote = Value | Note
    }

    public interface IPullKeyColumn
    {
        SharedTableData.SharedTableEntry PullKey(string cellValue, string cellNote);
    }

    [Serializable]
    public abstract class SheetColumn
    {
        [SerializeField]
        string m_Column;

        /// <summary>
        /// The Id of the column.
        /// </summary>
        public string Column
        {
            get => m_Column;
            set => m_Column = value;
        }

        public abstract PushFields PushFields { get; }

        /// <summary>
        /// <see cref="Column"/> as an index where 0 = 'A', 1 = 'B' etc.
        /// </summary>
        public int ColumnIndex
        {
            get => ColumnNameToIndex(Column);
            set => Column = IndexToColumnName(value);
        }

        public abstract void PushBegin(StringTableCollection collection);

        /// <summary>
        /// Sets the column title and optional note. These values are always set regardless of the value of <see cref="PushFields"/>.
        /// </summary>
        /// <param name="collection"></param>
        /// <param name="header">The title to be used for the column header.</param>
        /// <param name="headerNote">Optional note that can be added to the header.</param>
        public abstract void PushHeader(StringTableCollection collection, out string header, out string headerNote);

        /// <summary>
        /// Extracts the data that should populate the columns cell for the row associated with the Key.
        /// </summary>
        /// <param name="keyEntry">The Key that represents the row in the spreadsheet.</param>
        /// <param name="tableEntries">The <see cref="StringTableEntry"/> for the current <see cref="SharedTableData.SharedTableEntry"/>.
        /// The order of the tables will match the source <see cref="StringTableCollection"/>, If a table does not contain data for the current key then a null entry will be used.</param>
        /// <param name="value">The value to be used for the cell. This can be null if <see cref="PushFields"/> is <see cref="Fields.Note"/> or the cell should be empty.</param>
        /// <param name="note">The value to be used for the cell note. This can be null if <see cref="PushFields"/> is <see cref="Fields.Value"/> or if there should not be a note for this cell.</param>
        public abstract void PushCellData(SharedTableData.SharedTableEntry keyEntry, IList<StringTableEntry> tableEntries, out string value, out string note);

        /// <summary>
        /// Called after all calls to <see cref="ExtractCellData"/> to provide an opurtunity to deinitialize, cleanup etc.
        /// </summary>
        public virtual void PushEnd() {}

        public abstract void PullBegin(StringTableCollection collection);

        public abstract void PullCellData(SharedTableData.SharedTableEntry keyEntry, string cellValue, string cellNote);

        public virtual void PullEnd() {}

        /// <summary>
        /// Converts a column id value into its name. Column ids start at 0.
        /// E.G 0 = 'A', 1 = 'B', 26 = 'AA', 27 = 'AB'
        /// </summary>
        /// <param name="id">Id of the column starting at 0('A').</param>
        /// <returns>The column name or null.</returns>
        public static string IndexToColumnName(int index)
        {
            index++;
            string result = null;
            while (--index >= 0)
            {
                result = (char)('A' + index % 26) + result;
                index /= 26;
            }
            return result;
        }

        /// <summary>
        /// Convert a column name to its id value.
        /// E.G 'A' = 0, 'B' = 1, 'AA' = 26, 'AB' = 27
        /// </summary>
        /// <param name="name">The name of the column, case insensitive.</param>
        /// <returns>The column index or 0.</returns>
        /// <exception cref="ArgumentException"></exception>
        public static int ColumnNameToIndex(string name)
        {
            int power = 1;
            int index = 0;
            for (int i = name.Length - 1; i >= 0; --i)
            {
                char c = name[i];
                char a = char.IsUpper(c) ? 'A' : 'a';
                int charId = c - a + 1;

                if (charId < 1 || charId > 26)
                    throw new ArgumentException($"Invalid Column Name '{name}'. Must only contain values 'A-Z'. Item at Index {i} was invalid '{c}'", nameof(name));

                index += charId * power;
                power *= 26;
            }
            return index - 1;
        }
    }
}
