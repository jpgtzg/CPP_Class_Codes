
#include "triangle.h"

using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) {
    this->vertex1 = p1;
    this->vertex2 = p2;
    this->vertex3 = p3;
}

Triangle::Triangle() {
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}

double Triangle::getPerimeter() {
    double distance1 = sqrt(pow(vertex1.getX() - vertex2.getX(), 2) + pow(vertex1.getY() - vertex2.getY(), 2));
    double distance2 = sqrt(pow(vertex2.getX() - vertex3.getX(), 2) + pow(vertex2.getY() - vertex3.getY(), 2));
    double distance3 = sqrt(pow(vertex3.getX() - vertex1.getX(), 2) + pow(vertex3.getY() - vertex1.getY(), 2));
    return distance1 + distance2 + distance3;
}

double Triangle::getArea() {
    double a = sqrt(pow(vertex1.getX() - vertex2.getX(), 2) + pow(vertex1.getY() - vertex2.getY(), 2));
    double b = sqrt(pow(vertex2.getX() - vertex3.getX(), 2) + pow(vertex2.getY() - vertex3.getY(), 2));
    double c = sqrt(pow(vertex3.getX() - vertex1.getX(), 2) + pow(vertex3.getY() - vertex1.getY(), 2));
    
    double s = (a + b + c) / 2;
    
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::print() {
    cout << "Triangulo con vertices: (" << vertex1.getX() << ", " << vertex1.getY() << "), (" << vertex2.getX() << ", " << vertex2.getY() << "), (" << vertex3.getX() << ", " << vertex3.getY() << ")" << endl;
}