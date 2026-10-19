#include <iostream>

using namespace std;

void hello(int counter);
int fib(int num);

void printTriangle(int n);
void printStars(int n);
long factorial(int n);
string revStr(string str);

int main(int argc, char* argv[])
{
    // hello(10);
    string num;
    cout << "Enter string to reverse: ";
    cin >> num;

    // cout << fib(num) << endl;
    // printTriangle(num);
    // cout << factorial(num) << endl;
    cout << "reversed: " << revStr(num) << endl;
    return 0;
}

string revStr(string str)
{
    if(str.size() <= 1) return str;
    return revStr(str.substr(1)) + str.at(0);
    // if(beg >= end) return "";
    // return 
    // str.pop_back();
    // return str + revStr(str);
    // string reversedStr = "";
    // for(auto it = str.rbegin(); it != str.rend(); it++)
    // {
    //     reversedStr += *it;
    // }
    // for(size_t i = str.size()-1; i > 0; i--)
    // {
    //     reversedStr += str.at(i);
    // }
    // reversedStr += str.at(0);
    // return reversedStr;
}

long factorial(int n)
{
    /*
    n = 5
    5 * 4 * 3 * 2 * 1
    */
    // if(n == 1) return 1;
    // return n * factorial(n - 1);
    int toReturn = 1;
    for(int i = 1; i <= n; i++)
    {
        toReturn *= i;
    }
    return toReturn;
}

void printTriangle(int n)
{
    /*
    n = 5
    *
    * *
    * * *
    * * * *
    * * * * *
    */
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    if(n == 0) return;
    printStars(n);
    cout << endl;
    printTriangle(n-1);
    
    // for(int i = 0; i < n; i++)
    // {
    //     cout << "* ";
    // }
    // cout << endl;
    
    // cout << "finishing function" << endl;
}

void printStars(int n)
{
    if(n == 0) 
    {
        return;
    }
    
    printStars(n-1);
    cout << "* ";
}
int fib(int num)
{
    if(num == 0 || num == 1) return num;
    return fib(num - 2) + fib(num - 1);
}

void hello(int counter)
{
    if(counter <= 0) return;
    cout << counter << ": Hello" << endl;
    hello(counter-1);
}