#include <iostream>

using namespace std;

class Animal
{
    public:
    virtual void speak() = 0;
    // virtual int getAge(...) = 0;
};

class Dog : public Animal
{
    private:
    string _breed;
    public:
    Dog(string);
    string getBreed();
    void speak();
};

class Cat : public Animal
{
    public:
    void speak();
};

int main(int argc, char* argv[])
{
    Dog dog1("Husky");

    dog1.speak();
    return 0;
}

void Dog::speak()
{
    cout << "Bark" << endl;
}

Dog::Dog(string breed)
{
    _breed = breed;
}

string Dog::getBreed()
{
    return _breed;
}