#pragma once
#include "node.h"

template <class T1>
class List
{
    private:
    Node<T1>* _head;
    unsigned int _listSize;
    public:
    List();

    void insert(T1);
    void print();

};

template <class T1>
inline List<T1>::List()
{
    _head = nullptr;
    _listSize = 0;
}

template <class T1>
inline void List<T1>::insert(T1 data)
{
    Node<T1>* newNode = new Node<T1>();
    newNode->setData(data);
    
    //list is empty
    if(_head == nullptr)
    {
        _head = newNode;
        return;
    }

    Node<T1>* currentNode = _head;
    while(currentNode->getNext() != nullptr && data > currentNode->getNext()->getData())
    {
        currentNode = currentNode->getNext();
    }

    //at beginning of list
    if(currentNode == _head)
    {
        //goes before head
        if(newNode->getData() < _head->getData())
        {
            newNode->setNext(_head);
            _head = newNode;
        }
        else if(_head->getNext() == nullptr)
        {
            //goes after head
            _head->setNext(newNode);
        }
        else
        {
            newNode->setNext(_head->getNext());
            _head->setNext(newNode);
        }
    }
    else
    {
        newNode->setNext(currentNode->getNext());
        currentNode->setNext(newNode);
    }
}

template <class T1>
inline void List<T1>::print()
{
    Node<T1>* currentNode = _head;
    while(currentNode != nullptr)
    {
        std::cout << currentNode->getData() << " ";
        currentNode = currentNode->getNext();
    }
    std::cout << std::endl;
}
