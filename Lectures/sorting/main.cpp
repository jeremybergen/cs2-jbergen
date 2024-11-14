#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main(int argc, char* argv[])
{
    int arrSize = 8;
    int numbers[] = {42, 15, 23, 9, 100, 5, 13, 1};
    // int numbers[] = {1, 5, 9, 13, 23, 42, 100, 15};

    cout << "Unsorted: " << endl;
    printArray(numbers, arrSize);

    // bubbleSort(numbers, arrSize);
    // selectionSort(numbers, arrSize);
    // insertionSort(numbers, arrSize);
    mergeSort(numbers, 0, arrSize);

    cout << "Sorted: " << endl;
    printArray(numbers, arrSize);

    return 0;
}

void printArray(int numbers[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int numbers[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        bool swapped = false;
        for(int j = 0; j < arrSize - 1 - i; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                swapped = true;
                //swap
                // swap(numbers[j], numbers[j+1]);
                int tmp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tmp;
            }
        }
        printArray(numbers, arrSize);
        if(!swapped) break;
    }
}

void selectionSort(int numbers[], int arrSize)
{
    int minimum;
    for(int i = 0; i < arrSize - 1; i++)
    {
        minimum = i;
        for(int j = i + 1; j < arrSize; j++)
        {
            if(numbers[j] < numbers[minimum])
            {
                minimum = j;
            }
        }
        if(minimum != i)
        {
            swap(numbers[minimum], numbers[i]);
        }
        printArray(numbers, arrSize);
    }
}

void insertionSort(int numbers[], int arrSize)
{
    int key, j;
    for(int i = 1; i < arrSize; i++)
    {
        key = numbers[i];
        j = i - 1;
        while(j >= 0 && numbers[j] > key)
        {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
        printArray(numbers, arrSize);
    }
}

void mergeSort(int numbers[], int begin, int end)
{
    if(begin >= end) return;

    int mid = begin + (end - begin) /2;
    // cout << "mid: " << mid << endl;
    mergeSort(numbers, begin, mid);
    mergeSort(numbers, mid + 1, end);
    merge(numbers, begin, mid, end);
}

void merge(int numbers[], int begin, int mid, int end)
{
    cout << "begin: " << begin << ", mid: " << mid << ", end: " << end << endl;
    int leftSize = mid - begin + 1;
    int rightSize = end - mid;

    int leftNums[leftSize];
    int rightNums[rightSize];

    for(int i = 0; i < leftSize; i++)
    {
        leftNums[i] = numbers[begin + i];
    }
    for(int i = 0; i < rightSize; i++)
    {
        rightNums[i] = numbers[mid + i + 1];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = begin;
    while(i < leftSize && j < rightSize)
    {
        if(leftNums[i] <= rightNums[j])
        {
            numbers[k] = leftNums[i];
            i++;
        }
        else
        {
            numbers[k] = rightNums[j];
            j++;
        }
        k++;
    }
    while(i < leftSize)
    {
        numbers[k] = leftNums[i];
        i++;
        k++;
    }
    while(j < rightSize)
    {
        numbers[k] = rightNums[j];
        j++;
        k++;
    }
    // cout << "Merged Array: " << endl;
    // for(int i = 0; i < k; i++)
    // {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;
}