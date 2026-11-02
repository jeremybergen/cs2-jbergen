#include <iostream>

using namespace std;

class Queue
{
    private:
    int _queueSize;
    int _beg, _end;
    int _queue[5];
    int _maxArr = 5;

    public:
    Queue()
    {
        _queueSize = 0;
        _beg = -1;
        _end = -1;
    }

    bool full();
    bool empty();
    void enqueue(int);
    int dequeue();
    int front();
};

int main(int argc, char*argv[])
{
    Queue myQueue;

    myQueue.enqueue(42);
    myQueue.enqueue(15);
    myQueue.enqueue(23);

    cout << "dequeue: " << myQueue.dequeue() << endl;
    cout << "dequeue: " << myQueue.dequeue() << endl;
    
    myQueue.enqueue(9000);
    myQueue.enqueue(123);
    myQueue.enqueue(4321);
    myQueue.enqueue(87439);

    while(!myQueue.empty())
    {
        cout << myQueue.dequeue() << " ";
    }
    cout << endl;

    return 0;
}

bool Queue::full()
{
    if(_queueSize == _maxArr) return true;
    return false;
}
bool Queue::empty()
{
    if(_queueSize == 0) return true;
    return false;
}
void Queue::enqueue(int data)
{
    if(full())
    {
        cerr << "Queue is full" << endl;
        return;
    }

    if(empty())
    {
        _beg++;
        _end++;
        _queue[_beg] = data;
        _queueSize++;
    }
    else
    {
        _end++;
        _end %= _maxArr;
        // _end = _end % _maxArr;

        _queue[_end] = data;
        _queueSize++;
    }
}
int Queue::dequeue()
{
    if(empty())
    {
        cerr << "Queue is empty" << endl;
        return -1;
    }
    int toReturn = _queue[_beg];
    _beg++;
    _queueSize--;
    if(_queueSize == 0)
    {
        _beg = -1;
        _end = -1;
    }
    return toReturn;
}
int Queue::front()
{
    if(!empty()) return _queue[_beg];

    cerr << "Queue is empty" << endl;
    return -1;
}