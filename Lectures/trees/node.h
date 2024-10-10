#pragma once

class Node
{
    private:
    int _data;
    Node* _left;
    Node* _right;

    public:
    // construtor
    Node(int = 0, Node* = nullptr, Node* = nullptr);
    // setters
    void setData(int);
    void setLeft(Node*);
    void setRight(Node*);
    // getters
    int getData();
    Node* getLeft();
    Node* getRight();
};

// construtor
Node::Node(int data, Node* left, Node* right)
{
    _data = data;
    _left = left;
    _right = right;
}
// setters
void Node::setData(int data)
{
    _data = data;
}
void Node::setLeft(Node* left)
{
    _left = left;
}
void Node::setRight(Node* right)
{
    _right = right;
}
// getters
int Node::getData()
{
    return _data;
}
Node* Node::getLeft()
{
    return _left;
}
Node* Node::getRight()
{
    return _right;
}
