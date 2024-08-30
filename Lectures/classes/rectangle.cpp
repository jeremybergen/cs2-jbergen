#include "rectangle.h"

namespace rectangle
{
    Rectangle::Rectangle()
    {
        _side1 = 0;
        _side2 = 0;
        _area = 0;
    }

    Rectangle::Rectangle(double side1, double side2)
    {
        _side1 = side1;
        _side2 = side2;
        _area = side1 * side2;
    }

    double Rectangle::area()
    {
        return _area;
    }
}