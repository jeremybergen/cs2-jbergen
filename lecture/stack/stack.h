#pragma once
#include <iostream>
#include "node.h"

template <class T1>
class Stack
{
    private:
    Node<T1>* _top;
    unsigned int _size;

    public:
    Stack<T1>() { _top = nullptr; _size = 0; }

    void push(T1 data)
    {
        Node<T1>* newNode = new Node<T1>;
        newNode->setData(data);

        if (!empty())
        {
            // _top->setNext(newNode);
            newNode->setPrev(_top);
        }

        _top = newNode;
        _size++;
    }
    T1 pop()
    {
        if(empty())
        {
            std::cerr << "List is empty";
            return T1();
        }

        Node<T1>* tmpNode = _top;
        T1 toBeReturned = tmpNode->getData();
        _top = _top->getPrev();
        _size--;
        delete tmpNode;
        return toBeReturned;
    }

    bool empty()
    {
        return (_top==nullptr);
    }
};