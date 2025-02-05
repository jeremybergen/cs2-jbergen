#include <iostream>
#include <cmath>

using namespace std;

// int addNums(int, int);
// float addNums(float, float);
// float addNums(int, float);
// float addNums(float, int);
// float addNums(int, int, int, int);

template <typename T1, typename T2>
T1 addNums(T1, T2);

int main(int argc, char* argv[])
{
    float num1;
    int num2;
    float sum;

    cout << "enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    sum = addNums<float, int>(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}

template <typename T1, typename T2>
T1 addNums(T1 n1, T2 n2)
{
    return n1 + n2;
}

// float addNums(float n1, float n2)
// {
//     cout << "Inside float addNums" << endl;
//     return n1 + n2;
// }

// int addNums(int n1, int n2)
// {
//     cout << "Inside int addNums" << endl;
//     return n1 + n2;
// }