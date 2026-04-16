#include <iostream>
#include <random>
#include <chrono>

using namespace std;

void buildArray(int[], int);
void copyArray(int[], int[], int);
void bubbleSort(int[], int);
void printArray(int[], int);

int main(int argc, char* argv[])
{
    int arrSize = 10000;
    int baseArray[arrSize];
    int bubbleArr[arrSize];

    buildArray(baseArray, arrSize);

    //Bubble Sort
    copyArray(baseArray, bubbleArr, arrSize);
    auto start = chrono::system_clock::now();
    bubbleSort(bubbleArr, arrSize);
    auto end = chrono::system_clock::now();
    auto elapsed = end - start;
    cout << "Bubble Sort: " << elapsed.count() << endl;
    // printArray(bubbleArr, arrSize);

    return 0;
}

void printArray(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

void bubbleSort(int arr[], int arrSize)
{
    bool sorted = true;
    // for(int j = arrSize; j > 0; j--)
    for(int j = 0; j < arrSize; j++)
    {
        sorted = true;
        // for(int i = 0; i < j - 1; i++)
        for(int i = 0; i < arrSize-1-j; i++)
        {
            if(arr[i+1] < arr[i])
            {
                //swap
                swap(arr[i+1], arr[i]);
                sorted = false;
                // int tmp = arr[i];
                // arr[i] = arr[i+1];
                // arr[i+1] = tmp;
            }
        }
        if(sorted) return;
    }
}

void buildArray(int numbers[], int arrSize)
{
    srand(time(0));
    for(int i = 0; i < arrSize; i++)
    {
        numbers[i] = rand();
    }
}

void copyArray(int arr1[], int arr2[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        arr2[i] = arr1[i];
    }
}