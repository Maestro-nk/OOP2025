
#define _USE_MATH_DEFINES
#include "Segment.h"
#include <cmath>

Segment::Segment() : x1(0), y1(0), x2(0), y2(0) {}

Segment::Segment(double x1, double y1, double x2, double y2)
    : x1(x1), y1(y1), x2(x2), y2(y2) {}

Segment::Segment(const Segment& other)
    : x1(other.x1), y1(other.y1), x2(other.x2), y2(other.y2) {}

Segment::~Segment() {}

double Segment::length() const {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

double Segment::angleWithOY() const {
    double deltaY = y2 - y1;
    double deltaX = x2 - x1;
    return std::atan2(deltaX, deltaY) * (180.0 / M_PI);
}

void Segment::printInfo() const {
    std::cout << "Segment starts at (" << x1 << ", " << y1 << ") and ends at (" << x2 << ", " << y2 << ").\n";
    std::cout << "Length: " << length() << "\n";
    std::cout << "Angle with OY: " << angleWithOY() << " degrees\n";
}

double Segment::getX1() const { return x1; }
double Segment::getY1() const { return y1; }
double Segment::getX2() const { return x2; }
double Segment::getY2() const { return y2; }