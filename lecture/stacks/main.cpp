#include <iostream>

using namespace std;

class Stack
{
    private:
        int _maxSize = 100;
        int _stack[100];
        int _stackSize;
    
    public:
        Stack();
        bool empty();
        void push(int);
        int pop();
        int size();
        int top();
};

int main(int argc, char* argv[])
{

    return 0;
}

Stack::Stack()
{
    _stackSize = 0;
}
bool Stack::empty()
{
    return _stackSize;
}
void Stack::push(int data)
{
    if(_stackSize == _maxSize) 
    {
        cerr << "Stack full" << endl;
        return;
    }
    _stack[_stackSize] = data;
    _stackSize++;
}
int Stack::pop()
{

}
int Stack::size()
{
    return _stackSize;
}
int Stack::top()
{

}