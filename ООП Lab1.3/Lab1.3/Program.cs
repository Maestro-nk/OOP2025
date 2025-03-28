using System;
using StringOperations;

class Program
{
    static void Main(string[] args)
    {
        CustomString CB1, CB2, CB3;

        Console.WriteLine("Enter string for CB2:");
        CB2 = new CustomString(Console.ReadLine());

        Console.WriteLine("Enter string for CB3:");
        CB3 = new CustomString(Console.ReadLine());

        // Увеличиваем CB3 путем удвоения каждого символа
        string doubledString = "";
        foreach (char c in CB3.GetValue())
        {
            doubledString += c.ToString() + c.ToString();
        }
        CB3 = new CustomString(doubledString);

        // Складываем CB2 и CB3
        CB1 = CB2 + CB3;

        // Вывод результатов
        Console.WriteLine("CB1 (CB2 + CB3): " + CB1.GetValue());
        Console.WriteLine("CB3 doubled: " + CB3.GetValue());
    }
}