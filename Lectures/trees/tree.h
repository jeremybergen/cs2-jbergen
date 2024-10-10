#pragma once
#include "node.h"
#include <iostream>

class Tree
{
    private:
    Node* _root;
    Node* privateAddNode(Node*, int);
    void inOrderPrint(Node*);
    void postOrderPrint(Node*);
    void preOrderPrint(Node*);
    void destroyTree(Node*);

    public:
    Tree();
    ~Tree();
    void addNode(int);
    void inOrder();
    void postOrder();
    void preOrder();
};

Tree::~Tree()
{
    destroyTree(_root);
}

void Tree::destroyTree(Node* root)
{
    if(root == nullptr) return;
    destroyTree(root->getLeft());
    destroyTree(root->getRight());
    std::cout << "Freeing: " << &root << std::endl;
    delete root;
}

void Tree::inOrderPrint(Node* root)
{
    if(root == nullptr) return;

    inOrderPrint(root->getLeft());
    std::cout << root->getData() << " ";
    inOrderPrint(root->getRight());
}

void Tree::inOrder()
{
    inOrderPrint(_root);
    std::cout << std::endl;
}

void Tree::postOrderPrint(Node* root)
{
    if(root == nullptr) return;

    postOrderPrint(root->getLeft());
    postOrderPrint(root->getRight());
    std::cout << root->getData() << " ";
}

void Tree::preOrderPrint(Node* root)
{
    if(root == nullptr) return;

    std::cout << root->getData() << " ";
    preOrderPrint(root->getLeft());
    preOrderPrint(root->getRight());
}

void Tree::postOrder()
{
    postOrderPrint(_root);
    std::cout << std::endl;
}

void Tree::preOrder()
{
    preOrderPrint(_root);
    std::cout << std::endl;
}

Node* Tree::privateAddNode(Node* curNode, int data)
{
    if(curNode == nullptr)
    {
        Node* newNode = new Node(data);
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

void Tree::addNode(int data)
{
    _root = privateAddNode(_root, data);
}

Tree::Tree()
{
    _root = nullptr;
}