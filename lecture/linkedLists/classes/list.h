#pragma once
#include "node.h"
#include <iostream>

using namespace std;

template <class T1>
class List
{
    private:
        Node<T1> *_head;
        size_t _listSize;

    public:
        List()
        {
            _head = nullptr;
            _listSize = 0;
        }

        ~List()
        {
            while(_head != nullptr)
            {
                // cout << "_head: " << _head << endl;
                // cout << "_head->getNext(): " << _head->getNext() << endl;
                Node<T1>* tbd = _head;
                _head = _head->getNext();
                // cout << "_head: " << _head << endl;
                // cout << "tbd: " << tbd << endl;
                _listSize--;
                // cout << "Deleting: " << tbd << endl;
                delete tbd;
            }
        }

        void insert(T1 data)
        {
            Node<T1>* newNode = new Node<T1>(data, nullptr);

            // If list is empty
            if(_head == nullptr)
            {
                // cout << "List is empty" << endl;
                _head = newNode;
                _listSize++;
                return;
            }

            // Figure out where to go into the list
            Node<T1>* curNode = _head;
            while(curNode->getNext() != nullptr && curNode->getNext()->getData() < data)
            {
                curNode = curNode->getNext();
            }

            // if data is supposed to be inserted before curNode (ie at the head)
            if(data < curNode->getData())
            {
                _head = newNode;
                newNode->setNext(curNode);
                _listSize++;
            }
            else
            {
                newNode->setNext(curNode->getNext());
                curNode->setNext(newNode);
                _listSize++;
            }
        }

        void remove(T1 data)
        {
            Node<T1>* toBeDeleted;
            Node<T1>* prevNode;

            if(_head == nullptr)
            {
                cerr << "List empty" << endl;
                return;
            }

            toBeDeleted = _head;
            prevNode = _head;
            //                                                  100              42
            while(toBeDeleted->getNext() != nullptr && toBeDeleted->getNext()->getData() <= data)
            {
                prevNode = toBeDeleted;
                toBeDeleted = toBeDeleted->getNext();
            }

            // Check at beginning and node to delete
            if(prevNode == toBeDeleted && toBeDeleted->getData() == data)
            {
                _head = toBeDeleted->getNext();
                _listSize--;
                delete toBeDeleted;
            }
            else
            {
                if(toBeDeleted->getData() == data)
                {
                    prevNode->setNext(toBeDeleted->getNext());
                    _listSize--;
                    delete toBeDeleted;
                }
                else
                {
                    cerr << "Node not found" << endl;
                }
            }
        }

        void find(T1 data)
        {

        }

        friend ostream& operator<<(ostream& os, const List<T1>& l)
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