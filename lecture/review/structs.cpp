#include <iostream>

using namespace std;

struct S1
{
    int num1;
    int num2;
};

void fun(int* nums, int arrSize)
{

}

int main(int argc, char* argv[])
{
    int numbers[10][10];
    cout << "numbers: " << numbers << endl;
    fun(numbers, 10);

    // S1* someStruct = new S1;

    // (*someStruct).num1 = 42;
    // (*someStruct).num2 = 15;

    // cout << "someStruct->num1: " << someStruct->num1 << endl;
    // cout << "someStruct->num2: " << someStruct->num2 << endl;

    return 0;
}