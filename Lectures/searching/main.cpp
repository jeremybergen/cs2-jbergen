#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int arrSize = 8;
    int numbers[] = {1, 5, 7, 10, 27, 42, 90, 100};

    int low, high, mid;
    bool found = false;
    low = 0;
    high = 7;

    int findNum;
    cout << "Enter number to find: ";
    cin >> findNum;

    while(high >= low)
    {
        mid = (high - low)/2 + low;
        cout << "high: " << high << ", low: " << low << ", mid: " << mid << endl;
        if(numbers[mid] == findNum)
        {
            cout << "Found " << findNum << endl;
            found = true;
            break;
        }
        if(numbers[mid] < findNum)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }

    if(!found)
    {
        cout << "Did not find " << findNum << endl;
    }

    return 0;
}