using SegmentTask;
using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter coordinates of the segment (x1, y1, x2, y2):");
        double x1 = Convert.ToDouble(Console.ReadLine());
        double y1 = Convert.ToDouble(Console.ReadLine());
        double x2 = Convert.ToDouble(Console.ReadLine());
        double y2 = Convert.ToDouble(Console.ReadLine());

        Segment segment = new Segment(x1, y1, x2, y2);

        segment.PrintInfo();
    }
}

