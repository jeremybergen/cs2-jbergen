#include <iostream>
#include <random>
#include <chrono>

using namespace std;

void buildArray(int[], int);
void copyArray(int[], int[], int);
bool verifyArray(int[], int[], int);
void bubbleSort(int[], int);
void insertionSort(int[], int);
void selectionSort(int[], int);
void mergeSort(int[], int, int, int);
void merge(int[], int, int, int, int);
void printArray(int[], int);

int main(int argc, char* argv[])
{
    int arrSize = 6;
    int numbers[arrSize];
    int bubbleArr[arrSize];
    int insertArr[arrSize];
    int selectArr[arrSize];
    int mergeArr[arrSize];
    srand(time(0));

    buildArray(numbers, arrSize);

    // copyArray(numbers, bubbleArr, arrSize);
    // auto start = chrono::system_clock::now();
    // bubbleSort(bubbleArr, arrSize);
    // auto end = chrono::system_clock::now();
    // auto elapsed = end - start;
    // cout << "Bubble Sort: \t" << elapsed.count() << endl;
    // // printArray(numbers, arrSize);

    // copyArray(numbers, insertArr, arrSize);
    // start = chrono::system_clock::now();
    // insertionSort(insertArr, arrSize);
    // end = chrono::system_clock::now();
    // elapsed = end - start;
    // cout << "Insertion Sort: " << elapsed.count() << endl;
    // // cout << boolalpha << verifyArray(bubbleArr, insertArr, arrSize) << endl;

    // copyArray(numbers, selectArr, arrSize);
    // start = chrono::system_clock::now();
    // selectionSort(selectArr, arrSize);
    // end = chrono::system_clock::now();
    // elapsed = end - start;
    // cout << "Selection Sort: " << elapsed.count() << endl;
    // // cout << boolalpha << verifyArray(bubbleArr, selectArr, arrSize) << endl;

    copyArray(numbers, mergeArr, arrSize);
    printArray(mergeArr, arrSize);
    auto start = chrono::system_clock::now();
    mergeSort(mergeArr, arrSize, 0, arrSize-1);
    auto end = chrono::system_clock::now();
    auto elapsed = end - start;
    cout << "Merge Sort: " << elapsed.count() << endl;
    printArray(mergeArr, arrSize);
    cout << boolalpha << verifyArray(bubbleArr, mergeArr, arrSize) << endl;

    return 0;
}

void merge(int numbers[], int arrSize, int beg, int mid, int end)
{
    cout << "beg: " << beg << ", mid: " << mid << ", end: " << end << endl;
    int leftSize = mid - beg + 1;
    int rightSize = end - mid;
    int leftArr[leftSize];
    int rightArr[rightSize];

    for(int i = 0; i < leftSize; i++)
    {
        leftArr[i] = numbers[beg + i];
    }
    for(int i = 0; i < rightSize; i++)
    {
        rightArr[i] = numbers[mid + i + 1];
    }

    int leftMark = 0;
    int rightMark = 0;
    int numbersMark = beg;

    while(leftMark < leftSize && rightMark < rightSize)
    {
        if(leftArr[leftMark] < rightArr[rightMark])
        {
            numbers[numbersMark] = leftArr[leftMark];
            leftMark++;
            numbersMark++;
        }
        else
        {
            numbers[numbersMark] = rightArr[rightMark];
            rightMark++;
            numbersMark++;
        }
    }

    for(int i = leftMark; i < leftSize; i++)
    {
        numbers[numbersMark] = leftArr[leftMark];
        leftMark++;
        numbersMark++;
    }

    for(int i = rightMark; i < leftSize; i++)
    {
        numbers[numbersMark] = rightArr[rightMark];
        rightMark++;
        numbersMark++;
    }
}

void mergeSort(int numbers[], int arrSize, int beg, int end)
{
    if(beg >= end) return;

    int mid = (beg + end) / 2;
    mergeSort(numbers, arrSize, beg, mid);
    mergeSort(numbers, arrSize, mid + 1, end);
    merge(numbers, arrSize, beg, mid, end);
}

bool verifyArray(int arr1[], int arr2[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        if(arr1[i] != arr2[i]) return false;
    }
    return true;
}

void selectionSort(int numbers[], int arrSize)
{
    int minimum;
    for(int i = 0; i < arrSize; i++)
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
            swap(numbers[i], numbers[minimum]);
        }
    }
}

void copyArray(int arr1[], int arr2[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        arr2[i] = arr1[i];
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
            numbers[j+1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
    }
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
    for(int j = 0; j < arrSize; j++)
    {
        sorted = true;
        for(int i = 0; i < arrSize - 1 - j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                sorted = false;
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
        if(sorted) return;
    }
}

void buildArray(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = rand();
    }
}