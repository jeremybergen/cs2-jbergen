#include <iostream>

using namespace std;

class Animal
{
    public:
    Animal()
    {
        cout << "Animal Constructor" << endl;
    }
    ~Animal()
    {
        cout << "Animal Destructor" << endl;
    }

    virtual void speak() = 0;
};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout << "Dog says bark" << endl;
    }
};

class Cat : public Animal
{
    public:
    void speak()
    {
        cout << "Cat stares at you" << endl;
    }
};

int main(int argc, char* argv[])
{
    // Animal a1;
    Dog d1;
    Cat c1;

    d1.speak();
    c1.speak();

    return 0;
}



// class Base
// {
//     public:
//     virtual ~Base() {}
//     virtual void print()
//     {
//         cout << "base print class" << endl;
//     }

//     void show()
//     {
//         cout << "base show class" << endl;
//     }

//     virtual void hello() = 0;
// };

// class Derived : public Base
// {
//     public:
//     ~Derived() {}
//     void print()
//     {
//         cout << "derived print class" << endl;
//     }

//     void show()
//     {
//         cout << "derived show class" << endl;
//     }
//     void hello()
//     {
//         cout << "Hello" << endl;
//     }
// };

// int main(int argc, char* argv[])
// {
//     // Derived d1;
//     Base* b1;
//     b1 = new Derived;

//     // b1.print();
//     // b1.show();
//     b1->print();
//     b1->show();

//     delete b1;
//     return 0;
// }