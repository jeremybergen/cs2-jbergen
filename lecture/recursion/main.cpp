#include <iostream>

using namespace std;

int fib(int);
size_t factorial(int);
void reverseString(string, int);
int power(int, int);

int main(int argc, char* argv[])
{
    int base, exp;

    cout << "Enter the base and exponent separated by a space: ";
    cin >> base >> exp;

    cout << base << " raised to the power of " << exp << " is: " << power(base, exp) << endl;

    // reverse string recursion
    // string inStr;

    // cout << "Enter string to reverse: ";
    // getline(cin, inStr);

    // reverseString(inStr, inStr.length()-1);
    // cout << endl;

    // factorial recursion
    // int factNum;

    // cout << "Enter the number to calculate: ";
    // cin >> factNum;

    // cout << "The " << factNum << " factorial is: " << factorial(factNum) << endl;

    // fibonacci recursion
    // int fibNum;

    // cout << "Enter the fibonacci number: ";
    // cin >> fibNum;

    // cout << "The " << fibNum << " fibonacci number is : " << fib(fibNum) << endl;
    return 0;
}

int power(int base, int exp)
{
    if(exp == 0) return 1;

    return base * power(base, exp-1);
}

void reverseString(string str, int idx)
{
    if(idx < 0) return;

    cout << str.at(idx);
    reverseString(str, idx-1);
}

size_t factorial(int n)
{
    if(n <= 1) return 1;
    
    return n * factorial(n-1);
}

int fib(int n)
{
    if(n <= 1) return n;

    return fib(n-1) + fib(n-2);
}