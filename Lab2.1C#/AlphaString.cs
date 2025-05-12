using System;
using System.Linq;

namespace StringLibrary
{
    public class AlphaString : String
    {
        public AlphaString() : base() { }

        public AlphaString(string val) : base(val)
        {
            if (!IsAlpha())
                value = "";
        }

        public AlphaString(AlphaString other) : base(other) { }

        public void ShiftRight()
        {
            if (value.Length == 0) return;
            value = value[^1..] + value[..^1];
        }

        private bool IsAlpha()
        {
            return value.All(char.IsLetter);
        }
    }
}