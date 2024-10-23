#pragma once
#include "node.h"
#include <iostream>

template <class T1>
class Tree
{
    private:
    Node<T1>* _root;
    Node<T1>* privateAddNode(Node<T1>*, T1);
    void inOrderPrint(Node<T1>*);
    void postOrderPrint(Node<T1>*);
    void preOrderPrint(Node<T1>*);
    void destroyTree(Node<T1>*);
    Node<T1>* searchTree(Node<T1>*, T1);
    Node<T1>* removeNode(Node<T1>*, T1);
    Node<T1>* minVal(Node<T1>*);

    public:
    Tree();
    ~Tree();
    void addNode(T1);
    void inOrder();
    void postOrder();
    void preOrder();
    bool search(T1);
    void remove(T1);
    void printRoot();
};

template <class T1>
void Tree<T1>::printRoot()
{
    std::cout << _root->getData() << std::endl;
}

template <class T1>
Node<T1>* Tree<T1>::minVal(Node<T1>* root)
{
    Node<T1>* curNode = root;
    while(curNode != nullptr && curNode->getLeft() != nullptr)
    {
        curNode = curNode->getLeft();
    }
    return curNode;
}

template <class T1>
Node<T1>* Tree<T1>::removeNode(Node<T1>* root, T1 data)
{
    if(root == nullptr) return root;
    if(root->getData() > data)
    {
        root->setLeft(removeNode(root->getLeft(), data));
    }
    else if (root->getData() < data)
    {
        root->setRight(removeNode(root->getRight(), data));
    }
    else
    {
        if(root->getLeft() == nullptr)
        {
            Node<T1>* tmpNode = root->getRight();
            delete root;
            return tmpNode;
        }
        else if(root->getRight() == nullptr)
        {
            Node<T1>* tmpNode = root->getLeft();
            delete root;
            return tmpNode;
        }
        Node<T1>* minNode = minVal(root->getRight());

        root->setData(minNode->getData());
        root->setRight(removeNode(root->getRight(), minNode->getData()));
    }
    return root;
}

template <class T1>
void Tree<T1>::remove(T1 data)
{
    // Node<T1>* foundNode;
    // foundNode = searchTree(_root, data);
    _root = removeNode(_root, data);
}

template <class T1>
Node<T1>* Tree<T1>::searchTree(Node<T1>* root, T1 data)
{
    if(root == nullptr || root->getData() == data)
    {
        return root;
    }

    if(root->getData() > data)
    {
        return searchTree(root->getLeft(), data);
    }
    return searchTree(root->getRight(), data);
}

template <class T1>
bool Tree<T1>::search(T1 data)
{
    Node<T1>* foundNode;
    foundNode = searchTree(_root, data);

    if(foundNode == nullptr) return false;
    return true;
}

template <class T1>
Tree<T1>::~Tree()
{
    destroyTree(_root);
}

template <class T1>
void Tree<T1>::destroyTree(Node<T1>* root)
{
    if(root == nullptr) return;
    destroyTree(root->getLeft());
    destroyTree(root->getRight());
    // std::cout << "Freeing: " << &root << std::endl;
    delete root;
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
void Tree<T1>::inOrder()
{
    inOrderPrint(_root);
    std::cout << std::endl;
}

template <class T1>
void Tree<T1>::postOrderPrint(Node<T1>* root)
{
    if(root == nullptr) return;

    postOrderPrint(root->getLeft());
    postOrderPrint(root->getRight());
    std::cout << root->getData() << " ";
}

template <class T1>
void Tree<T1>::preOrderPrint(Node<T1>* root)
{
    if(root == nullptr) return;

    std::cout << root->getData() << " ";
    preOrderPrint(root->getLeft());
    preOrderPrint(root->getRight());
}

template <class T1>
void Tree<T1>::postOrder()
{
    postOrderPrint(_root);
    std::cout << std::endl;
}

template <class T1>
void Tree<T1>::preOrder()
{
    preOrderPrint(_root);
    std::cout << std::endl;
}

template <class T1>
Node<T1>* Tree<T1>::privateAddNode(Node<T1>* curNode, T1 data)
{
    if(curNode == nullptr)
    {
        Node<T1>* newNode = new Node(data);
        return newNode;
    }

    if(curNode->getData() > data)
    {
        curNode->setLeft(privateAddNode(curNode->getLeft(), data));
    }
    else if (curNode->getData() < data)
    {
        curNode->setRight(privateAddNode(curNode->getRight(), data));
    }

    return curNode;
}

template <class T1>
void Tree<T1>::addNode(T1 data)
{
    _root = privateAddNode(_root, data);
}

template <class T1>
Tree<T1>::Tree()
{
    _root = nullptr;
}