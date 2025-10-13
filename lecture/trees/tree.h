#pragma once
#include "node.h"
#include <iostream>

// using namespace std;

template <class T1>
class Tree
{
    private:
        Node<T1>* _root = nullptr;
        Node<T1>* insertNode(Node<T1>* root, T1);
        Node<T1>* searchNode(Node<T1>* root, T1 data);
        Node<T1>* removeNode(Node<T1>* root, T1 data);
        void inOrderPrint(Node<T1>*);
        void destroyTree(Node<T1>*);
    public:
        ~Tree();
        void insert(T1 data);
        void inOrder();
        bool search(T1 data);
        void remove(T1 data);
};

template <class T1>
void Tree<T1>::destroyTree(Node<T1>* root)
{
    if(root == nullptr) return;

    destroyTree(root->getLeft());
    destroyTree(root->getRight());
    // std::cout << "deleting: " << root << std::endl;
    delete root;
}

template <class T1>
Tree<T1>::~Tree()
{
    destroyTree(_root);
}

template <class T1>
Node<T1>* Tree<T1>::insertNode(Node<T1>* root, T1 data)
{
    //root is null
    if(root == nullptr)
    {
        Node<T1>* newNode = new Node<T1>();
        newNode->setData(data);
        // _root = newNode;
        return newNode;
    }
    //root is not null
    if(root->getData() > data)
    {
        //recursively call insert with subtree...
        root->setLeft(insertNode(root->getLeft(), data));
    }
    else
    {
        root->setRight(insertNode(root->getRight(), data));
    }
    return root;
}

template <class T1>
void Tree<T1>::insert(T1 data)
{
    _root = insertNode(_root, data);
}

template <class T1>
void Tree<T1>::inOrder()
{
    inOrderPrint(_root);
    std::cout << std::endl;
}

template <class T1>
void Tree<T1>::inOrderPrint(Node<T1>* root)
{
    if(root == nullptr) return;

    inOrderPrint(root->getLeft());
    std::cout << root->getData() << " ";
    inOrderPrint(root->getRight());
}

template <class T1>
bool Tree<T1>::search(T1 data)
{
    if(searchNode(_root, data) != nullptr)
    {
        return true;
    }
    return false;
}

template <class T1>
Node<T1>* Tree<T1>::searchNode(Node<T1>* root, T1 data)
{
    if(root == nullptr || root->getData() == data)
    {
        return root;
    }
    if(root->getData() > data)
    {
        return searchNode(root->getLeft(), data);
    }
    return searchNode(root->getRight(), data);
    // return root;
}

template <class T1>
Node<T1>* Tree<T1>::removeNode(Node<T1>* root, T1 data)
{
    if(root == nullptr) return;
    
}

template <class T1>
void Tree<T1>::remove(T1 data)
{
    _root = removeNode(_root, data);
}