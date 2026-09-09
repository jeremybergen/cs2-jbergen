#pragma once
#include "shape.h"
#include <iostream>

using namespace std;

class Circle : public Shape
{
    private:
    int _radius;
    // float _area;
    // float _perimeter;

    public:
    Circle(int = 0);
    void calcArea();
    void calcPerimeter();
    void printVals();
};

Circle::Circle(int radius)
{
    _radius = radius;
    calcArea();
    calcPerimeter();
}

void Circle::calcArea()
{
    _area = 3.1415926 * _radius * _radius;
}
void Circle::calcPerimeter()
{
    _perimeter = 2 * _radius * 3.1415926;
}
void Circle::printVals()
{
    cout << "The circle with radius: " << _radius
         << " has an area of: " << _area
         << " and a circumference of: " << _perimeter << endl;
}