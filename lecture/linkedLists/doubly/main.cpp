#include <iostream>

using namespace std;

template <typename T1>
class Node
{
    private:
    T1 _data;
    Node<T1>* _next;
    Node<T1>* _prev;

    public:
    Node<T1>()
    {
        _next = nullptr;
        _prev = nullptr;
    }

    void setData(T1 data)
    {
        _data = data;
    }
    void setNext(Node<T1>* next)
    {
        _next = next;
    }
    void setPrev(Node<T1>* prev)
    {
        _prev = prev;
    }
    T1 getData()
    {
        return _data;
    }
    Node<T1>* getNext()
    {
        return _next;
    }
    Node<T1>* getPrev()
    {
        return _prev;
    }
};

template <typename T1>
class List
{
    private:
    Node<T1>* _head;
    Node<T1>* _tail;

    public:
    List<T1>()
    {
        _head = nullptr;
        _tail = nullptr;
    }
    Node<T1>* getHead()
    {
        return _head;
    }
    Node<T1>* getTail()
    {
        return _tail;
    }

    void addData(T1 data)
    {
        Node<T1>* newNode = new Node<T1>;
        newNode->setData(data);
        // newNode->setNext(nullptr);
        // newNode->setPrev(nullptr);
        // if(_head == nullptr && _tail == nullptr)
        if(_head == _tail && _head == nullptr)
        {
            _head = newNode;
            _tail = newNode;
        }
        Node<T1>* cNode = _head;
        while(cNode->getNext() != nullptr && cNode->getData() < data)
        {
            cNode = cNode->getNext();
        }
        if(cNode->getNext() == nullptr && cNode->getPrev() == nullptr)
        {
            if(cNode->getData() > data)
            {
                _head = newNode;
                _head->setNext(cNode);
                cNode->setPrev(_head);
            }
            else
            {
                _tail = newNode;
                _tail->setPrev(cNode);
                cNode->setNext(_tail);
            }
            return;
        }
        //at head
        if(cNode->getPrev() == nullptr)
        {
            if(cNode->getData() > data)
            {
                _head = newNode;
                _head->setNext(cNode);
                cNode->setPrev(_head);
            }
            else
            {
                _tail = newNode;
                _tail->setPrev(cNode);
                cNode->setNext(_tail);
            }
            return;
        }
        //at tail
        if(cNode->getNext() == nullptr)
        {
            if(cNode->getData() < data)
            {
                _tail = newNode;
                _tail->setPrev(cNode);
                cNode->setNext(_tail);
            }
            else
            {
                _tail.getPrev().setNext(newNode);
                // _tail.setPrev(newNode);
                // newNode.setNext(_tail);
            }
            return;
        }
        
        //at middle

        
    }
};

int main(int argc, char* argv[])
{
    List<int> mylist1;

    mylist1.addData(42);
    mylist1.addData(15);
    mylist1.addData(23);

    return 0;
}