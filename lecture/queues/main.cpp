#include <iostream>

using namespace std;

template <class T1>
class Node
{
    public:
    T1 _data;
    Node<T1>* _next;
    // Node<T1>* _prev;
};

template <class T1>
class Queue
{
    private:
    Node<T1>* _front;
    Node<T1>* _back;
    size_t _size;

    public:
    Queue()
    {
        _front = nullptr;
        _back = nullptr;
        _size = 0;
    }
    ~Queue()
    {
        while(!empty()) dequeue();
    }
    void enqueue(T1 data)
    {
        Node<T1>* newNode = new Node<T1>;
        newNode->_data = data;

        if(empty())
        {
            _front = newNode;
            _back = newNode;
        }
        else
        {
            _back->_next = newNode;
            _back = newNode;
        }
        _size++;
    }
    T1 dequeue()
    {
        T1 tmpData;
        if(!empty())
        {
            Node<T1>* tmpNode = _front;
            tmpData = _front->_data;
            _front = _front->_next;
            delete tmpNode;
            if(_front == nullptr) _back = nullptr;
            _size--;
        }
        
        return tmpData;
    }
    size_t size()
    {
        return _size;
    }
    bool empty()
    {
        if(_front == nullptr) return true;
        return false;
        // (_front == nullptr) ? return true : return false
    }
    T1 front()
    {
        if(!empty()) return _front->_data;
        cerr << "Queue Empty" << endl;
    }
    T1 back()
    {
        if(!empty()) return _back->_data;
        cerr << "Queue Empty" << endl;
    }
};

int main(int argc, char* argv[])
{
    Queue<int> myQueue;

    while(true)
    {
        int newNum;
        cout << "Enter a number, -999 to quit: ";
        cin >> newNum;
        if(newNum == -999) break;
        myQueue.enqueue(newNum);
    }
    
    cout << "Queue size: " << myQueue.size() << endl;

    // while(!myQueue.empty())
    // {
    //     cout << myQueue.dequeue() << " ";
    // }
    // cout << endl;

    // cout << "Queue size: " << myQueue.size() << endl;


    return 0;
}