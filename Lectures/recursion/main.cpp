#include <iostream>

using namespace std;

int factorial(int);
int iterFactorial(int);
int fib(int);

int main(int argc, char* argv[])
{
    int number;

    cout << "Enter the fibonacci number: ";
    cin >> number;

    int fibNum = fib(number);
    cout << "Fib number: " << number << " = " << fibNum << endl;
    
    // cout << "Enter a number for factorial: ";
    // cin >> number;

    // cout << number << "! = " << factorial(number) << endl;
    // cout << number << "! = " << iterFactorial(number) << endl;
    return 0;
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