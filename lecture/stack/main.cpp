#include <iostream>

using namespace std;

class Stack
{
    private:
    int _stack[100];
    int _maxArr = 100;
    int _stackSize;
    public:
    Stack()
    {
        _stackSize = 0;
    }

    void push(int);
    int pop();
    int top();
    bool empty();
    bool full();
    int size();
};

int main(int argc, char* argv[])
{
    Stack myStack;

    myStack.push(42);
    myStack.push(15);
    myStack.push(23);

    while(!myStack.empty())
    {
        cout << myStack.pop() << " ";
    }
    cout << endl;
    // while (true)
    // {

    // }
    return 0;
}

void Stack::push(int data)
{
    if(full())
    {
        cerr << "Stack full";
        return;
    }
    _stack[_stackSize] = data;
    _stackSize++;
}
int Stack::pop()
{
    if(empty())
    {
        cerr << "Stack empty" << endl;
        return -1;
    }
    int toReturn = _stack[_stackSize - 1];
    _stackSize--;
    return toReturn;
}
int Stack::top()
{
    if(empty())
    {
        cerr << "Stack empty" << endl;
        return -1;
    }
    return _stack[_stackSize - 1];
}
bool Stack::empty()
{
    if(_stackSize == 0) return true;
    return false;
}
bool Stack::full()
{
    if(_stackSize == _maxArr) return true;
    return false;
}
int Stack::size()
{
    return _stackSize;
}