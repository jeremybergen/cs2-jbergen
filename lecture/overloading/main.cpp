#include <iostream>

using namespace std;

int addNums(int, int);
float addNums(float, float);
float addNums(int, float);
float addNums(float, int);
float addNums(int, int, int, int);

int main(int argc, char* argv[])
{
    int num1;
    float num2;
    int sum;

    cout << "enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    sum = addNums(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}

float addNums(float n1, float n2)
{
    cout << "Inside float addNums" << endl;
    return n1 + n2;
}

int addNums(int n1, int n2)
{
    cout << "Inside int addNums" << endl;
    return n1 + n2;
}