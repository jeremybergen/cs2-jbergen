#include <iostream>

using namespace std;

class Queue
{
    private:
    static const int _maxQueue = 100;
    int _queueArr[_maxQueue];
    int _front, _back;

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
    return 0;
}

Queue::Queue()
{
    _front = -1;
    _back = -1;
}
void Queue::enqueue(int data)
{
    if(empty())
    {
        _front++;
        _back++;
        _queueArr[_front] = data;
        return;
    }

}
int Queue::dequeue()
{
    return -1;
}
int Queue::front()
{
    return -1;
}
int Queue::size()
{
    return 0;
}
bool Queue::empty()
{
    if(_front == _back && _front == -1) return true;
    return false;
}
bool Queue::full()
{
    if(_back == _maxQueue - 1 && _front == 0) return true;
    return false;
}