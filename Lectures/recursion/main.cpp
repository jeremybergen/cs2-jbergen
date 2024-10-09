#include <iostream>

using namespace std;

int factorial(int);
int iterFactorial(int);
int fib(int);
void reverseString(string &, int, int);
void printStars(int);

int main(int argc, char* argv[])
{
    // int number;

    // cout << "Enter the fibonacci number: ";
    // cin >> number;

    // int fibNum = fib(number);
    // cout << "Fib number: " << number << " = " << fibNum << endl;
    
    // cout << "Enter a number for factorial: ";
    // cin >> number;

    // cout << number << "! = " << factorial(number) << endl;
    // cout << number << "! = " << iterFactorial(number) << endl;

    // string inStr;

    // cout << "Enter string to reverse: ";
    // getline(cin, inStr);

    // reverseString(inStr, 0, inStr.length()-1);
    // cout << "reversed: " << inStr << endl;
    int numStars;

    cout << "Enter size of triangle: ";
    cin >> numStars;

    printStars(numStars);

    return 0;
}

//Prints a triangle of num stars
// *
// **
// ***
// ****
// *****
void printStars(int num)
{
    if (num < 1) return;

    printStars(num - 1);

    for(int i = 0; i < num; i++) cout << "*";
    cout << endl;
}

void reverseString(string &str, int start, int end)
{
    if(start >= end)
    {
        return;
    }
    // char tmp = str[start];
    // str[start] = str[end];
    // str[end] = tmp;
    swap(str[start], str[end]);

    if(start == 0)
    {
        str[start] = toupper(str[start]);
        str[end] = tolower(str[end]);
    }

    reverseString(str, start + 1, end - 1);
}

int fib(int n)
{
    cout << "Inside fib: " << n << endl;
    if(n < 2)
        return n;
    return fib(n-1) + fib(n-2);
}

int factorial(int number)
{
    if(number <= 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
}

int iterFactorial(int number)
{
    int total = 1;
    for(int i = 1; i <= number; i++)
    {
        total = total * i;
    }
    return total;
}