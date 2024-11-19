#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

void printArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
void mergeSort(int[], int, int);
void merge(int[], int, int, int);

void quickSort(int[], int, int);
int partition(int[], int, int);

void copyArray(int[], int[], int);
void buildArray(int[], int);

int main(int argc, char* argv[])
{
    int arrSize = 10000;
    // int numbers[] = {42, 15, 23, 9, 100, 5, 13, 1};
    // int numbers[] = {1, 5, 9, 13, 23, 42, 100, 15};
    int numbers[arrSize];
    int bubbleArray[arrSize];
    int selectionArray[arrSize];
    int insertionArray[arrSize];
    int mergeArray[arrSize];
    int quickArray[arrSize];

    buildArray(numbers, arrSize);
    copyArray(numbers, bubbleArray, arrSize);
    copyArray(numbers, selectionArray, arrSize);
    copyArray(numbers, insertionArray, arrSize);
    copyArray(numbers, mergeArray, arrSize);
    copyArray(numbers, quickArray, arrSize);

    // cout << "Unsorted: " << endl;
    // printArray(bubbleArray, arrSize);

    // cout << "Sorted: " << endl;
    // printArray(bubbleArray, arrSize);
    auto start = chrono::system_clock::now();
    bubbleSort(bubbleArray, arrSize);
    auto end = chrono::system_clock::now();
    auto elapsed = end - start;
    cout << "Bubble Sort: " << elapsed.count() << endl;

    start = chrono::system_clock::now();
    selectionSort(selectionArray, arrSize);
    end = chrono::system_clock::now();
    elapsed = end - start;
    cout << "Selection Sort: " << elapsed.count() << endl;

    start = chrono::system_clock::now();
    insertionSort(insertionArray, arrSize);
    end = chrono::system_clock::now();
    elapsed = end - start;
    cout << "Insertion Sort: " << elapsed.count() << endl;

    start = chrono::system_clock::now();
    mergeSort(mergeArray, 0, arrSize - 1);
    end = chrono::system_clock::now();
    elapsed = end - start;
    cout << "Merge Sort: " << elapsed.count() << endl;

    start = chrono::system_clock::now();
    quickSort(quickArray, 0, arrSize - 1);
    end = chrono::system_clock::now();
    elapsed = end - start;
    cout << "Quick Sort: " << elapsed.count() << endl;

    // cout << "Unsorted: " << endl;
    // printArray(numbers, arrSize);

    // bubbleSort(numbers, arrSize);
    // selectionSort(numbers, arrSize);
    // insertionSort(numbers, arrSize);
    // mergeSort(numbers, 0, arrSize - 1);
    // quickSort(numbers, 0, arrSize - 1);

    // cout << "Sorted: " << endl;
    // printArray(numbers, arrSize);

    return 0;
}

void buildArray(int array[], int arrSize)
{
    srand(time(0));
    for(int i = 0; i < arrSize; i++)
    {
        array[i] = rand()%arrSize;
    }
}

void copyArray(int array1[], int array2[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        array2[i] = array1[i];
    }
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
        // printArray(numbers, arrSize);
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
        // printArray(numbers, arrSize);
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
        // printArray(numbers, arrSize);
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
    // cout << "begin: " << begin << ", mid: " << mid << ", end: " << end << endl;
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

void quickSort(int numbers[], int begin, int end)
{
    if(begin >= end) return;

    // partition array so left is smaller, right is larger
    int partIdx = partition(numbers, begin, end);
    // cout << "Array: ";
    // printArray(numbers, end+1);
    quickSort(numbers, begin, partIdx - 1);
    // cout << "Array: ";
    // printArray(numbers, end+1);
    quickSort(numbers, partIdx + 1, end);
}

int partition(int numbers[], int begin, int end)
{
    
    int pivotIdx = begin + (end - begin)/2;
    swap(numbers[pivotIdx], numbers[end]);
    int pivot = numbers[end];

    int i = begin - 1;

    for(int j = begin; j < end; j++)
    {
        if(numbers[j] <= pivot)
        {
            i++;
            swap(numbers[i], numbers[j]);
        }
    }
    i++;
    swap(numbers[i], numbers[end]);

    return i;
}