// Written by Juan Pablo Gutiérrez
// A01286376

#include <cmath>
#include "point.h"

using namespace std;

class Triangle {
    private:
        Point vertex1;
        Point vertex2;
        Point vertex3;

    public:
        Triangle(Point p1, Point p2, Point p3);
        Triangle();
        double getPerimeter();
        double getArea();
        void print();
};