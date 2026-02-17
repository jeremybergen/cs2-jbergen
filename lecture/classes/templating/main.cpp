#include <iostream>
#include <vector>
#include "addnums.h"

using namespace std;

template <class T1>
class CS2
{
    private:
    T1 _size;

    public:
    CS2(T1 size) { _size = size; }
    CS2 operator+(const CS2& rhs)
    {
        CS2 toReturn(_size + rhs._size);
        return toReturn;
    }

    friend ostream& operator<<(ostream& os, const CS2& cs2)
    {
        os << "size: " << cs2._size;
        return os;
    }
};

// int addNums(int, int);
// float addNums(float, float);
// int addNums(int, float);

// template <class T1, class T2, class T3>


int main(int argc, char* argv[])
{
    vector< CS2 <float> > myVector;

    CS2<float> cs2_1(42.23);
    CS2<float> cs2_2(15.89);
    CS2<float> addedVals = addNums< CS2<float>, CS2<float>, CS2<float> >(cs2_1, cs2_2);
    // CS2 addedVals = cs2_1 + cs2_2;
    cout << addedVals << endl;
    // vector<int> myVector;

    // int numbers[10];

    // float num1;
    // float num2;
    // float sum;

    // cout << "Enter two numbers separated by a space: ";
    // cin >> num1 >> num2;

    // sum = addNums<float, float, float>(num1, num2);

    // cout << num1 << " + " << num2 << " = " << sum << endl;
    
    return 0;
}



// int addNums(int n1, int n2)
// {
//     cout << "inside int" << endl;
//     return n1 + n2;
// }

// float addNums(float n1, float n2)
// {
//     cout << "inside float" << endl;
//     return n1 + n2;
// }

// int addNums(int n1, float n2)
// {
//     cout << "inside int/float" << endl;
//     return n1 + n2;
// }