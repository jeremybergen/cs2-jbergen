#include <iostream>

using namespace std;

class Base
{
    public:
        virtual void print() { cout << "Inside base print" << endl; }
        void show() { cout << "Inside base show" << endl; }
        virtual void speak(int) = 0;
};

class Derived : public Base
{
    public:
        void print() { cout << "Inside Derived print" << endl; }
        void show() { cout << "Inside Derived show" << endl; }
        void speak(int n1) { cout << "speaking" << endl;}
};

int main(int argc, char* argv[])
{
    // Base* b1 = new Base;
    // Derived* d1 = new Derived;
    Derived* d1 = new Derived;
    // b1 = &d1;

    d1->print();
    d1->show();
    d1->speak(42);
    // d1->print();
    // d1->show();

    return 0;
}