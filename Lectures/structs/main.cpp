#include <iostream>
#include <string>

using namespace std;

struct AnotherStruct
{
    int num1;
};

struct Rectangle
{
    float side1;
    float side2;
    float area;
    float perimeter;
    int number[10];
    string fName;
    char middleI;
    AnotherStruct struct2;
};

void addThings(Rectangle*, Rectangle*);

int main(int argc, char* argv[])
{
    int num1;
    int* num1Ptr;

    num1 = 42;
    num1Ptr = &num1;

    cout << *num1Ptr << endl;







    Rectangle rect1;
    Rectangle rect2;
    Rectangle rectangles[10];
    Rectangle* ptr1;
    Rectangle* ptrRectangles[10];
    Rectangle* heapRect = new Rectangle;
    Rectangle* heapRect2;

    ptr1 = &rect1;
    ptrRectangles[0] = &rect1;
    heapRect2 = new Rectangle;

    rect1.side1 = 42;
    rect1.side2 = 15;

    rect1.area = rect1.side1 * rect1.side2;
    rect1.perimeter = 2*rect1.side1 + 2*rect1.side2;

    cout << "The rectangle with sides " 
         << rect1.side1 << " and " << rect1.side2
         << " has an area of " << rect1.area
         << " and a perimeter of " << rect1.perimeter << endl;

    delete heapRect;
    delete heapRect2;
    return 0;
}

void addThings(Rectangle* ptr1, Rectangle* ptr2)
{
    cout << ptr1->area + (*ptr2).area << endl;
}