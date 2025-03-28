using System;

namespace SegmentTask
{
    public class Segment
    {
        private double x1, y1, x2, y2;

        public Segment()
        {
            x1 = y1 = x2 = y2 = 0;
        }

        public Segment(double x1, double y1, double x2, double y2)
        {
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
        }

        public Segment(Segment other)
        {
            x1 = other.x1;
            y1 = other.y1;
            x2 = other.x2;
            y2 = other.y2;
        }

        ~Segment()
        {
            Console.WriteLine("Segment object is being deleted");
        }

        public double Length()
        {
            return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));
        }

        public double AngleWithOY()
        {
            double deltaY = y2 - y1;
            double deltaX = x2 - x1;
            return Math.Atan2(deltaX, deltaY) * (180 / Math.PI);
        }

        public void PrintInfo()
        {
            Console.WriteLine($"Segment starts at ({x1}, {y1}) and ends at ({x2}, {y2}).");
            Console.WriteLine($"Length: {Length():F2}");
            Console.WriteLine($"Angle with OY: {AngleWithOY():F2} degrees");
        }

        public double GetX1() => x1;
        public double GetY1() => y1;
        public double GetX2() => x2;
        public double GetY2() => y2;
    }
}

