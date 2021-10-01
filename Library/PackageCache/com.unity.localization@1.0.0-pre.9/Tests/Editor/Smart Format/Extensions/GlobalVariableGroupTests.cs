using System;
using System.Linq;
using NUnit.Framework;
using UnityEngine.Localization.SmartFormat.GlobalVariables;

namespace UnityEngine.Localization.SmartFormat.Tests.Extensions
{
    public class GlobalVariableGroupTests
    {
        GlobalVariablesGroup m_Group;
        GlobalVariablesGroup m_NestedGroup;

        [SetUp]
        public void Setup()
        {
            m_Group = ScriptableObject.CreateInstance<GlobalVariablesGroup>();
            m_Group.Add("my-int-variable1", new IntGlobalVariable());
            m_Group.Add("my-int-variable2", new IntGlobalVariable());
            m_Group.Add("my-int-variable3", new IntGlobalVariable());
            m_Group.Add("my-int-variable4", new IntGlobalVariable());
            m_Group.Add("my-float-variable1", new FloatGlobalVariable());
            m_Group.Add("my-float-variable2", new FloatGlobalVariable());
            m_Group.Add("my-float-variable3", new FloatGlobalVariable());
            m_Group.Add("my-float-variable4", new FloatGlobalVariable());
            m_Group.Add("my-string-variable1", new StringGlobalVariable());
            m_Group.Add("my-string-variable2", new StringGlobalVariable());
            m_Group.Add("my-bool-variable1", new BoolGlobalVariable());
            m_Group.Add("my-bool-variable2", new BoolGlobalVariable());

            m_NestedGroup = ScriptableObject.CreateInstance<GlobalVariablesGroup>();
            m_Group.Add("nested", new NestedGlobalVariablesGroup { Value = m_NestedGroup });
        }

        [TearDown]
        public void Teardown()
        {
            Object.DestroyImmediate(m_Group);
            Object.DestroyImmediate(m_NestedGroup);
        }

        [TestCase("my-var", "my var")]
        [TestCase("-my-Var-", " my   Var    ")]
        [TestCase("some-global-variable", "some global variable")]
        [TestCase("some-global-variable-with-newline", "some global variable\nwith newline")]
        [TestCase("some-global-variable-with-tabs", "some-global\tvariable\twith\ttabs")]
        public void AddRemovesInvalidCharactersFromName(string expected, string name)
        {
            m_Group.Add(name, new IntGlobalVariable());
            Assert.False(m_Group.ContainsKey(name), "Expected group to not contain the invalid name");
            Assert.True(m_Group.ContainsKey(expected), "Expected group to contain the cleaned up name");
        }

        [TestCase("my-int-variable3")]
        [TestCase("my-int-variable4")]
        [TestCase("my-bool-variable2")]
        [TestCase("my-float-variable1")]
        [TestCase("nested")]
        public void GetVariable_ReturnsTheCorrectVariableByName(string name)
        {
            var gv = m_Group[name];
            Assert.NotNull(gv);

            Assert.True(m_Group.TryGetValue(name, out var tryGet));
            Assert.AreSame(gv, tryGet);

            var match = m_Group.m_Variables.FirstOrDefault(v => v.name == name);
            Assert.NotNull(match);
            Assert.AreEqual(gv, match.variable);
        }

        [TestCase("my-int-variable10")]
        [TestCase("my-int-variable44")]
        [TestCase("some other")]
        [TestCase("")]
        public void GetVariable_ReturnsNullWhenNameDoesNotExist(string name)
        {
            Assert.False(m_Group.TryGetValue(name, out var _));
        }

        [Test]
        public void Add_ValidatesArguments()
        {
            Assert.Throws<ArgumentException>(() => m_Group.Add(null, null));
            Assert.Throws<ArgumentException>(() => m_Group.Add(null, new StringGlobalVariable()));
            Assert.Throws<ArgumentNullException>(() => m_Group.Add("valid", null));
            Assert.Throws<ArgumentException>(() => m_Group.Add("", new StringGlobalVariable()));
            Assert.Throws<ArgumentException>(() => m_Group.Add("my-int-variable1", new StringGlobalVariable()));
        }

        [Test]
        public void Remove_RemovesItemAndAllowsNameToBeUsedAgain()
        {
            const string varName = "my-float-variable4";
            var gv = m_Group[varName];
            Assert.NotNull(gv);

            var countBefore = m_Group.Count;
            Assert.True(m_Group.Remove(varName));
            Assert.That(countBefore, Is.GreaterThan(m_Group.Count));

            m_Group.Add(varName, new IntGlobalVariable());
            Assert.AreEqual(countBefore, m_Group.Count);
        }

        [Test]
        public void Clear_RemovesAllItems()
        {
            Assert.Greater(m_Group.Count, 0);
            m_Group.Clear();
            Assert.IsEmpty(m_Group);
        }
    }
}
