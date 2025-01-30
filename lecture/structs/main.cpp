#include <iostream>

using namespace std;

// struct Node
// {
//     int x;
//     float radius;
//     string title;
// };
struct Person
{
    string fName, lName;
    int age;
};

int main(int argc, char* argv[])
{
    int num1;
    int* heapNum = new int;

    num1 = 42;
    *heapNum = 15;
    cout << "&num1: " << &num1 << endl;
    cout << "&heapNum: " << &heapNum << endl;
    cout << "heapNum: " << heapNum << endl;

    delete heapNum;

    // Person* people[3];
    // for(int i = 0; i < 3; i++)
    // {
    //     people[i] = new Person;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "Enter first and last name: ";
    //     cin >> people[i]->fName >> people[i]->lName;
    //     cout << "Enter age: ";
    //     cin >> people[i]->age;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << people[i]->fName << " " 
    //          << people[i]->lName << " " 
    //          << people[i]->age << endl;
    // }
    // // Node node1;
    // // Node node2;

    // // Node* ptr1;

    // // node1.x = 42;
    // // node1.radius = 3.14;
    // // node1.title = "Jeremy";

    // // node2.x = 15;
    // // node2.radius = 1.2;
    // // node2.title = "Skywalker";

    // // ptr1 = &node1;

    // // cout << ptr1->x << " "
    // //      << ptr1->radius << " "
    // //      << ptr1->title << endl;

    // // cout << (*ptr1).x << " "
    // //      << (*ptr1).radius << " "
    // //      << (*ptr1).title << endl;

    // // cout << node1.x << " " 
    // //      << node1.radius << " " 
    // //      << node1.title << endl;
    
    // for(int i = 0; i < 3; i++)
    // {
    //     delete people[i];
    // }
    return 0;
}