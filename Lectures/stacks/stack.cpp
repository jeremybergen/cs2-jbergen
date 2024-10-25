#include <iostream>
#include <cmath>

using namespace std;

class Stack
{
    private:
    int maxArr = 100;
    int _stack[100];
    int _stackSize;

    public:
    Stack();
    bool empty();
    bool full();
    int size();
    int top();
    int push(int);
    int pop();
};

int main(int argc, char* argv[])
{
    Stack myStack;
    int inData = 0;

    // myStack.push(42);
    // myStack.push(15);
    // myStack.push(23);

    // cout << myStack.size() << endl;
    cout << "Enter values, -999999 to break" << endl;
    while(true)
    {
        cout << "Enter a value: ";
        cin >> inData;
        if(inData == -999999) break;
        myStack.push(inData);
    }

    int curSize = myStack.size();
    for(int i = 0; i < curSize; i++)
    {
        cout << myStack.pop() << " ";
    }
    cout << endl;

    return 0;
}

/// @brief Constructor for Stack. Sets _stackSize to -1
Stack::Stack()
{
    _stackSize = -1;
}

/// @brief Checks if stack is empty
/// @return true if empty, false if not empty
bool Stack::empty()
{
    if (_stackSize < 0) return true;
    return false;
}

/// @brief Gets current number of elements in the stack
/// @return Stack size
int Stack::size()
{
    return _stackSize + 1;
}

/// @brief Checks the top element in the stack
/// @return Returns top element in the stack. If stack is empty, returns NAN
int Stack::top()
{
    if(!empty())
    {
        return _stack[_stackSize];
    }
    return -999999;
}

/// @brief Checks if stack is full
/// @return Returns true if full, false if not
bool Stack::full()
{
    if(_stackSize >= 99) return true;
    return false;
}

/// @brief This function pushes data onto the stack
/// @param data 
/// @return On success returns 0, on failure returns -1
int Stack::push(int data)
{
    if(!full())
    {
        _stackSize++;
        _stack[_stackSize] = data;
        return 0;
    }
    return -1;
}

/// @brief Grabs top element and removes from stack
/// @return Returns top element, NAN if stack is empty
int Stack::pop()
{
    // if(!empty())
    // {
    //     int data = _stack[_stackSize];
    //     _stackSize--;
    //     return data;
    // }
    int returnData = top();
    if(returnData == -999999) return -999999;
    _stackSize--;
    return returnData;
}