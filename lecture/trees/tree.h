#pragma once
#include "node.h"

template <class T1>
class Tree
{
    private:
        Node<T1>* _root = nullptr;
        Node<T1>* insertNode(Node<T1>* root, T1);
    public:
        void insert(T1 data);
        void inOrder();
};

template <class T1>
void Tree<T1>::insert(T1 data)
{
    //root is null
    if(_root == nullptr)
    {
        Node<T1>* newNode = new Node;
        newNode->setData(data);
        _root = newNode;
        return;
    }
    //root is not null
    if(_root->getData() > data)
    {
        //recursively call insert with subtree...

    }
}

template <class T1>
void Tree<T1>::inOrder()
{

}