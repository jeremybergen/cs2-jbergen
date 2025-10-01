#include <iostream>

using namespace std;

void printTriangle(int);
void printRevTriangle(int);

void printTriangleRec(int);
void printRevTriangleRec(int);

void printStars(int);

int main(int argc, char* argv[])
{
    int numLines;
    cout << "Enter number of lines: ";
    cin >> numLines;

    printTriangle(numLines);
    cout << endl;
    printTriangleRec(numLines);
    cout << endl;
    printRevTriangleRec(numLines);
    cout << endl;
    printRevTriangle(numLines);
    return 0;
}

void printStars(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
}

/// @brief prints triangle, using recursion, like:
/// *
/// **
/// ***
/// ****
/// @param n number of lines for triangle
void printTriangleRec(int n)
{
    if(n <= 0) return;

    printTriangleRec(n-1);
    printStars(n);
}

/// @brief prints reverse triangle, using recursion, like:
/// ****
/// ***
/// **
/// *
/// @param n number of lines for triangle
void printRevTriangleRec(int n)
{
    if(n <= 0) return;

    printStars(n);
    printRevTriangleRec(n-1);
}

/// @brief prints triangle like:
/// *
/// **
/// ***
/// ****
/// @param n number of lines for triangle
void printTriangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/// @brief prints reverse triangle like:
/// ****
/// ***
/// **
/// *
/// @param n number of lines for triangle
void printRevTriangle(int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}