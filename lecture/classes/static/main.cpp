#include <iostream>

using namespace std;

class Person
{
    private:
    static int _id;

    public:
    Person()
    {
        // cout << "DEBUG: " << _id << endl;
        _id++;

    }
    int getId()
    {
        return _id;
    }
    static void sayHello()
    {
        cout << "Hello from Person" << endl;
        cout << _id << endl;
    }
};

// void counter();

int Person::_id = 0;

int main(int argc, char* argv[])
{
    Person person1;
    person1.sayHello();
    Person person2;
    person2.sayHello();

    Person::sayHello();

    // Person *people[10];
    // for(int i = 0; i < 10; i++)
    // {
    //     people[i] = new Person;
    //     cout << "people[" << i << "]: " << people[i]->getId() << endl;
    //     delete people[i];
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     // counter();
    //     cout << "people[" << i << "]: " << people[i]->getId() << endl;
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     delete people[i];
    // }

    return 0;
}

// void counter()
// {
//     static int num1 = 1;

//     cout << "num1: " << num1 << endl;
//     num1++;
// }