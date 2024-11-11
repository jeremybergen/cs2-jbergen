#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);

int main(int argc, char* argv[])
{
    int arrSize = 8;
    int numbers[] = {42, 15, 23, 9, 100, 5, 13, 1};
    // int numbers[] = {1, 5, 9, 13, 23, 42, 100, 15};

    cout << "Unsorted: " << endl;
    printArray(numbers, arrSize);

    // bubbleSort(numbers, arrSize);
    selectionSort(numbers, arrSize);

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