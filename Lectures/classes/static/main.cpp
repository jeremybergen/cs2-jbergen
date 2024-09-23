#include <iostream>

using namespace std;

// class SomeClass;
// void myFunction();
// class SomeClass
// {
//     public:
//     static int num1;
//     public:
//     static void printHello()
//     {
//         cout << "Hello World" << endl;
//     }
// };

// int SomeClass::num1 = 42;

class ClassA
{
    private:
    int num1;
    int num2;
    public:
    ClassA(int, int);
    void printVals();
};

int main(int argc, char* argv[])
{
    // SomeClass myClass1;
    // myClass1.printHello();

    // SomeClass::printHello();
    // cout << SomeClass::num1 << endl;
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

    ClassA myClass1(42, 15);
    ClassA myClass2(-19, 2);

    cout << "myClass1:" << endl;
    cout << "&myClass1: " << &myClass1 << endl;
    myClass1.printVals();

    cout << "myClass2:" << endl;
    cout << "&myClass2: " << &myClass2 << endl;
    myClass2.printVals();
    return 0;
}

ClassA::ClassA(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
}

void ClassA::printVals()
{
    cout << "this: " << this << endl;
    cout << "num1: " << num1 << endl;
    cout << "this->num1: " << this->num1 << endl;
    cout << "&num1: " << &num1 << endl;
    cout << "&(this->num1): " << &(this->num1) << endl;
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