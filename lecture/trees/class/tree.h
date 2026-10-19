#pragma once
#include "node.h"
#include <iostream>

using namespace std;

template <class T1>
class Tree
{
    private:
    Node<T1>* _root;

    Node<T1>* insertNode(T1 data, Node<T1>* root)
    {
        if(root == nullptr)
        {
            // cout << "root == nullptr" << endl;
            Node<T1>* newNode = new Node<T1>(data);
            root = newNode;
            return root;
        }

        if(data < root->getData())
        {
            // cout << "root->getLeft()" << endl;
            root->setLeft(insertNode(data, root->getLeft()));
        }
        else
        {
            // cout << "root->getRight()" << endl;
            root->setRight(insertNode(data, root->getRight()));
        } 
        return root;
    }

    void inOrderPrint(Node<T1>* root)
    {
        if(root == nullptr) return;

        
        inOrderPrint(root->getLeft());
        std::cout << root->getData() << " ";
        inOrderPrint(root->getRight());
        
    }

    public:
    Tree<T1>()
    {
        _root = nullptr;
    }

    void insert(T1 data)
    {
        _root = insertNode(data, _root);
    }

    void inOrder()
    {
        // cout << "_root: " << _root << endl;
        inOrderPrint(_root);
        std::cout << std::endl;
    }
};