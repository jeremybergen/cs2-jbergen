#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> myVector;

    myVector.push_back(42);
    myVector.push_back(15);
    myVector.push_back(23);
    myVector.push_back(9000);
    myVector.resize(10, -999);

    for(size_t i = 0; i < myVector.size(); i++)
    {
        // cout << myVector[i] << " ";
        cout << myVector.at(i) << " ";
    }
    // for(auto elem : myVector)
    // {
    //     cout << elem << " ";
    // }
    // for(auto it = myVector.rbegin(); it != myVector.rend(); it++)
    // {
    //     cout << *it << " ";
    // }
    cout << endl;

    return 0;
}