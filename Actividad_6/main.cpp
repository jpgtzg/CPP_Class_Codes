#include <iostream>
#include "triangle.h"

using namespace std;

void testTriangle()
{
    Triangle t(Point(0, 0), Point(3, 0), Point(0, 4));
    cout << "Perimeter: " << t.getPerimeter() << endl;
    cout << "Area: " << t.getArea() << endl;
}

int main()
{    
    Triangle t4(Point(0, 0), Point(3, 0), Point(0, 4));
    t4.print();

    testTriangle();


    Triangle t1;
    cout << "Perimeter: " << t1.getPerimeter() << endl;
    cout << "Area: " << t1.getArea() << endl;

    Triangle t2(Point(0, 0), Point(10, 0), Point(0, 10));
    cout << "Perimeter: " << t2.getPerimeter() << endl;
    cout << "Area: " << t2.getArea() << endl;

    return 0;
}
