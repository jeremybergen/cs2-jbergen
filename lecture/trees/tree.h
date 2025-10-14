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
        Node<T1>* minVal(Node<T1>*);
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
Node<T1>* Tree<T1>::minVal(Node<T1>* root)
{
    Node<T1>* curNode = root;
    while(curNode->getLeft() != nullptr)
    {
        curNode = curNode->getLeft();
    }
    std::cout << curNode->getData() << std::endl;
    return curNode; 
}

template <class T1>
Node<T1>* Tree<T1>::removeNode(Node<T1>* root, T1 data)
{
    if(root == nullptr) return root;

    if(data < root->getData())
    {
        root->setLeft(removeNode(root->getLeft(), data));
    }
    else if( data > root->getData())
    {
        root->setRight(removeNode(root->getRight(), data));
    }
    else
    {
        if(root->getLeft() == root->getRight())
        {
            // leaf node;
            delete root;
            return nullptr;
        }
        else if(root->getLeft() != nullptr && root->getRight() == nullptr)
        {
            // left has node, right is null
            Node<T1>* tmpNode = root->getLeft();
            delete root;
            return tmpNode;
        }
        else if(root->getRight() != nullptr && root->getLeft() == nullptr)
        {
            // right has node, left is null
            Node<T1>* tmpNode = root->getRight();
            delete root;
            return tmpNode;
        }
        else
        {
            // both have node
            Node<T1>* tmpNode = minVal(root->getRight());
            tmpNode->setLeft(root->getLeft());
            tmpNode->setRight(root->getRight());
            delete root;
            return tmpNode;
        }
    }
    return root;
}

template <class T1>
void Tree<T1>::remove(T1 data)
{
    // Node<T1>* toBeRemoved = searchNode(_root, data);
    _root = removeNode(_root, data);
    std::cout << "updated root" << std::endl;
}