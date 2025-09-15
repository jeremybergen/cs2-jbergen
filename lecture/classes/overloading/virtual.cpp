#include <iostream>

using namespace std;

// virtual keyword makes this an abstract class
class Animal
{
    public:
        virtual ~Animal() { cout << "deleting animal" << endl; }

        // virtual method: may be implemented
        // virtual void speak() { cout << "Animal says moo" << endl; }

        // pure virtual method: must be implemented in derived class
        virtual void speak() = 0;
};

// override helps the developer or reader know that 
// this method overrides a virtual method in base
class Dog : public Animal
{
    public:
        void speak() { cout << "Dog says bark" << endl; }
};

void someFunction(Animal* anim);

int main(int argc, char* argv[])
{
    Animal *dog = new Dog;

    dog->speak();
    // Animal *animal = new Animal;
    // Dog *dog = new Dog;

    // animal->speak();
    // dog->speak();
    // someFunction(animal);
    // someFunction(dog);

    // delete animal;
    // delete dog;
    delete dog;
    return 0;
}

/// @brief intermediate function to demonstrate virtual keyword in base class
/// @param anim 
void someFunction(Animal* anim)
{
    anim->speak();
}













// This is older code
// class Base
// {
//     public:
//         virtual void print() { cout << "Inside base print" << endl; }
//         void show() { cout << "Inside base show" << endl; }
//         virtual void speak(int) = 0;
// };

// class Derived : public Base
// {
//     public:
//         void print() { cout << "Inside Derived print" << endl; }
//         void show() { cout << "Inside Derived show" << endl; }
//         void speak(int n1) { cout << "speaking" << endl;}
// };

// int main(int argc, char* argv[])
// {
//     // Base* b1 = new Base;
//     // Derived* d1 = new Derived;
//     Derived* d1 = new Derived;
//     // b1 = &d1;

//     d1->print();
//     d1->show();
//     d1->speak(42);
//     // d1->print();
//     // d1->show();

//     return 0;
// }