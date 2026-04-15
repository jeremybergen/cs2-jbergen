#include <iostream>
#include "stack.h"
#include "stackarr.h"

using namespace std;

int main(int argc, char* argv[])
{
    StackArr<int> stack1;

    stack1.push(42);
    stack1.push(15);
    stack1.push(23);

    // for(int i = 0; i < 4; i++)
    while(!stack1.empty())
    {
        cout << stack1.pop() << " ";
    }
    cout << endl;

    return 0;
}