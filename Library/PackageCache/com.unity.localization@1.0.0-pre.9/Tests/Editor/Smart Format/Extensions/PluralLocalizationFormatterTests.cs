using System.Globalization;
using NUnit.Framework;
using UnityEngine.Localization.SmartFormat.Extensions;
using UnityEngine.Localization.SmartFormat.Utilities;
using ExpectedResults = System.Collections.Generic.Dictionary<decimal, string>;

namespace UnityEngine.Localization.SmartFormat.Tests.Extensions
{
    public class PluralLocalizationFormatterTests
    {
        private void TestAllResults(CultureInfo cultureInfo, string format, ExpectedResults expectedValuesAndResults)
        {
            foreach (var test in expectedValuesAndResults)
            {
                var value = test.Key;
                var expected = test.Value;
                var actual = Smart.Format(cultureInfo, format, value);

                Assert.That(actual, Is.EqualTo(expected));
                System.Diagnostics.Debug.WriteLine(actual);
            }
        }

        [Test]
        public void Test_Default()
        {
            TestAllResults(
                new CultureInfo("en-US"),
                "There {0:is|are} {0} {0:item|items} remaining",
                new ExpectedResults
                {
                    {  -1, "There are -1 items remaining"},
                    {   0, "There are 0 items remaining"},
                    {0.5m, "There are 0.5 items remaining"},
                    {   1, "There is 1 item remaining"},
                    {1.5m, "There are 1.5 items remaining"},
                    {   2, "There are 2 items remaining"},
                    {  11, "There are 11 items remaining"},
                });
        }

        [Test]
        public void Test_English()
        {
            TestAllResults(
                new CultureInfo("en-US"),
                "There {0:is|are} {0} {0:item|items} remaining",
                new ExpectedResults
                {
                    {  -1, "There are -1 items remaining"},
                    {   0, "There are 0 items remaining"},
                    {0.5m, "There are 0.5 items remaining"},
                    {   1, "There is 1 item remaining"},
                    {1.5m, "There are 1.5 items remaining"},
                    {   2, "There are 2 items remaining"},
                    {  11, "There are 11 items remaining"},
                });
        }

        [Test]
        public void Test_English_Unsigned()
        {
            /**
             * Different pattern for this test because simply casting ints to u* types
             * for use in TestCase or ExpectedResults will pass with the old code
             * but actually declaring them as u* doesn't.
             */

            const string format = "There {0:plural(en):is|are} {0} {0:plural(en):item|items} remaining";

            var expectedResults = new[]
            {
                "There are 0 items remaining",
                "There is 1 item remaining",
                "There are 2 items remaining"
            };

            for (ushort i = 0; i < expectedResults.Length; i++)
            {
                var actualResult = Smart.Format(format, i);
                Assert.AreEqual(expectedResults[i], actualResult);
            }

            for (uint i = 0; i < expectedResults.Length; i++)
            {
                var actualResult = Smart.Format(format, i);
                Assert.AreEqual(expectedResults[i], actualResult);
            }

            for (ulong i = 0; i < (ulong)expectedResults.Length; i++)
            {
                var actualResult = Smart.Format(format, i);
                Assert.AreEqual(expectedResults[i], actualResult);
            }
        }

        [Test]
        public void Test_Turkish()
        {
            TestAllResults(
                new CultureInfo("tr-TR"),
                "{0} nesne kald??.",
                new ExpectedResults
                {
                    {   0, "0 nesne kald??."},
                    {   1, "1 nesne kald??."},
                    {   2, "2 nesne kald??."},
                });

            TestAllResults(
                new CultureInfo("tr"),
                "Se??ili {0:nesneyi|nesneleri} silmek istiyor musunuz?",
                new ExpectedResults
                {
                    {  -1, "Se??ili nesneleri silmek istiyor musunuz?"},
                    {   0, "Se??ili nesneleri silmek istiyor musunuz?"},
                    {0.5m, "Se??ili nesneleri silmek istiyor musunuz?"},
                    {   1, "Se??ili nesneyi silmek istiyor musunuz?"},
                    {1.5m, "Se??ili nesneleri silmek istiyor musunuz?"},
                    {   2, "Se??ili nesneleri silmek istiyor musunuz?"},
                    {  11, "Se??ili nesneleri silmek istiyor musunuz?"},
                });
        }

