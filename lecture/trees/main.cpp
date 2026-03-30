#include <iostream>

using namespace std;

class Node
{
    private:
    int _data;
    Node* _left;
    Node* _right;

    public:
    Node(int data = 0, Node* left = nullptr, Node* right = nullptr)
    {
        _data = data;
        _left = left;
        _right = right;
    }
    int getData() { return _data; }
    Node* getLeft() { return _left; }
    Node* getRight() { return _right; }
    void setLeft(Node* left) { _left = left; }
    void setRight(Node* right) { _right = right; }
};

class Tree
{
    private:
    Node* _root;
    Node* insert(Node* newRoot, int data);

    public:
    Tree() { _root = nullptr; }
    void insert(int data);
    Node* getRoot() { return _root; }
    void print();
};

int main(int argc, char* argv[])
{
    Tree myTree;

    myTree.insert(42);
    myTree.insert(15);

    return 0;
}

void Tree::insert(int data)
{
    insert(_root, data);
}

Node* Tree::insert(Node* newRoot, int data)
{
    
    if(newRoot == nullptr)
    {
        Node* newNode = new Node(data);
        // newRoot = newNode;
        return newNode;
    }

    if(data < newRoot->getData())
    {
        //go left
        newRoot->setLeft(insert(newRoot->getLeft(), data));
    }
    else
    {
        //go right
        newRoot->setRight(insert(newRoot->getRight(), data));
    }
    return newRoot;
}

void print()
{
    
}