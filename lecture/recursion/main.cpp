#include <iostream>

using namespace std;

void hello(int n)
{
    if (n <= 0) return;
    cout << "Hello World" << endl;
    hello(n-1);
}

long fib(long n)
{
    if(n <= 1) return n;
    return fib(n-2) + fib(n-1);
    // cout << fib(n-2) + fib(n-1) << endl;
}

void triangle(int n)
{
    int beg = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < beg; j++)
        {
            cout << "* ";
        }
        cout << endl;
        beg++;
    }

}

int main(int argc, char* argv[])
{
    // hello(5);
    // cout << fib(100) << endl;
    triangle(5);
    return 0;
}