#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

bool binarySearch(int[], int, int);

int main(int argc, char* argv[])
{
    int arrSize = 1000;
    int numbers[arrSize];
    srand(time(0));

    for(int i = 0; i < arrSize; i++)
    {
        numbers[i] = rand();
    }

    sort(numbers, &numbers[arrSize]);
    cout << "DEBUG: numbers[0]: " << numbers[0] << endl;
    // for(int i = 0; i < arrSize; i++)
    // {
    //     cout << numbers[i] << endl;
    // }

    // numbers[0] = 10;
    // numbers[1] = 15;
    // numbers[2] = 23;
    // numbers[3] = 35;
    // numbers[4] = 42;
    // numbers[5] = 73;
    // numbers[6] = 89;
    // numbers[7] = 100;
    // numbers[8] = 123;
    // numbers[9] = 9000;
    
    int findNum;
    cout << "Enter number to find: ";
    cin >> findNum;

    bool found = binarySearch(numbers, arrSize, findNum);
    cout << boolalpha << "The number " << findNum << " exists: " << found << endl;

    return 0;
}

bool binarySearch(int a[], int arrSize, int value)
{
    // cout << "DEBUG: value: " << value << endl;
    int beg, mid, end;
    beg = 0;
    end = arrSize - 1;
    while(end >= beg)
    {
        // mid = (end-beg)/2 + beg;
        mid = (beg + end)/2;
        cout << "DEBUG: beg: " << beg << ", mid: " << mid << ", end: " << end << endl;
        if(a[mid] == value) return true;

        if(a[mid] > value) end = mid-1;
        else beg = mid + 1;
    }
    
    return false;
}