#include <iostream>
#include <cstdlib>
#include <random>
#include <algorithm>

using namespace std;

bool binarySearch(int[], int, int);

int main(int argc, char* argv[])
{
    // int numbers[10] = {10, 23, 42, 50, 89, 100, 123, 456, 832, 9001};

    // for(int i = 0; i < 10; i++)
    // {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;
    int arrSize = 1000000;
    int numbers[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        numbers[i] = rand();
    }
    sort(numbers, (numbers+arrSize));

    cout << "numbers[999999]: " << numbers[999999] << endl;

    int toFind;
    cout << "Enter number to find: ";
    cin >> toFind;

    cout << boolalpha << "The number exists? " << binarySearch(numbers, arrSize, toFind) << endl;

    // // int arrSize;
    // // cout << "Enter array size: ";
    // // cin >> arrSize;

    // // int numbers[arrSize];

    // // int numbers[10];

    // // int* ptr = numbers;

    // // cout << numbers << endl;

    // int* numbers;

    // numbers = (int*)calloc(100, 4);
    return 0;
}

bool binarySearch(int array[], int arrSize, int value)
{
    int beg, mid, end;

    beg = 0;
    end = arrSize - 1;
    // mid = end - beg / 2;
    while(beg <= end)
    {
        // mid = ((end + 1) - beg) / 2;
        mid = (beg + end)/2;
        cout << "mid: " << mid << endl;
        // return false;
        if(array[mid] == value)
        {
            return true;
        }

        if(array[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    return false;
}