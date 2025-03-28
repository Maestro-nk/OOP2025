#include <iostream>
#include "Segment.h"

int main() {
    std::cout << "Enter coordinates of the segment (x1, y1, x2, y2): ";
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    Segment segment(x1, y1, x2, y2);
    segment.printInfo();

    return 0;
}