#include <iostream>

using namespace std;

void fun()
{
    int num1;
}

int main(int argc, char* argv[])
{
    {int num1 = 42;}
    cout << "num1; " << num1 << endl;

    // size_t arrSize = 10;
    // int* numbers[arrSize];

    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     numbers[i] = new int;
    // }
    // int* num1 = new int;

    // int* num2;
    // num2 = new int;

    // cout << "&num1: " << &num1 << endl;
    // cout << "num1: " << num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "num2: " << num2 << endl;

    // *num1 = 42;
    // *num2 = 23;

    // delete num1;
    // delete num2;

    return 0;
}