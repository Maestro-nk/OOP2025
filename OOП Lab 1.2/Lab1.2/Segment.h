#ifndef SEGMENT_H
#define SEGMENT_H

#include <iostream>
#include <cmath>

class Segment {
private:
    double x1, y1, x2, y2;

public:
    Segment();
    Segment(double x1, double y1, double x2, double y2);
    Segment(const Segment& other);
    ~Segment();

    double length() const;
    double angleWithOY() const;
    void printInfo() const;

    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
};

#endif
