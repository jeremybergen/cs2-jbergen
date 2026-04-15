#pragma once
#include "node.h"
#include <iostream>

template <class T1>
class Queue
{
    private:
    unsigned int _size;
    const static int _arrSize = 10;
    T1 _arr[_arrSize];
    int _beg, _end;

    public:
    Queue() { _size = 0; _beg = -1; _end = -1; }

    bool empty()
    {
        return (_beg == -1);
    }
    bool full()
    {
        return ((_end > _beg && _beg == 0 && _end == _arrSize - 1) || (_end - _beg == -1));
    }

    void enqueue(T1 data)
    {
        if(full())
        {
            std::cerr << "Queue full" << std::endl;
            return;
        }
        _end++;
        _end = _end % _arrSize;
        _arr[_end] = data;
        _size++;
        if(_beg == -1) _beg = _end;
    }

    T1 dequeue()
    {
        if(empty())
        {
            std::cerr << "Queue empty" << std::endl;
            return T1();
        }
        T1 toBeReturned = _arr[_beg];
        if(_beg == _end)
        {
            _beg = -1;
            _end = -1;
        }
        else
        {
            _beg++;
            _beg = _beg % _arrSize;
        }
        _size--;
        return toBeReturned;
    }
};