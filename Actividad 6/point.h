// Written by Juan Pablo Gutiérrez
// A01286376

#include <iostream>

using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    void print();
};