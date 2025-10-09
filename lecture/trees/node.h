#pragma once

template <class T1>
class Node
{
    private:
        T1 _data;
        Node<T1>* _left;
        Node<T1>* _right;

    public:
        Node()
        {
            _left = nullptr;
            _right = nullptr;
        }
        Node(T1 data, Node<T1>* left, Node<T1>* right)
        {
            _data = data;
            _left = left;
            _right = right;
        }
        void setData(T1 data) { _data = data; }
        void setLeft(Node<T1>* left) { _left = left; }
        void setRight(Node<T1>* right) { _right = right; }

        T1 getData() { return _data; }
        Node<T1>* getLeft() { return _left; }
        Node<T1>* getRight() { return _right; }
};