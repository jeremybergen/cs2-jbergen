#include <iostream>
#include <string>

using namespace std;

int addNum(int);
int fib(int);
int sumDigits(int);
void printTriangle(int);
int gcd(int, int);
void towerOfHanoi(int, char, char, char);

int main(int argc, char* argv[])
{
    // int promptNum;
    // cout << "Enter a number to add: ";
    // cin >> promptNum;

    // // 5+4+3+2+1 = 15
    
    // // cout << "Fib(" << promptNum << "): " << fib(promptNum) << endl;
    // // cout << "Sum of " << promptNum << ": " << sumDigits(promptNum) << endl;
    // printTriangle(promptNum);

    // cout << "sum: " << addNum(promptNum) << endl;
    // int denom1, denom2;

    // cout << "Enter two denominators separated by a space: ";
    // cin >> denom1 >> denom2;

    // cout << "The GCD of " << denom1 << " and " << denom2
    //      << " is " << gcd(denom1, denom2) << endl;
    int towerSize;
    cout << "Enter number of disks: ";
    cin >> towerSize;
    towerOfHanoi(towerSize, 'A', 'B', 'C');

    return 0;
}

void towerOfHanoi(int n, char left, char middle, char right)
{
    if(n == 1)
    {
        cout << "move disk 1 from " << left << " to " << right << endl;
        return;
    }
    towerOfHanoi(n-1, left, right, middle);
    cout << "move disk " << n << " from " << left << " to " << right << endl;
    towerOfHanoi(n-1, middle, left, right);
}

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
    // iteratively
    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // return a;
    // int minimum = min(a, b);
    // cout << "DEBUG: minimum: " << minimum << endl;
    // int gcd = 1;
    // int i = 1;
    // while(i <= minimum)
    // {
        
    //     cout << "DEBUG: i: " << i << endl;
    //     cout << "DEBUG: a%i: " << a%i << endl;
    //     if(a%i == 0 && b%i == 0)
    //     {
    //         cout << "Inside conditional" << endl;
    //         gcd = i;
    //         return gcd;
    //     }
        
    //     i++;
    // }
    // return minimum;
}

/*
n = 5;
*
**
***
****
*****
*/
void printTriangle(int n)
{
    if(n <= 0) return;

    
    for(int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
    printTriangle(n-1);

    //inverted
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = i; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //iterative
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
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