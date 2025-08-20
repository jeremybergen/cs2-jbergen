#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string fName;
    string lName;
    int age;
};

int main(int argc, char* argv[])
{
    int num1;
    int* heapNum1 = new int;

    num1 = 42;
    *heapNum1 = 42;
    
    // Person people[3];

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "Enter a name: ";
    //     cin >> people[i].fName >> people[i].lName;

    //     cout << "Enter an age: ";
    //     cin >> people[i].age;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "DEBUG: " << people[i].fName << ", " 
    //          << people[i].lName << ", " 
    //          << people[i].age << endl;
    // }
    delete heapNum1;
    return 0;
}