#include <iostream>

using namespace std;

// void fun1()
// {
//     static int number = 0;
//     cout << number << endl;
//     number++;
// }

class Person
{
    private:
        static int _id;
        int _storedId;

    public:
        Person()
        {
            _storedId = _id;
            _id++;
        }
        int getId()
        {
            return _storedId;
        }
        static void doSomething()
        {
            cout << "Doing something" << endl;
        }
};

int Person::_id = 700000000;

int main(int argc, char* argv[])
{
    // Person person1;
    // cout << person1.getId() << endl;
    // Person person2;
    // cout << person2.getId() << endl;
    // Person person3;
    // cout << person3.getId() << endl;
    // cout << person1.getId() << endl;
    Person* people[10];

    for(int i = 0; i < 10; i++)
    {
        people[i] = new Person;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "people[" << i << "].getId(): " << people[i]->getId() << endl;
    }

    Person::doSomething();


    // for(int i = 0; i < 10; i++)
    // {
    //     fun1();
    // }
    
    return 0;
}