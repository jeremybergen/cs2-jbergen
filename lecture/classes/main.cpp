#include <iostream>
#include "lib/marker.h"

using namespace std;

void sayHello();
void sayGoodbye();

int main(int argc, char* argv[])
{
    // sayHello();
    // string* str1 = new string("Jeremy");
    // int* num1 = new int(42);
    Marker* marker1 = new Marker("Red", .75, "Sharpie", false);
    Marker* marker2 = new Marker("Black", .5);
    Marker* marker3 = new Marker();

    // Marker marker1;

    // marker1->setColor("Black");
    // marker1->setInklevel(.75);

    marker1->toggleCap();
    cout << "marker1: color: " << marker1->getColor() 
         << ", ink level: " << marker1->getInklevel() 
         << ", brand: " << marker1->getBrand() << endl;

    cout << "marker2: color: " << marker2->getColor() 
         << ", ink level: " << marker2->getInklevel() 
         << ", brand: " << marker2->getBrand() << endl;

    delete marker1;
    return 0;
}


void sayGoodbye()
{
    cout << "Goodbye" << endl;
    sayHello();
}
void sayHello()
{
    cout << "Hello" << endl;
    sayGoodbye();
}