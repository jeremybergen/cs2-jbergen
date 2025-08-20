#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int numbers[5] = {42, 15, 23, 9000, 123};
    // int* ptr1 = numbers;

    cout << "numbers: " << numbers << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "*(numbers+i): " 
             << *(numbers+i) << endl;
        // cout << "numbers[" << i << "]: " << numbers[i] << endl;
        // cout << "*ptr1: " << *ptr1 << endl;
        // ptr1++;
        // cout << "&numbers[" << i << "]: " 
        //      << &numbers[i] << endl;
    }
    // int num1, num2, num3;
    // int* ptr1;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;

    // ptr1 = &num1;

    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;

    // int num1;
    // int* ptr1;
    // int** ptr2;

    // num1 = 42;
    // ptr1 = &num1;
    // ptr2 = &ptr1;

    // cout << "num1: " << num1 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "**ptr2: " << **ptr2 << endl;

    // (*ptr1)++;
    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "**ptr2: " << **ptr2 << endl;

    return 0;
}