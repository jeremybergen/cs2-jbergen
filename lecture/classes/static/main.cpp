#include <iostream>

using namespace std;

// void someFun()
// {
//     static int counter = 0;
//     cout << "counter: " << counter << endl;
//     counter++;
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
};

class AClass
{
    public:
    static void print()
    {
        cout << "Printing text out" << endl;
    }
};

int Person::_id = 700000000;

int main(int argc, char* argv[])
{
    AClass::print();
    // AClass ac1;
    // ac1.print();
    // Person people[10];
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "people[" << i << "].getId(): " << people[i].getId() << endl;
    // }
    // int counter = 0;
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();
    // someFun();

    return 0;
}