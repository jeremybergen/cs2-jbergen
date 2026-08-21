#include <iostream>

using namespace std;

void fun(int num1[], int arrSize);

int main(int argc, char* argv[])
{
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
    // cout << "ptr2: " << ptr2 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // cout << "**ptr2: " << **ptr2 << endl;

    // cout << "sizeof(ptr1): " << sizeof(ptr1) << endl;

    // int num1 = 42;
    // int* ptr1 = &num1;

    // cout << "inside main: " << endl;
    // cout << "num1: " << num1 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // fun(*ptr1);

    long numbers[10];
    int arrSize = 10;
    for(int i = 0; i < arrSize; i++)
    {
        numbers[i] = i*10;
    }

    // cout << "inside main: " << endl;
    // cout << "sizeof(numbers): " << sizeof(numbers) << endl;
    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "&numbers[0]: " << &numbers[0] << endl;
    // cout << "numbers: " << *numbers << endl;
    // cout << "&numbers[1]: " << &numbers[1] << endl;
    // cout << "numbers+1: " << *(numbers+1) << endl;
    // cout << "*numbers: " << *numbers << endl;

    for(int i = 0; i < arrSize; i++)
    {
        // cout << "&numbers[" << i << "]: " << &numbers[i] << endl;
        cout << "numbers: " << *(numbers+i) << endl;
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }
    // fun(numbers, arrSize);

    return 0;
}

void fun(int num1[], int arrSize)
{
    cout << "inside fun: " << endl;
    cout << "sizeof(num1): " << sizeof(num1) << endl;
    for(int i = 0; i < arrSize; i++)
    {
        cout << "num1[" << i << "]: " << num1[i] << endl;
    }
    // cout << "inside fun: " << endl;
    // cout << "num1: " << num1 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "*num1: " << *num1 << endl;
}