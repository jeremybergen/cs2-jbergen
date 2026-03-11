#pragma once

template <class T1>
class Node
{
    private:
    T1 _data;
    Node<T1>* _next;
    Node<T1>* _prev;

    public:
    Node();

    void setData(T1);
    void setNext(Node<T1>*);

    T1 getData();
    Node<T1>* getNext();
};

template <class T1>
inline Node<T1>::Node()
{
    _next = nullptr;
    _prev = nullptr;
}

template <class T1>
void Node<T1>::setData(T1 data)
{
    _data = data;
}

template <class T1>
void Node<T1>::setNext(Node<T1>* next)
{
    _next = next;
}

template <class T1>
T1 Node<T1>::getData()
{
    return _data;
}

template <class T1>
Node<T1>* Node<T1>::getNext()
{
    return _next;
}
