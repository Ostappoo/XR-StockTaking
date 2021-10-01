using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using UnityEngine.Localization.SmartFormat;
using UnityEngine.Pool;

namespace UnityEngine.Localization.Pseudo
{
    /// <summary>
    /// A message fragment represents part of a <see cref="Message"/>.
    /// A Message can be broken into multiple <see cref="WritableMessageFragment"/> and <see cref="ReadOnlyMessageFragment"/> fragments.
    /// </summary>
    public abstract class MessageFragment
    {
        protected string m_OriginalString;
        protected int m_StartIndex;
        protected int m_EndIndex;
        string m_CachedToString;

        /// <summary>
        /// Total length of the fragment.
        /// </summary>
        public int Length => m_StartIndex == -1 ? m_OriginalString.Length : m_EndIndex - m_StartIndex;

        /// <summary>
        /// The message the fragment is part of.
        /// </summary>
        public Message @Message { get; private set; }

        internal void Initialize(Message parent, string original, int start, int end)
        {
            @Message = parent;
            m_OriginalString = original;
            m_StartIndex = start;
            m_EndIndex = end;
            m_CachedToString = null;
        }

        internal void Initialize(Message parent, string text)
        {
            @Message = parent;
            m_OriginalString = text;
            m_StartIndex = -1;
            m_EndIndex = -1;
            m_CachedToString = null;
        }

        /// <inheritdoc cref="Message.CreateTextFragment(string, int, int)"/>
        public WritableMessageFragment CreateTextFragment(int start, int end)
        {
            var frag = GenericPool<WritableMessageFragment>.Get();
            var startIndex = m_StartIndex == -1 ? start : m_StartIndex + start;
            frag.Initialize(@Message, m_OriginalString, startIndex, end);
            return frag;
        }

        /// <inheritdoc cref="Message.CreateReadonlyTextFragment(string, int, int)"/>
        public ReadOnlyMessageFragment CreateReadonlyTextFragment(int start, int end)
        {
            var frag = GenericPool<ReadOnlyMessageFragment>.Get();
            var startIndex = m_StartIndex == -1 ? start : m_StartIndex + start;
            frag.Initialize(@Message, m_OriginalString, startIndex, end);
            return frag;
        }

        public override string ToString()
        {
            if (m_CachedToString == null)
                m_CachedToString = m_StartIndex == -1 ? m_OriginalString : m_OriginalString.Substring(m_StartIndex, m_EndIndex - m_StartIndex);
            return m_CachedToString;
        }

        internal void BuildString(StringBuilder builder)
        {
            if (m_StartIndex == -1)
                builder.Append(m_OriginalString);
            else
                builder.Append(m_OriginalString, m_StartIndex, m_EndIndex - m_StartIndex);
        }

        public char this[int index]
        {
            get
            {
                var startIdx = m_StartIndex == -1 ? 0 : m_StartIndex;
                return m_OriginalString[startIdx + index];
            }
        }
    }

    /// <summary>
    /// Represents a message fragment that can be modifed.
    /// </summary>
    [DebuggerDisplay("Writable: {Text}")]
    public class WritableMessageFragment : MessageFragment
    {
        public string Text
        {
            get => ToString();
            set => Initialize(Message, value);
        }
    }

    /// <summary>
    /// Represents a message fragment that should be preserved and mot modifed.
    /// </summary>
    [DebuggerDisplay("ReadOnly: {Text}")]
    public class ReadOnlyMessageFragment : MessageFragment
    {
        public string Text => ToString();
    }

    /// <summary>
    /// A message is a piece of text that can be broken down into multiple sub fragments. A fragment can be writable or read only.
    /// A read only fragment indicates that the sub string should be preserved and not modified by ant pseudo methods.
    /// </summary>
    public class Message
    {
        /// <summary>
        /// The original text before it was broken into fragments.
        /// </summary>
        public string Original { get; private set; }

        /// <summary>
        /// A message is comprised of writable and readonly fragments. Readonly fragments are those that should be preserved such as xml/rich text tags.
        /// </summary>
        public List<MessageFragment> Fragments { get; private set; } = new List<MessageFragment>();

        /// <summary>
        /// Total length of the Message including all Fragments.
        /// </summary>
        public int Length
        {
            get
            {
                int l = 0;
                foreach (var f in Fragments)
                {
                    l += f.Length;
                }
                return l;
            }
        }

