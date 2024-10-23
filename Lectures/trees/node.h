#pragma once

template <class T1>
class Node
{
    private:
    int _data;
    Node<T1>* _left;
    Node<T1>* _right;

    public:
    // construtor
    Node(int = 0, Node<T1>* = nullptr, Node<T1>* = nullptr);
    // setters
    void setData(int);
    void setLeft(Node<T1>*);
    void setRight(Node<T1>*);
    // getters
    int getData();
    Node<T1>* getLeft();
    Node<T1>* getRight();
};

// construtor
template <class T1>
Node<T1>::Node(int data, Node<T1>* left, Node<T1>* right)
{
    _data = data;
    _left = left;
    _right = right;
}
// setters
template <class T1>
void Node<T1>::setData(int data)
{
    _data = data;
}

template <class T1>
void Node<T1>::setLeft(Node<T1>* left)
{
    _left = left;
}

template <class T1>
void Node<T1>::setRight(Node<T1>* right)
{
    _right = right;
}
// getters
template <class T1>
int Node<T1>::getData()
{
    return _data;
}
template <class T1>
Node<T1>* Node<T1>::getLeft()
{
    return _left;
}
template <class T1>
Node<T1>* Node<T1>::getRight()
{
    return _right;
}
