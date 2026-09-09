#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

using namespace std;

int main(int argc, char* argv[])
{
    Rectangle r1(42, 15);
    Circle c1(42);
    Triangle t1(3, 4, 5);

    r1.printVals();
    c1.printVals();
    t1.printVals();
    return 0;
}