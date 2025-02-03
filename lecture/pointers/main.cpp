#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        cout << "i: " << i << endl;
    }
    // int board[3][3];

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         board[i][j] = 0;
    //     }
    // }

    // int* ptr1 = &board[0][0];

    // for(int i = 0; i < 9; i++)
    // {
    //     *(ptr1 + i) = 1;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout << "board[" << i << "][" 
    //              << j << "]: " 
    //              << board[i][j] << endl;
    //     }
    // }

    // int nums[5];
    // int* ptr1;

    // for(int i = 0; i < 5; i++)
    // {
    //     nums[i] = 10+i;
    // }

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "&nums[" << i << "]: " 
    //          << &nums[i] << endl;
    // }
    // // nums[0] = nums[0] + 1;
    // // nums[0]++;

    // cout << "&nums[0]: " << &nums[0] << endl;
    // cout << "nums: " << nums << endl;

    // // ptr1 = nums;
    // for(int i = 0; i < 5; i++)
    // {
    //     // cout << "nums[" << i << "]: " << nums[i] << endl;
    //     cout << "*nums: " << *(&(*(nums+i))) << endl;
    //     // cout << "*ptr1: " << *ptr1 << endl;
    //     // ptr1++;
    // }

    // ptr1 = &nums[0];
    // ptr1 = nums;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;


    // int num1;
    // int* ptr1;
    // int** ptr2;
    // // int *ptr2;
    // // int * ptr3;

    // num1 = 42;
    // ptr1 = &num1;
    // ptr2 = &ptr1;

    // cout << "num1:  " << num1 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1:  " << ptr1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "ptr2:  " << ptr2 << endl;
    // cout << "&ptr2: " << &ptr2 << endl;
    // cout << "*ptr2: " << *ptr2 << endl;
    // cout << "**ptr2: " << **ptr2 << endl;

    return 0;
}