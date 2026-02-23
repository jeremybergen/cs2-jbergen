#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> myVector;

    for(int i = 0; i < 8; i++)
    {
        myVector.push_back(i);
    }
    cout << myVector.at(8) << endl;

    // myVector.push_back(42);
    // myVector.push_back(23);
    // myVector.push_back(15);
    // myVector.push_back(123);
    // myVector.push_back(3214);
    // cout << "sizeof(myVector): " << sizeof(myVector) << endl;
    // cout << "myVector.size(): " << myVector.size() << endl;
    // cout << "myVector.capacity(): " << myVector.capacity() << endl;
    // int arrSize = 4;
    // int* nums = new int[arrSize];

    // int* nums2 = new int[arrSize*2];

    // for(int i = 0; i < 4; i++)
    // {
    //     nums2[i] = nums[i];
    // }

    // delete[] nums;    
    // nums = nums2;

    // int nums[4];

    // cout << "nums: " << nums << endl;
    // cout << "&nums[0]: " << &nums[0] << endl;

    // int nums2[5];

    // for(int i = 0; i < 4; i++)
    // {
    //     nums2[i] = nums[i];
    // }
    return 0;
}