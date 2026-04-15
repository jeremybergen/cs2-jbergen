#pragma once
#include "node.h"
#include <iostream>

template <class T1>
class Queue
{
    private:
    Node<T1>* _beg;
    Node<T1>* _end;

    unsigned int _size;

    public:
    Queue() { _beg = nullptr; _end = nullptr; _size = 0; }

    bool empty()
    {
        return (_beg == nullptr);
    }
    void enqueue(T1 data)
    {
        Node<T1>* newNode = new Node<T1>();
        newNode->setData(data);
        if(empty())
        {
            _beg = newNode;
            _end = newNode;
            return;
        }
        _end->setNext(newNode);
        newNode->setPrev(_end);
        _end = newNode;
    }

    T1 dequeue()
    {
        if(empty())
        {
            std::cerr << "Queue empty" << std::endl;
            return T1();
        }
        Node<T1>* toBeDeleted = _beg;
        _beg = _beg->getNext();
        if(_beg == nullptr) _end = nullptr;
        T1 toReturn = toBeDeleted->getData();
        delete toBeDeleted;
        return toReturn;
    }
};