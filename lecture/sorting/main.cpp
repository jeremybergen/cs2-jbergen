#include <iostream>
#include <random>
#include <chrono>

using namespace std;

void buildArray(int[], int);
void copyArray(int[], int[], int);
void printArray(int[], int);
bool checkArray(int[], int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
void mergeSort(int[], int, int, int);
void printMergeArray(int[], int, int, int);
void merge(int[], int, int, int, int);

int main(int argc, char* argv[])
{
    int numbers[8] = {42, 15, 23, 9, 87, 1, 50, 100};
    int arrSize = 8;
    mergeSort(numbers, arrSize, 0, arrSize - 1);
    // int arrSize = 1000;
    // int numbers[arrSize];
    // int bubbleArray[arrSize];
    // int selectionArray[arrSize];
    // int insertionArray[arrSize];

    // buildArray(numbers, arrSize);

    // // printArray(numbers, arrSize);
    // // Bubble sort
    // copyArray(numbers, bubbleArray, arrSize);
    // auto start = chrono::system_clock::now();
    // bubbleSort(bubbleArray, arrSize);
    // auto end = chrono::system_clock::now();
    // auto elapsed = end - start;
    // cout << "Bubble Sort: " << elapsed.count() << endl;
    // // printArray(numbers, arrSize);

    // // Selection Sort
    // copyArray(numbers, selectionArray, arrSize);
    // start = chrono::system_clock::now();
    // selectionSort(selectionArray, arrSize);
    // end = chrono::system_clock::now();
    // elapsed = end - start;
    // cout << "Selection Sort: " << elapsed.count() << endl;
    // cout << boolalpha << "Is array sorted? " << checkArray(bubbleArray, selectionArray, arrSize) << endl;

    // // Insertion Sort
    // copyArray(numbers, insertionArray, arrSize);
    // start = chrono::system_clock::now();
    // insertionSort(insertionArray, arrSize);
    // end = chrono::system_clock::now();
    // elapsed = end - start;
    // cout << "Insertion Sort: " << elapsed.count() << endl;
    // cout << boolalpha << "Is array sorted? " << checkArray(bubbleArray, insertionArray, arrSize) << endl;

    return 0;
}

void printMergeArray(int arr[], int arrSize, int beg, int end)
{
    for(int i = beg; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int arrSize, int beg, int mid, int end)
{
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int left[n1], right[n2];

    for(int i = 0; i < n1; i++)
    {
        left[i] = arr[beg + i];
    }
    for(int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int leftidx = 0;
    int rightidx = 0;
    int beginning = beg;

    while(leftidx < n1 && rightidx < n2)
    {
        if(left[leftidx] < right[rightidx]) 
        {
            arr[beginning] = left[leftidx];
            leftidx++;
        }
        else
        {
            arr[beginning] = right[rightidx];
            rightidx++;
        }
        beginning++;
    }
    
}

void mergeSort(int arr[], int arrSize, int beg, int end)
{
    int mid = (beg + end)/2;
    // if(end < beg) return;
    // if(arrSize < 2) 
    if(beg >= end)
    {
        
        // printMergeArray(arr, arrSize, beg, end);
        // cout << endl;
        return;
    }
    
    mergeSort(arr, (mid + 1 - beg), beg, mid);
    // mergeSort(arr, -(beg - mid + 1), beg, mid);
    cout << "left split: ";
    printMergeArray(arr, arrSize, beg, end);
    // cout << endl;
    mergeSort(arr, (end - mid), mid + 1, end);
    cout << "right split: ";
    printMergeArray(arr, arrSize, mid + 1, end);
    // cout << endl;

    merge(arr, arrSize, beg, mid, end);
    
}

bool checkArray(int src[], int dst[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        if(src[i] != dst[i]) return false;
    }
    return true;
}

void copyArray(int src[], int dst[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        dst[i] = src[i];
    }
}

void selectionSort(int arr[], int arrSize)
{
    // O(n^2)
    int minimum; // O(1)
    for(int i = 0; i < arrSize; i++) // O(n)
    {
        minimum = i;
        for(int j = i + 1; j < arrSize; j++) // O(n)
        {
            if(arr[j] < arr[minimum]) // O(1)
            {
                minimum = j;
            }
        }
        if(minimum != i) // O(1)
        {
            swap(arr[i], arr[minimum]);
        }
    }
}

void printArray(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int arrSize)
{
    bool sorted = false;
    // O(n^2)
    for(int j = 0; j < arrSize; j++) // O(n)
    {
        sorted = true;
        for(int i = 0; i < arrSize-1-j; i++) // O(n)
        {
            if(arr[i] > arr[i+1]) // O(1)
            {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sorted = false;
            }
        }
        if(sorted) break;
    }
    
}

void buildArray(int arr[], int arrSize)
{
    srand(time(0));
    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void insertionSort(int arr[], int arrSize)
{
    for(int i = 1; i < arrSize; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1] && j > 0)
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}