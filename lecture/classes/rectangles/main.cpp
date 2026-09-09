#include <iostream>
#include "lib/rectangle.h"

using namespace std;

int main(int argc, char* argv[])
{
    // void* ptr;
    // Rectangle num1;

    // ptr = (Rectangle*)&num1;
    // cout << (*(Rectangle*)ptr).getSide1() << endl;

    Rectangle r1(42);
    Rectangle* r2 = new Rectangle;
    Rectangle rectangles[10];
    Rectangle* moreRectangles[10];
    
    for(int i = 0; i < 10; i++)
    {
        moreRectangles[i] = new Rectangle;
    }

    // r1.setSide1(42);
    // r1.setSide2(15);

    // r2->setSide1(123);
    // r2->setSide2(321);

    cout << "r1.getSide1: " << r1.getSide1() << endl;
    cout << "r1.getSide2: " << r1.getSide2() << endl;

    delete r2;
    for(int i = 0; i < 10; i++)
    {
        delete moreRectangles[i];
    }
    return 0;
}


