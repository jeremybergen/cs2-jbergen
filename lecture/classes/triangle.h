#pragma once
#include "shape.h"
#include <iostream>
#include <cmath>

using namespace std;

class Triangle : public Shape
{
    private:
    int _side1;
    int _side2;
    int _side3;
    // float _area;
    // float _perimeter;

    public:
    Triangle(int = 0, int = 0, int = 0);
    void calcArea();
    void calcPerimeter();
    void printVals();
};

Triangle::Triangle(int side1, int side2, int side3)
{
    _side1 = side1;
    _side2 = side2;
    _side3 = side3;
    calcArea();
    calcPerimeter();
}

void Triangle::calcArea()
{
    float semiPerim = (_side1 + _side2 + _side3) / 2;
    _area = sqrt(semiPerim*(semiPerim - _side1)*(semiPerim - _side2)*(semiPerim - _side3));
}
void Triangle::calcPerimeter()
{
    _perimeter = _side1 + _side2 + _side3;
}
void Triangle::printVals()
{
    cout << "The triangle with sides: " << _side1 << " and " << _side2 << " and " << _side3
         << " has an area of: " << _area
         << " and a perimeter of: " << _perimeter << endl;
}