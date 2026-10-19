#pragma once

template <class T1>
class Node
{
    private:
    T1 _data;
    Node<T1>* _next;

    public:
    Node(T1 data)
    {
        _data = data;
        _next = nullptr;
    }

    T1 getData() { return _data; }
    Node<T1>* getNext() { return _next; }
    void setData(T1 data) {_data = data;}
    void setNext(Node<T1>* next) {_next = next;}
};