namespace StringLibrary
{
    public class String
    {
        protected string value;

        public String()
        {
            value = "";
        }

        public String(string val)
        {
            value = val;
        }

        public String(String other)
        {
            value = other.value;
        }

        public virtual int Length()
        {
            return value.Length;
        }

        public string GetValue()
        {
            return value;
        }
    }
}