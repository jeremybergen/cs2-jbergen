#include <iostream>
#include <random>

using namespace std;

// NEVER DO THIS!!!!!!!!
// I WILL GET GRUMPY!!!!!!!!
// GRUMPY ME IS GRUMPY!!!!!!
// int number1 = 0;

// void fun1()
// {
//     static int number1 = 0;

//     cout << number1 << endl;

//     number1++;
// }

class Employee
{
    private:
    static int _id;
    int _storedId;

    public:
    Employee()
    {
        _storedId = _id;
        _id++;
    }

    int getId() { return _storedId; }

    static void doSomething()
    {
        cout << "Doing something" << endl;
    }

    static void run(int n)
    {
        cout << "doing stuff to run a robot " << n << endl;
    }
};

int Employee::_id = 700000000;

int main(int argc, char* argv[])
{
    unsigned int number = 4294967294;
    cout << "number: " << number << endl;
    number++;
    cout << "number: " << number << endl;
    number++;
    cout << "number: " << number << endl;
    number++;
    cout << "number: " << number << endl;
    // srand(time(0));
    // int numbers[10];

    // for(int i = 0; i < 10; i++)
    // {
    //     numbers[i] = rand();
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "numbers[" << i << "]: " << numbers[i] << endl;
    // }
    // int number = rand();
    // cout << "number: " << number << endl;
    // Employee emp1;
    // Employee emp2;
    // Employee emp3;

    // // emp1.doSomething();
    // // Employee::doSomething();
    // Employee::run(42);
    // cout << "emp1: " << emp1.getId() << endl;
    // cout << "emp2: " << emp2.getId() << endl;
    // cout << "emp3: " << emp3.getId() << endl;
    // fun1();
    // fun1();
    return 0;
}