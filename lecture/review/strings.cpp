#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[])
{
    // Better C way
    char* myString;
    int myNum = 42;

    myString = (char*)malloc(100);
    // sprintf(myString, "Hello World\n");
    // strcat(myString, "This is a second line\n");
    // sprintf(myString, )

    // cout << myString << endl;
    // printf("%s, and a number %d\n", myString, myNum);

    sprintf(myString, "%s, %d\n", "This is the first line\n", myNum);
    printf("%s\n", myString);
    cout << myString << endl;
    free(myString);

    // Bad C way (kinda bad but still works)
    // char myString[100];
    // sprintf(myString, "Hello World\n");

    // cout << "\"" << myString << "\"" << endl;


    // C++ way
    // string myString;

    // myString = "Jeremy";

    // cout << myString << endl;

    return 0;
}