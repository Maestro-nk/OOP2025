using System;
using StringLibrary;

class Program
{
    static void Main()
    {
        Console.Write("Enter a string (letters only): ");
        string input = Console.ReadLine();

        AlphaString alphaStr = new AlphaString(input);

        Console.WriteLine($"\nOriginal string: {alphaStr.GetValue()}");
        Console.WriteLine($"Length: {alphaStr.Length()}");

        if (alphaStr.Length() > 0)
        {
            alphaStr.ShiftRight();
            Console.WriteLine($"After shifting: {alphaStr.GetValue()}");
        }
        else
        {
            Console.WriteLine("Error: String must contain only letters!");
        }

        Console.WriteLine("\nPress Enter to exit...");
        Console.ReadLine();
    }
}