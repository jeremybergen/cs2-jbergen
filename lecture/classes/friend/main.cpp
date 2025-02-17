#include <iostream>

using namespace std;

// class Base;
// class Friend;

// class Friend
// {
//     public:
//         int getNum1(Base &);

// };

// class Base
// {
//     private:
//         int _num1;

//     public:
//         Base(int);

//     // friend class Friend;
//     friend int Friend::getNum1(Base&);
// };

// class Derived : public Base
// {
//     private:
//         int _num2;
    
//     public:
//         Derived(int, int);
// };
class Base
{
    public:
        virtual void print()
        {
            cout << "Inside base class" << endl;
        }

        void show()
        {
            cout << "Inside show base class" << endl;
        }
};

class Derived : public Base
{
    public:
        void print()
        {
            cout << "Inside derived class" << endl;
        }
        void show()
        {
            cout << "Inside show derived class" << endl;
        }
};

int main(int argc, char* argv[])
{
    // Derived dev1(42, 15);
    // Base base1(42);
    // Friend fr1;

    // cout << fr1.getNum1(base1) << endl;
    Base* bptr;
    Derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}




// int Friend::getNum1(Base& g)
// {
//     return g._num1;
// }

// // Derived::Derived(int num1, int num2) : Base(num1)
// // {
// //     _num2 = num2;
// // }

// Base::Base(int num1)
// {
//     _num1 = num1;
// }