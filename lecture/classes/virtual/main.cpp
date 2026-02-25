#include <iostream>

using namespace std;

// int fun1()
// {
//     static int num1;
// }

// class Aclass
// {
//     private:
//     int _data;
//     protected:
//     Aclass(int data) { _data = data; }

//     int getData() { return _data; }
// };

// class Bclass : public Aclass
// {
//     protected:
//     int _data2;

//     public:
//     Bclass(int data, int data2) : Aclass(data)
//     { _data2 = data2; }

//     public:
//     int getData() { return _data2; }
// };

// class Cclass: public Bclass
// {
//     private:
//     int _data3;

//     public:
//     Cclass(int data, int data2, int data3) : Bclass(data, data2)
//     { _data3 = data3; }
//     ~Cclass() { //Destructor
//         }

//     int getData() { return _data3; }
//     int getParentData() { return Aclass::getData(); }
// };

class Animal
{
    protected:
    Animal() {}
    public:
    virtual ~Animal() { cout << "Animal destructor" << endl;}
    virtual void speak(int) = 0;
    // virtual void speak()
    // {
    //     cout << "speaking" << endl;
    // }
};

class Dog : public Animal
{
    public:
    ~Dog() { cout << "Dog destructor" << endl; }
    void speak()
    {
        cout << "Bark woof" << endl;
    }
};

class Cat : public Animal
{
    public:
    void speak() {
        cout << "Meow scowl" << endl;
    }
};

class Parrot : public Animal
{
    public:
    Parrot() {}

    void speak(int num)
    {
        cout << "Hello World" << num << endl;
    }
};

int main(int argc, char* argv[])
{
    // Dog* d1 = new Dog;
    Animal* a1;
    // a1 = new Dog;
    // a1->speak();
    // delete a1;

    // // Animal* a2;
    // a1 = new Cat;
    // a1->speak();
    // delete a1;

    a1 = new Parrot;
    a1->speak(42);
    delete a1;
    // Bclass* b1 = new Bclass(42, 15);
    // delete b1;
    // // Aclass::
    // // Bclass b1(42, 15);
    // Cclass c1(42, 15, 23);

    // cout << c1.getData() << endl;
    // cout << c1.getParentData() << endl;
    // cout << c1.getParentData() << endl;
    // Aclass a1(42);

    // cout << a1.getData() << endl;
    return 0;
}