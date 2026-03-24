#include <iostream>
#include <string>

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

void printStars(int n)
{
    if (n <= 0) return;
    cout << "* ";
    printStars(n-1);
    // cout << endl;
}

void recursiveTriangle(int n)
{
    if(n <= 0) return;

    // for(int i = 0; i < n; i++)
    // {
    //     cout << "* ";
    // }
    recursiveTriangle(n-1);
    printStars(n);
    cout << endl;

    
}

string reverseString(string str)
{
    // string revStr = "";
    // int strLength = str.length();
    // for(int i = strLength-1; i >= 0; i--)
    // {
    //     revStr += str.at(i);
    // }
    // return revStr;

    if(str.length() == 0) return "";
    return str.at(str.length()-1) + reverseString(str.substr(0, str.length()-1));
}

int promptNum(int n)
{
    // if(n == 20) return n;
    while(n != 20)
    {
        cout << "Enter a number that is 20 ";
        cin >> n;
    }
    return n;
}

int main(int argc, char* argv[])
{
    // hello(5);
    // cout << fib(100) << endl;
    // recursiveTriangle(5);

    cout << reverseString("jeremy") << endl;
    return 0;
}