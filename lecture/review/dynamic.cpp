#include <iostream>

using namespace std;

void fun(int* nums[], int arrSize)
{
    int* num1 = new int;
    *num1 = 42;
    for(int i = 0; i < arrSize; i++)
    {
        nums[i] = num1;
    }
    cout << "num1: " << num1 << endl;
    cout << "*nums[0]: " << *nums[0] << endl;
}

int main(int argc, char* argv[])
{
    int* numbers[10];
    for(int i = 0; i < 10; i++)
    {
        numbers[i] = nullptr;
    }

    fun(numbers, 10);

    delete numbers[0];
    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "*numbers[0]: " << **(numbers + 11) << endl;
    

    // for(int i = 0; i < 10; i++)
    // {
    //     delete numbers[i];
    // }
    // {int num1 = 42;}
    // cout << "num1; " << num1 << endl;

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