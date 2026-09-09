#pragma once
#include "shape.h"
#include "rectangle.h"

class NewShape : public Shape
{
    public:
    void calcArea();
};

void NewShape::calcArea()
{
    _area = 42;
}