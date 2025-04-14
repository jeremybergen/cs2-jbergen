#include <iostream>

using namespace std;

class Stack
{
    private:
    static const int _maxSize = 100;
    int _stack[_maxSize];
    int _curSize = 0;

    public:
    int pop();
    int peek();
    void push(int);
    int size();
};

int main(int argc, char* argv[])
{
    Stack myStack;

    myStack.push(42);
    myStack.push(15);
    myStack.push(9000);

    int poppedVal;
    while(true)
    {
        poppedVal = myStack.pop();
        if(poppedVal == -999) break;
        cout << poppedVal << " ";
    }
    // do
    // {
    //     poppedVal = myStack.pop();
    //     if(poppedVal == -999) break;
    //     cout << poppedVal << " ";
    // } while (poppedVal != -999);
    cout << endl;
    
    // while(poppedVal = myStack.pop())
    // cout << myStack.pop() << " " 
    //      << myStack.pop() << " " 
    //      << myStack.pop() << endl;
    return 0;
}

int Stack::pop()
{
    if(_curSize == 0)
    {
        cout << "Stack is empty" << endl;
        return -999;
    }
    _curSize--;
    return _stack[_curSize];
}
int Stack::peek()
{
    if(_curSize == 0)
    {
        cout << "Stack is empty" << endl;
        return -999;
    }
    return _stack[_curSize-1];
}
void Stack::push(int data)
{
    if(_curSize == _maxSize)
    {
        cout << "Stack full" << endl;
        return;
    }
    _stack[_curSize] = data;
    _curSize++;
}
int Stack::size()
{
    return _curSize;
}