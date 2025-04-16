#include <iostream>
#include <cmath>

using namespace std;

class Queue
{
    private:
    static const int _maxQueue = 5;
    int _queueArr[_maxQueue];
    int _front, _back, _size;

    public:
    Queue();
    void enqueue(int);
    int dequeue();
    int front();
    int size();
    bool empty();
    bool full();
};

int main(int argc, char* argv[])
{
    Queue myQueue;

    while(true)
    {
        int number;
        cout << "Enter numbers, -999 to quit: ";
        cin >> number;
        if(number == -999) break;
        myQueue.enqueue(number);
    }

    while(!myQueue.empty())
    {
        cout << myQueue.dequeue() << " ";
    }
    cout << endl;
    return 0;
}

Queue::Queue()
{
    _front = -1;
    _back = -1;
    _size = 0;
}
void Queue::enqueue(int data)
{
    if(empty())
    {
        _front++;
        _back++;
        _size++;
        _queueArr[_front] = data;
        return;
    }
    if(full())
    {
        cerr << "Queue is full" << endl;
        return;
    }
    if(_back == _maxQueue - 1) _back = -1;
    _back++;
    _size++;
    _queueArr[_back] = data;
}
int Queue::dequeue()
{
    if(empty())
    {
        cerr << "Queue Empty" << endl;
        return -1;
    }
    int retValue = _queueArr[_front];
    _front++;
    if(_front == _maxQueue)
    {
        _front = 0;
    }
    else if (_front - 1 == _back)
    {
        _front = -1;
        _back = -1;
    }
    _size--;
    // cout << "size: " << _size << endl;
    return retValue;
}
int Queue::front()
{
    if(!empty()) return _queueArr[_front];
    return -1;
}
int Queue::size()
{
    return _size;
}
bool Queue::empty()
{
    // if(_front == _back && _front == -1) return true;
    if(_size == 0) return true;
    return false;
}
bool Queue::full()
{
    // if(_back == _maxQueue - 1 && _front == 0) return true;
    // if(((_back - _front) == _maxQueue - 1) || ((_front-_back) == 1)) return true;
    if(_size == _maxQueue) return true;
    return false;
}