        /// <summary>
        /// Creates a new <see cref="WritableMessageFragment"/> which represents a sub string of the original.
        /// Fragments are created using an ObjectPool so they can be reused. Use <see cref="ReleaseFragment(MessageFragment)"/> to return the fragment.
        /// </summary>
        /// <param name="original">Original string</param>
        /// <param name="start">Sub string start</param>
        /// <param name="end">Sub string end</param>
        /// <returns>A new fragment.</returns>
        public WritableMessageFragment CreateTextFragment(string original, int start, int end)
        {
            var frag = GenericPool<WritableMessageFragment>.Get();
            frag.Initialize(this, original, start, end);
            return frag;
        }

        /// <summary>
        /// Creates a new <see cref="WritableMessageFragment"/> which represents a string.
        /// Fragments are created using an ObjectPool so they can be reused. Use <see cref="ReleaseFragment(MessageFragment)"/> to
        /// return the fragment or allow the Message to handle returning the fragment if it is part of <see cref="Fragments"/>.
        /// </summary>
        /// <param name="original">The source string.</param>
        /// <returns>A new fragment.</returns>
        public WritableMessageFragment CreateTextFragment(string original)
        {
            var frag = GenericPool<WritableMessageFragment>.Get();
            frag.Initialize(this, original);
            return frag;
        }

        /// <summary>
        /// Creates a <see cref="ReadOnlyMessageFragment"/> which represents a sub string of the original that should
        /// be preserved and not modified by any other pseudo methods.
        /// Fragments are created using an ObjectPool so they can be reused. Use <see cref="ReleaseFragment(MessageFragment)"/> to
        /// return the fragment or allow the Message to handle returning the fragment if it is part of <see cref="Fragments"/>.
        /// </summary>
        /// <param name="original">Original string</param>
        /// <param name="start">Sub string start</param>
        /// <param name="end">Sub string end</param>
        /// <returns>A new fragment.</returns>
        public ReadOnlyMessageFragment CreateReadonlyTextFragment(string original, int start, int end)
        {
            var frag = GenericPool<ReadOnlyMessageFragment>.Get();
            frag.Initialize(this, original, start, end);
            return frag;
        }

        /// <summary>
        /// Creates a <see cref="ReadOnlyMessageFragment"/> which represents string that should be preserved and not modified by any other pseudo methods.
        /// Fragments are created using an ObjectPool so they can be reused. Use <see cref="ReleaseFragment(MessageFragment)"/> to
        /// return the fragment or allow the Message to handle returning the fragment if it is part of <see cref="Fragments"/>.
        /// </summary>
        /// <param name="original">The source string.</param>
        /// <returns>A new fragment.</returns>
        public ReadOnlyMessageFragment CreateReadonlyTextFragment(string original)
        {
            var frag = GenericPool<ReadOnlyMessageFragment>.Get();
            frag.Initialize(this, original);
            return frag;
        }

        /// <summary>
        /// Replaces the Fragments in <see cref="Fragments"/> and returns the previous fragment back to the ObjectPool so it can be reused.
        /// </summary>
        /// <param name="original">Fragment to replace.</param>
        /// <param name="repacement">Replacement Fragment.</param>
        public void ReplaceFragment(MessageFragment original, MessageFragment repacement)
        {
            var index = Fragments.IndexOf(original);
            if (index == -1)
                throw new Exception($"Can not replace Fragment {original.ToString()} that is not part of the message.");

            Fragments[index] = repacement;
            ReleaseFragment(original);
        }

        /// <summary>
        /// Returns a Fragment back to its ObjectPool so it can be used again.
        /// </summary>
        /// <param name="fragment"></param>
        public void ReleaseFragment(MessageFragment fragment)
        {
            if (fragment is WritableMessageFragment wmf)
                GenericPool<WritableMessageFragment>.Release(wmf);
            else if (fragment is ReadOnlyMessageFragment romf)
                GenericPool<ReadOnlyMessageFragment>.Release(romf);
        }

        /// <summary>
        /// Creates a new message to represent a piece of text.
        /// </summary>
        /// <param name="text">The source text.</param>
        /// <returns>A new Message instance.</returns>
        internal static Message CreateMessage(string text)
        {
            var message = GenericPool<Message>.Get();
            message.Fragments.Add(message.CreateTextFragment(text));
            message.Original = text;
            return message;
        }

        internal void Release()
        {
            foreach (var f in Fragments)
            {
                ReleaseFragment(f);
            }
            Fragments.Clear();

            GenericPool<Message>.Release(this);
        }

        public override string ToString()
        {
            using (StringBuilderPool.Get(out var stringBuilder))
            {
                foreach (var f in Fragments)
                {
                    f.BuildString(stringBuilder);
                }
                return stringBuilder.ToString();
            }
        }
    }
}
