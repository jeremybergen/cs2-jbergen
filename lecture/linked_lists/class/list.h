#pragma once
#include "node.h"
#include <iostream>

using namespace std;

template<class T1>
class List
{
    private:
    Node<T1>* _head;

    public:
    List()
    {
        _head = nullptr;
    }

    ~List()
    {
        while(_head != nullptr)
        {
            Node<T1>* toBeDeleted = _head;
            _head = _head->getNext();
            delete toBeDeleted;
        }
    }

    void insertNode(int data)
    {
        Node<T1>* newNode = new Node<T1>(data);

        if(_head == nullptr)
        {
            _head = newNode;
            return;
        }

        Node<T1>* curNode = _head;
        // while(newNode->_data > curNode->_data)
        while(curNode->getNext() != nullptr && curNode->getNext()->getData() < newNode->getData())
        {
            // if(curNode->_next == nullptr)
            // {
            //     curNode->_next = newNode;
            // }
            // else
            // {
                curNode = curNode->getNext();
            // }
        }

        if(curNode == _head && curNode->getData() > newNode->getData())
        {
            newNode->setNext(curNode);
            _head = newNode;
        }
        else
        {
            newNode->setNext(curNode->getNext());
            curNode->setNext(newNode);
        }

        // if(curNode == *head && curNode->_next == nullptr)
        // {
        //     curNode->_next = newNode;
        // }
        // else if(curNode == *head)
        // {
        //     newNode->_next = curNode;
        //     *head = newNode;
        // }
        // else
        // {
            
        // }
    }


    friend ostream& operator<<(ostream& os, const List<T1> l)
    {
        Node<T1>* curNode = l._head;
        while(curNode != nullptr)
        {
            os << curNode->getData() << " ";
            curNode = curNode->getNext();
        }
        return os;
    }
    
};