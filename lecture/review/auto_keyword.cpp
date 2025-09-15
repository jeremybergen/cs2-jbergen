#include <iostream>
#include <vector>

using namespace std;

template <class T1>
void printVector(vector<T1> vec1);

int main(int argc, char* argv[])
{
    vector<int> myVector;

    for(int i = 0; i < 10; i++)
    {
        myVector.push_back(i*10);
    }

    printVector(myVector);
    // for(int i = 0; i < 11; i++)
    // {
    //     cout << "myVector.at(" << i << "): " << myVector.at(i) << endl;
    // }
    // auto num1 = "42";

    // cout << "num1: " << num1 << endl;
    return 0;
}

template <class T1>
void printVector(vector<T1> vec1)
{
    for(auto elem : vec1)
    {
        cout << elem << endl;
    }
}