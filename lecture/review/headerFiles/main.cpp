#include <iostream>
#include "rectangle.h"

using namespace std;



// Templating example
// template <class T1, class T2, class T3>
// T1 addNums(T2, T3);
int main(int argc, char* argv[])
{
    Rectangle<double> rect1;
    
    promptSides<double>(rect1);
    calcVals(rect1);
    printVals(rect1);
    // Templating example
    // int num1;
    // float num2;

    // cout << "Enter two numbers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << num1 << " + " << num2 
    //      << " = " << addNums<float, int, float>(num1, num2) << endl;
    return 0;
}



// Templating example
// template <class T1, class T2, class T3>
// T1 addNums(T2 n1, T3 n2)
// {
//     return n1 + n2;
// }