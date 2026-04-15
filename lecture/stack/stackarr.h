#pragma once
#include <iostream>

template <class T1>
class StackArr
{
    private:
    int _top;
    unsigned int _size;
    const static int arrSize = 100;
    T1 _arr[arrSize];

    public:
    StackArr() { _top = -1; _size = 0;}

    bool empty()
    {
        return (_top==-1);
    }

    bool full()
    {
        return (_size == arrSize);
    }

    void push(T1 data)
    {
        if(full())
        {
            std::cerr << "Stack is full";
            return;
        }
        _arr[++_top] = data;
        _size++;
    }

    T1 pop()
    {
        if(empty())
        {
            std::cerr << "Stack is empty";
            return T1();
        }
        // T1 toBeReturned = _arr[_top];
        // _top--;
        // _size--;
        // return toBeReturned;
        _size--;
        return _arr[_top--];
    }
};