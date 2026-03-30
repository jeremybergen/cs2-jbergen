#pragma once
#include "node.h"
#include <iostream>

using namespace std;

template <class T1>
class List
{
    private:
    Node<T1>* _head, _tail;
    unsigned int _listSize;
    void printList(Node<T1>*);

    public:
    List();
    ~List();

    void insert(T1);
    void print();
    void delItem(T1);
    unsigned int size() { return _listSize; }
    bool isEmpty()
    {
        if(_listSize == 0) return true;
        return false;
    }
};

template <class T1>
inline List<T1>::List()
{
    _head = nullptr;
    // _tail = nullptr;
    _listSize = 0;
}

template <class T1>
List<T1>::~List()
{
    Node<T1>* toBeDeleted = _head;
    while(_head != nullptr)
    {
        cout << "deleting: " << toBeDeleted << endl;
        _head = _head->getNext();
        delete toBeDeleted;
        toBeDeleted = _head;
    }
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
        // _tail = newNode;
        _listSize++;
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
    _listSize++;
}

template <class T1>
inline void List<T1>::print()
{
    // Node<T1>* currentNode = _head;
    // while(currentNode != nullptr)
    // {
    //     std::cout << currentNode->getData() << " ";
    //     currentNode = currentNode->getNext();
    // }
    // std::cout << std::endl;
    printList(_head);
    std::cout << std::endl;
}

template<class T1>
void List<T1>::printList(Node<T1>* curNode)
{
    if(curNode == nullptr) return;
    std::cout << curNode->getData() << " ";
    printList(curNode->getNext());
}

template <class T1>
inline void List<T1>::delItem(T1 data)
{
    Node<T1>* currentNode = _head;

    if (_head == nullptr)
    {
        return;
    }

    while(currentNode->getNext() != nullptr && data > currentNode->getNext()->getData())
    {
        currentNode = currentNode->getNext();
    }

    if(currentNode == _head && currentNode->getData() == data)
    {
        _head = _head->getNext();
        delete currentNode;
        _listSize--;
    }
    else if(currentNode->getNext() != nullptr && currentNode->getNext()->getData() == data)
    {
        Node<T1>* toBeDeleted = currentNode->getNext();
        currentNode->setNext(currentNode->getNext()->getNext());
        delete toBeDeleted;
        _listSize--;
    }
    // else if(currentNode->getNext() != nullptr && currentNode->getNext()->_data != data)
    // {
    //     cout << "Data does not exist in list" << endl;
    // }
    else
    {
        cout << "Data does not exist in list" << endl;
    }
}
