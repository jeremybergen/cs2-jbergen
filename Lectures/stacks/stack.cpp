#include <iostream>

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
    int size();
    int top();
    void push(int);
    int pop();
};

int main(int argc, char* argv[])
{
    return 0;
}

Stack::Stack()
{
    _stackSize = -1;
}

bool Stack::empty()
{

}

int Stack::size()
{

}

int Stack::top()
{

}

void Stack::push(int data)
{

}

int Stack::pop()
{

}