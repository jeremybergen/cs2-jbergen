#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int num1;
    int* ptr1;
    int** ptr2;

    num1 = 42;
    ptr1 = &num1;
    ptr2 = &ptr1;

    cout << "num1: " << num1 << endl;
    cout << "&num1: " << &num1 << endl;
    cout << "ptr1: " << ptr1 << endl;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "**ptr2: " << **ptr2 << endl;

    (*ptr1)++;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "**ptr2: " << **ptr2 << endl;

    return 0;
}