#pragma once
#include "node.h"

class Tree
{
    private:
    Node* _root;
    Node* privateAddNode(Node*, int);

    public:
    Tree();
    void addNode(int);
};

Node* Tree::privateAddNode(Node* curNode, int data)
{
    if(curNode->getData() < data && curNode->getRight() == nullptr)
    {
        Node* newNode = new Node(data);
        curNode->setRight(newNode);
        return curNode;
    }
    if(curNode->getData() > data && curNode->getLeft() == nullptr)
    {
        Node* newNode = new Node(data);
        curNode->setLeft(newNode);
        return curNode;
    }

    if(curNode->getData() < data)
    {
        privateAddNode(curNode->getRight(), data);
    }
    else
    {
        privateAddNode(curNode->getLeft(), data);
    }

    // Node* newNode = new Node(data);

    // Node* curNode = _root;
    // while(curNode->getRight() != nullptr)
    // {
    //     if(_root->getData() < data && _root->getRight() == nullptr)
    //     {
    //         _root->setRight(newNode);
    //     }
    // }

}

void Tree::addNode(int data)
{
    Node* newNode = new Node(data);

    if(_root == nullptr)
    {
        _root = newNode;
    }
    else
    {
    }
}

Tree::Tree()
{
    _root = nullptr;
}