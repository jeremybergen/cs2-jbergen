#include <iostream>

using namespace std;

class SomeClass;
// void myFunction();
class SomeClass
{
    public:
    static int num1;
    public:
    static void printHello()
    {
        cout << "Hello World" << endl;
    }
};

int SomeClass::num1 = 42;

int main(int argc, char* argv[])
{
    // SomeClass myClass1;
    // myClass1.printHello();

    SomeClass::printHello();
    cout << SomeClass::num1 << endl;
    // int num1 = 0;
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();
    // myFunction();


    // cout << "Inside Main: num1: " << num1 << endl;
    return 0;
}

// void SomeClass::printHello()
// {
//     cout << "Hello World" << endl;
// }

// void myFunction()
// {
//     static int num1 = 42;
//     cout << "inside myFunction: num1: " << num1 << endl;
//     num1++;
// }