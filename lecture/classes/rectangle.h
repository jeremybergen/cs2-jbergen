#pragma once
#include "shape.h"
#include <iostream>

using namespace std;

class Rectangle : public Shape
{
    private:
    int _side1;
    int _side2;
    // float _area;
    // float _perimeter;

    public:
    Rectangle(int = 0, int = 0);
    void calcArea();
    void calcPerimeter();
    void printVals();
};

Rectangle::Rectangle(int side1, int side2)
{
    _side1 = side1;
    _side2 = side2;
    calcArea();
    calcPerimeter();
}

void Rectangle::calcArea()
{
    _area = _side1 * _side2;
}
void Rectangle::calcPerimeter()
{
    _perimeter = 2 * (_side1 + _side2);
}
void Rectangle::printVals()
{
    cout << "The rectangle with sides: " << _side1 << " and " << _side2
         << " has an area of: " << _area
         << " and a perimeter of: " << _perimeter << endl;
}