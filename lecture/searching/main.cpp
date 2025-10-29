#include <iostream>

using namespace std;

void binarySearch(int[], int, int);
int main(int argc, char* argv[])
{
    int numbers[10];
    int value;

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    cout << "Enter a number to find: ";
    cin >> value;

    binarySearch(numbers, 10, value);
    return 0;
}

void binarySearch(int arr[], int arrSize, int value)
{
    int beg, end;
    int mid;
    bool found = false;
    int newSize = arrSize;
    beg = 0;
    end = arrSize - 1;

    while (newSize/2 >= 0)
    {
        mid = (beg + end)/2;
        if(arr[mid] == value)
        {
            found = true;
            break;
        }
        if(arr[mid] < value)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        newSize = mid;
    }
    
    
}