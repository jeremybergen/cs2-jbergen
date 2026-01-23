#include <iostream>

using namespace std;

void someFun(int[], int);

int main(int argc, char* argv[])
{
    int* numbers[10];

    for(int i = 0; i < 10; i++)
    {
        numbers[i] = new int;
    }

    for(int i = 0; i < 10; i++)
    {
        *numbers[i] = i + 10;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }

    for(int i = 0; i < 10; i++)
    {
        delete numbers[i];
    }

    //This is a comment for the file
    
    // int num1, num2;
    // int* heapNum1 = new int;
    // int* heapNum2 = new int;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;

    // cout << "&heapNum1: " << &heapNum1 << endl;
    // cout << "heapNum1: " << heapNum1 << endl;
    // cout << "&heapNum2: " << &heapNum2 << endl;
    // cout << "heapNum2: " << heapNum2 << endl;

    // *heapNum1 = 42;
    // *heapNum2 = 24;

    // delete heapNum1;
    // delete heapNum2;

    // long numbers[2000000];
    // int somearray[1024][768][4];

    // long* someimg = new long[2000000];
    // long* someimg;
    // someimg = new long[800000000];

    // for(int i = 0; i < 800000000; i++)
    // {
    //     someimg[i] = i;
    // }


    // int numbers[10];
    // int* ptr1 = numbers;

    

    // // cout << "numbers: " << numbers << endl;
    // // cout << "&numbers[0]: " << &numbers[0] << endl;

    // // cout << "sizeof(numbers): " << sizeof(numbers) << endl;
    // // int* ptr1;

    // for(int i = 0; i < 10; i++)
    // {
    //     numbers[i] = i+10;
    // }

    // someFun(ptr1, 10);

    // ptr1 = numbers;
    // for(int i = 1; i <= 10; i++)
    // {
    //     cout << "*ptr1: " << *ptr1 << endl;
    //     ptr1 = ptr1 + 1;
    // }

    // ptr1 = &numbers[9];
    // cout << "*ptr1: " << *ptr1 << endl;
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "numbers[" << i << "]: " << &numbers[i] << endl;
    // }

    // int num1;
    // int* ptr1;
    // int** ptr2;

    // num1 = 42;
    // ptr1 = &num1;
    // ptr2 = &ptr1;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;

    // cout << "num1: " << num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // cout << "ptr2: " << ptr2 << endl;
    // cout << "&ptr2: " << &ptr2 << endl;
    // cout << "the value in num1 from ptr2: " << **ptr2 << endl;

    // delete[] someimg;
    return 0;
}

void someFun(int numbers[], int arrSize)
{
    // cout << "sizeof(numbers): " << sizeof(numbers) << endl;
    for(int i = 0; i < arrSize; i++)
    {
        cout << "*(numbers + i): " << *(numbers + i) << endl;
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }
}