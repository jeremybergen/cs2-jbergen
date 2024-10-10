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
    Node* searchTree(Node*, int);
    Node* removeNode(Node*, int);
    Node* minVal(Node*);

    public:
    Tree();
    ~Tree();
    void addNode(int);
    void inOrder();
    void postOrder();
    void preOrder();
    bool search(int);
    void remove(int);
};

Node* Tree::minVal(Node* root)
{
    Node* curNode = root;
    while(curNode != nullptr && curNode->getLeft() != nullptr)
    {
        curNode = curNode->getLeft();
    }
    return curNode;
}

Node* Tree::removeNode(Node* root, int data)
{
    if(root == nullptr) return;
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
            Node* tmpNode = root->getRight();
            delete root;
            return tmpNode;
        }
        else if(root->getRight() == nullptr)
        {
            Node* tmpNode = root->getLeft();
            delete root;
            return tmpNode;
        }
        Node* minNode = minVal(root->getRight());

        root->setData(minNode->getData());
        root->setRight(removeNode(root->getRight(), minNode->getData()));
    }
}

void Tree::remove(int data)
{

}

Node* Tree::searchTree(Node* root, int data)
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

bool Tree::search(int data)
{
    Node* foundNode;
    foundNode = searchTree(_root, data);

    if(foundNode == nullptr) return false;
    return true;
}

Tree::~Tree()
{
    destroyTree(_root);
}

void Tree::destroyTree(Node* root)
{
    if(root == nullptr) return;
    destroyTree(root->getLeft());
    destroyTree(root->getRight());
    // std::cout << "Freeing: " << &root << std::endl;
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