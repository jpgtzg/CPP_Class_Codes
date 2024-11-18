// Written by Juan Pablo Gutiérrez
// A01286376

#include <cmath>
#include "point.h"

using namespace std;

class Triangle {
    private:
        Point p1;
        Point p2;
        Point p3;

    public:
        Triangle(Point p1, Point p2, Point p3);
        Triangle();
        double getPerimeter();
        double getArea();
};