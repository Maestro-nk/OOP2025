using System;

namespace StringOperations
{
    public class CustomString
    {
        private string value;

        public CustomString()
        {
            value = "";
        }

        public CustomString(string val)
        {
            value = val;
        }

        public CustomString(CustomString other)
        {
            value = other.value;
        }

        public int Length()
        {
            return value.Length;
        }

        public string GetValue()
        {
            return value;
        }

        public static CustomString operator +(CustomString a, CustomString b)
        {
            return new CustomString(a.value + b.value);
        }

        public static CustomString operator *(CustomString a, int times)
        {
            string result = "";
            for (int i = 0; i < times; i++)
            {
                result += a.value;
            }
            return new CustomString(result);
        }
    }
}

