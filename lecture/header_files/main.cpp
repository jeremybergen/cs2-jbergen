#include <iostream>
#include "rectangle.h"
#include <cassert>

using namespace std;

void test();

int main(int argc, char* argv[])
{
    if(argc >= 2 && (string)argv[1] == "test")
    {
        test();
        return 0;
    }

    int s1;
    int s2;

    promptSides(s1, s2);
    printVals(s1, s2, calcArea(s1, s2),
              calcPerim(s1, s2));
    // cout << "argc: " << argc << endl;

    // // cout << "argv[1]: " << argv[1] << endl;

    // for(int i = 0; i < argc; i++)
    // {
    //     cout << "argv[" << i << "]: " 
    //          << argv[i] << endl;
    // }

    return 0;
}

void test()
{
    assert(calcArea(4, 5) == 20);
    assert(calcPerim(4, 5) == 22);
    assert(calcArea(12, 47) == 564);
    assert(calcPerim(1, 2) == 6);
    cout << "All test cases passed" << endl;
}