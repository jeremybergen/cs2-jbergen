#include <iostream>

using namespace std;

void myFunction();

int main(int argc, char* argv[])
{
    // int num1 = 0;
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    
    // cout << "Inside Main: num1: " << num1 << endl;
    return 0;
}

void myFunction()
{
    static int num1 = 42;
    cout << "inside myFunction: num1: " << num1 << endl;
    num1++;
}