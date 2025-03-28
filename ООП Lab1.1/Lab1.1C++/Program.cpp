#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

class Segment {
private:
    double x1, y1, x2, y2;

public:
    Segment(double x1, double y1, double x2, double y2)
        : x1(x1), y1(y1), x2(x2), y2(y2) {}

    double length() const {
        return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    }

    double angleWithOY() const {
        double deltaY = y2 - y1;
        double deltaX = x2 - x1;
        double angle = std::atan2(deltaX, deltaY) * (180.0 / M_PI);
        return angle;
    }

    void printInfo() const {
        std::cout << "Segment starts at (" << x1 << ", " << y1 << ") and ends at (" << x2 << ", " << y2 << ").\n";
        std::cout << "Length: " << length() << "\n";
        std::cout << "Angle with OY: " << angleWithOY() << " degrees\n";
    }
};

int main() {
    std::cout << "Enter coordinates of the segment (x1, y1, x2, y2): ";
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    Segment segment(x1, y1, x2, y2);
    segment.printInfo();

    return 0;
}
