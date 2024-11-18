// Written by Juan Pablo Gutiérrez
// A01286376

#include "triangle.h"

using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

Triangle::Triangle() {
    p1 = Point(0, 0);
    p2 = Point(50, 30);
    p3 = Point(25, 10);
}

double Triangle::getPerimeter() {
    double distance1 = sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    double distance2 = sqrt(pow(p2.getX() - p3.getX(), 2) + pow(p2.getY() - p3.getY(), 2));
    double distance3 = sqrt(pow(p3.getX() - p1.getX(), 2) + pow(p3.getY() - p1.getY(), 2));
    return distance1 + distance2 + distance3;
}

double Triangle::getArea() {
    double a = sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    double b = sqrt(pow(p2.getX() - p3.getX(), 2) + pow(p2.getY() - p3.getY(), 2));
    double c = sqrt(pow(p3.getX() - p1.getX(), 2) + pow(p3.getY() - p1.getY(), 2));
    
    double s = (a + b + c) / 2;
    
    return sqrt(s * (s - a) * (s - b) * (s - c));
}