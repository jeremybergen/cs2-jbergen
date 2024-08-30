#pragma once

namespace rectangle
{
    class Rectangle
    {
        private:
            double _side1, _side2;
            double _area;
        public:
            Rectangle();
            Rectangle(double, double);
            double area();
    };
}