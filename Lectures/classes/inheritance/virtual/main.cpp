#include <iostream>

using namespace std;

class Animal
{
    protected:
    Animal();

    public:
    virtual void speak() = 0;
};

class Bird : public Animal
{
    public:
    Bird();
    void speak();
};

class Dog : public Animal
{
    public:
    Dog();
    void speak();
};

class ClassA
{
    public:
    void printInfo();
    void printHello();
};

int main(int argc, char* argv[])
{
    ClassA newClass;
    cout << "&newClass: " << &newClass << endl;
    newClass.printInfo();
    newClass.printHello();
    // Dog myDog;
    // Bird myBird;

    // myBird.speak();
    return 0;
}

void ClassA::printHello()
{
    cout << "Hello from ClassA" << endl;
}

void ClassA::printInfo()
{
    cout << "this:\t   " << this << endl;
    this->printHello();
    (*this).printHello();
}

Dog::Dog()
{
    cout << "Inside Dog Constructor" << endl;
}

void Dog::speak()
{
    cout << "Bark" << endl;
}

Animal::Animal()
{
    cout << "Inside Animal Constructor" << endl;
}

Bird::Bird()
{
    cout << "Inside Bird Constructor" << endl;
}
void Bird::speak()
{
    cout << "Tweet" << endl;
}

















// class BaseClass
// {
//     private:
//     int a;
//     public:
//     BaseClass(int);
//     void printA();
// };

// class DerivedClass : public BaseClass
// {
//     public:
//     DerivedClass(int);
//     void printA();
// };

// int main(int argc, char *argv[])
// {
//     DerivedClass myInstance(42);

//     myInstance.printA();
//     return 0;
// }

// BaseClass::BaseClass(int A)
// {
//     a = A;
// }
// void BaseClass::printA()
// {
//     cout << "a: " << a << endl;
// }

// DerivedClass::DerivedClass(int newA) : BaseClass(newA)
// {
//     cout << "inside DerivedClass constructor" << endl;
// }

// void DerivedClass::printA()
// {
//     cout << "Inside DerivedClass: " << endl;
//     // this->printA();
//     BaseClass::printA();
// }