        [Test]
        public void Test_Russian()
        {
            TestAllResults(
                new CultureInfo("ru-RU"),
                "?? ?????????? {0} {0:??????????|????????????|??????????????}.",
                new ExpectedResults
                {
                    {   0, "?? ?????????? 0 ??????????????."},
                    {   1, "?? ?????????? 1 ??????????."},
                    {   2, "?? ?????????? 2 ????????????."},
                    {  11, "?? ?????????? 11 ??????????????."},
                    {  20, "?? ?????????? 20 ??????????????."},
                    {  21, "?? ?????????? 21 ??????????."},
                    {  22, "?? ?????????? 22 ????????????."},
                    {  25, "?? ?????????? 25 ??????????????."},
                    {  120, "?? ?????????? 120 ??????????????."},
                    {  121, "?? ?????????? 121 ??????????."},
                    {  122, "?? ?????????? 122 ????????????."},
                    {  125, "?? ?????????? 125 ??????????????."},
                });
        }

        [Test]
        public void Test_Polish()
        {
            TestAllResults(
                new CultureInfo("pl"),
                "{0} {0:miesi??c|miesi??ce|miesi??cy} temu",
                new ExpectedResults
                {
                    {   0, "0 miesi??cy temu"},
                    {   1, "1 miesi??c temu"},
                    {   2, "2 miesi??ce temu"},
                    {   3, "3 miesi??ce temu"},
                    {   4, "4 miesi??ce temu"},
                    {   5, "5 miesi??cy temu"},
                    {   6, "6 miesi??cy temu"},
                    {   7, "7 miesi??cy temu"},
                    {   8, "8 miesi??cy temu"},
                    {   9, "9 miesi??cy temu"},
                    {  10, "10 miesi??cy temu"},
                    {  11, "11 miesi??cy temu"},
                    {  12, "12 miesi??cy temu"},
                    {  13, "13 miesi??cy temu"},
                    {  14, "14 miesi??cy temu"},
                    {  15, "15 miesi??cy temu"},
                    {  16, "16 miesi??cy temu"},
                    {  17, "17 miesi??cy temu"},
                    {  18, "18 miesi??cy temu"},
                    {  19, "19 miesi??cy temu"},
                    {  20, "20 miesi??cy temu"},
                    {  21, "21 miesi??cy temu"},
                    {  22, "22 miesi??ce temu"},
                    {  23, "23 miesi??ce temu"},
                    {  24, "24 miesi??ce temu"},
                    {  25, "25 miesi??cy temu"},
                    {  100, "100 miesi??cy temu"},
                    {  101, "101 miesi??cy temu"},
                    {  102, "102 miesi??ce temu"},
                    {  103, "103 miesi??ce temu"},
                    {  104, "104 miesi??ce temu"},
                    {  105, "105 miesi??cy temu"},
                });
        }

        [Test]
        [TestCase("{0} {0:plural(en):zero|one|many} {0:plural(pl):miesi??c|miesi??ce|miesi??cy}", 0, "0 zero miesi??cy")]
        [TestCase("{0} {0:plural(en):zero|one|many} {0:plural(pl):miesi??c|miesi??ce|miesi??cy}", 1, "1 one miesi??c")]
        [TestCase("{0} {0:plural(en):zero|one|many} {0:plural(pl):miesi??c|miesi??ce|miesi??cy}", 2, "2 many miesi??ce")]
        [TestCase("{0} {0:plural(en):zero|one|many} {0:plural(pl):miesi??c|miesi??ce|miesi??cy}", 5, "5 many miesi??cy")]
        public void NamedFormatter_should_use_specific_language(string format, object arg0, string expectedResult)
        {
            var actualResult = Smart.Format(format, arg0);
            Assert.AreEqual(expectedResult, actualResult);
        }

        [Test]
        [TestCase("{0:plural:zero|one|many}", new string[0], "zero")]
        [TestCase("{0:plural:zero|one|many}", new[] { "alice" }, "one")]
        [TestCase("{0:plural:zero|one|many}", new[] { "alice", "bob" }, "many")]
        public void Test_should_allow_ienumerable_parameter(string format, object arg0, string expectedResult)
        {
            var culture = new CultureInfo("en-US");
            var actualResult = Smart.Format(culture, format, arg0);
            Assert.AreEqual(expectedResult, actualResult);
        }

        [Test]
        public void Test_With_CustomPluralRuleProvider()
        {
            var actualResult = Smart.Format(new CustomPluralRuleProvider(PluralRules.GetPluralRule("de")), "{0:plural:Frau|Frauen}", new string[2], "more");
            Assert.AreEqual("Frauen", actualResult);

            actualResult = Smart.Format(new CustomPluralRuleProvider(PluralRules.GetPluralRule("en")), "{0:plural:person|people}", new string[2], "more");
            Assert.AreEqual("people", actualResult);

            actualResult = Smart.Format(new CustomPluralRuleProvider(PluralRules.GetPluralRule("en")), "{0:plural:person|people}", new string[1], "one");
            Assert.AreEqual("person", actualResult);
        }
    }
}
