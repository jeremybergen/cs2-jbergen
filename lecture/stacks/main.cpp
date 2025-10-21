#include <iostream>

using namespace std;

template <class T1>
class Stack
{
    private:
        int _maxSize = 100;
        T1 _stack[100];
        int _stackSize;
    
    public:
        Stack<T1>();
        bool empty();
        void push(T1);
        T1 pop();
        int size();
        T1 top();
};

int main(int argc, char* argv[])
{
    Stack<char16_t> myStack1;

    myStack1.push('J');
    myStack1.push('e');
    myStack1.push('r');

    cout << "Top of stack: " << (char)myStack1.top() << endl;
    cout << boolalpha << "Is stack empty? " << myStack1.empty() << endl;

    cout << "Popping: " << myStack1.pop() << endl;
    cout << "Popping: " << myStack1.pop() << endl;
    cout << "Popping: " << myStack1.pop() << endl;

    cout << boolalpha << "Is stack empty? " << myStack1.empty() << endl;
    cout << "Popping: " << myStack1.pop() << endl;
    return 0;
}

template <class T1>
Stack<T1>::Stack()
{
    _stackSize = 0;
}
template <class T1>
bool Stack<T1>::empty()
{
    return !(_stackSize);
}
template <class T1>
void Stack<T1>::push(T1 data)
{
    if(_stackSize == _maxSize) 
    {
        cerr << "Stack full" << endl;
        return;
    }
    _stack[_stackSize] = data;
    _stackSize++;
}
template <class T1>
T1 Stack<T1>::pop()
{
    if(empty())
    {
        cerr << "Stack is empty" << endl;
        T1 errType;
        return errType;
    }
    // int toReturn = _stack[_stackSize-1];
    // _stack[_stackSize-1] = 0;
    _stackSize--;
    return _stack[_stackSize];
}
template <class T1>
int Stack<T1>::size()
{
    return _stackSize;
}
template <class T1>
T1 Stack<T1>::top()
{
    if(empty())
    {
        cerr << "Stack is empty" << endl;
        T1 errType;
        return errType;
    }
    return _stack[_stackSize-1];
}