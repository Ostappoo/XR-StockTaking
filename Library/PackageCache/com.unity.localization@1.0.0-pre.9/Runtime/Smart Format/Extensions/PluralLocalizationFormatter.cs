using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using UnityEngine.Localization.Settings;
using UnityEngine.Localization.SmartFormat.Core.Extensions;
using UnityEngine.Localization.SmartFormat.Core.Formatting;
using UnityEngine.Localization.SmartFormat.Utilities;

namespace UnityEngine.Localization.SmartFormat.Extensions
{
    [Serializable]
    public class PluralLocalizationFormatter : FormatterBase, IFormatterLiteralExtractor
    {
        [SerializeField]
        string m_DefaultTwoLetterISOLanguageName = "en";

        PluralRules.PluralRuleDelegate m_DefaultPluralRule;

        public string DefaultTwoLetterISOLanguageName
        {
            get => m_DefaultTwoLetterISOLanguageName;
            set
            {
                m_DefaultTwoLetterISOLanguageName = value;
                m_DefaultPluralRule = PluralRules.GetPluralRule(value);
            }
        }

        public PluralLocalizationFormatter()
        {
            Names = DefaultNames;
        }

        public override string[] DefaultNames => new[] { "plural", "p", "" };

        public override bool TryEvaluateFormat(IFormattingInfo formattingInfo)
        {
            var format = formattingInfo.Format;
            var current = formattingInfo.CurrentValue;

            // Ignore formats that start with "?" (this can be used to bypass this extension)
            if (format == null || format.baseString[format.startIndex] == ':') return false;

            // Extract the plural words from the format string:
            var pluralWords = format.Split('|');
            // This extension requires at least two plural words:
            if (pluralWords.Count == 1) return false;

            decimal value;

            // We can format numbers, and IEnumerables. For IEnumerables we look at the number of items
            // in the collection: this means the user can e.g. use the same parameter for both plural and list, for example
            // 'Smart.Format("The following {0:plural:person is|people are} impressed: {0:list:{}|, |, and}", new[] { "bob", "alice" });'
            if (current is byte || current is short || current is int || current is long
                || current is float || current is double || current is decimal
                || current is ushort || current is uint || current is ulong)
                value = Convert.ToDecimal(current);
            else if (current is IEnumerable<object> objects)
                value = objects.Count();
            else
                return false;


            // Get the plural rule:
            var pluralRule = GetPluralRule(formattingInfo);

            if (pluralRule == null) return false;

            var pluralCount = pluralWords.Count;
            var pluralIndex = pluralRule(value, pluralCount);

            if (pluralIndex < 0 || pluralWords.Count <= pluralIndex)
                throw new FormattingException(format, "Invalid number of plural parameters",
                    pluralWords.Last().endIndex);

            // Output the selected word (allowing for nested formats):
            var pluralForm = pluralWords[pluralIndex];
            formattingInfo.Write(pluralForm, current);
            return true;
        }

        protected virtual PluralRules.PluralRuleDelegate GetPluralRule(IFormattingInfo formattingInfo)
        {
            // See if the language was explicitly passed:
            var pluralOptions = formattingInfo.FormatterOptions;
            if (pluralOptions.Length != 0) return PluralRules.GetPluralRule(pluralOptions);

            // See if a CustomPluralRuleProvider is available from the FormatProvider:
            var provider = formattingInfo.FormatDetails.Provider;
            var pluralRuleProvider =
                (CustomPluralRuleProvider)provider?.GetFormat(typeof(CustomPluralRuleProvider));
            if (pluralRuleProvider != null) return pluralRuleProvider.GetPluralRule();

            // Use the CultureInfo, if provided:
            if (provider is CultureInfo cultureInfo)
            {
                var culturePluralRule = PluralRules.GetPluralRule(cultureInfo.TwoLetterISOLanguageName);
                return culturePluralRule;
            }

            // If the AvailableLocales requires preloading and it is not ready then we can not get the SelectedLocale and must skip this step.
            Locale selectedLocale = null;
            var localeOp = LocalizationSettings.SelectedLocaleAsync;
            if (localeOp.IsDone)
            {
                selectedLocale = localeOp.Result;
            }

            if (selectedLocale != null)
            {
                string isoCode;
                var localeCultureInfo = selectedLocale.Identifier.CultureInfo;
                if (localeCultureInfo != null)
                {
                    isoCode = localeCultureInfo.TwoLetterISOLanguageName;
                }
                else
                {
                    isoCode = selectedLocale.Identifier.Code;
                    if (selectedLocale.Identifier.Code.Length > 2)
                        isoCode = selectedLocale.Identifier.Code.Substring(0, 2);
                }

                var culturePluralRule = PluralRules.GetPluralRule(isoCode);
                return culturePluralRule;
            }

            return m_DefaultPluralRule ?? (m_DefaultPluralRule = PluralRules.GetPluralRule(DefaultTwoLetterISOLanguageName));
        }

        public void WriteAllLiterals(IFormattingInfo formattingInfo)
        {
            var format = formattingInfo.Format;

            // Ignore formats that start with "?" (this can be used to bypass this extension)
            if (format == null || format.baseString[format.startIndex] == ':')
                return;

            // Extract the plural words from the format string:
            var pluralWords = format.Split('|');
            // This extension requires at least two plural words:
            if (pluralWords.Count == 1)
                return;

            for (int i = 0; i < pluralWords.Count; ++i)
            {
                formattingInfo.Write(pluralWords[i], null);
            }
        }
    }

    /// <summary>
    /// Use this class to provide custom plural rules to Smart.Format
    /// </summary>
    public class CustomPluralRuleProvider : IFormatProvider
    {
        private readonly PluralRules.PluralRuleDelegate _pluralRule;

        public CustomPluralRuleProvider(PluralRules.PluralRuleDelegate pluralRule)
        {
            _pluralRule = pluralRule;
        }

        public object GetFormat(Type formatType)
        {
            return formatType == typeof(CustomPluralRuleProvider) ? this : null;
        }

        public PluralRules.PluralRuleDelegate GetPluralRule()
        {
            return _pluralRule;
        }
    }
}
