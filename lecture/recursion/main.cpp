#include <iostream>
#include <string>

using namespace std;

int addNum(int);
int fib(int);
int sumDigits(int);

int main(int argc, char* argv[])
{
    int promptNum;
    cout << "Enter a number to add: ";
    cin >> promptNum;

    // 5+4+3+2+1 = 15
    
    // cout << "Fib(" << promptNum << "): " << fib(promptNum) << endl;
    cout << "Sum of " << promptNum << ": " << sumDigits(promptNum) << endl;

    // cout << "sum: " << addNum(promptNum) << endl;

    return 0;
}

// 43212 = 4+3+2+1+2 = 12
// 4321.2
// 432.12
int sumDigits(int n)
{
    if(n <= 0) return 0;
    return (n%10) + sumDigits(n/10);
    // int sum = 0;
    // while(true)
    // {
    //     if(n == 0) break;
    //     int rem = n%10;
    //     sum += rem;
    //     n = n/10;
    // }
    // // string number = to_string(n);
    // // for(int i = 0; i < number.size(); i++)
    // // {
    // //     sum += stoi((char)number.at(i));
    // // }
    // return sum;
}

int fib(int n)
{
    //base case
    // if(n <= 0) return 0;
    if(n <= 1) return 1;

    //recursive case
    cout << "fib(" << n-1 << ") + fib(" << n-2 << ")" << endl;
    return fib(n-1) + fib(n-2);
}

int addNum(int n)
{
    // int sum = 0;
    // for(int i = n; i > 0; i--)
    // {
    //     sum += i;
    // }
    // return sum;
    if(n == 0) return 0;
    return n + addNum(n-1);
}