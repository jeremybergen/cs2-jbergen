#include <iostream>

using namespace std;

class Queue
{
    private:
        static const int _maxQueue = 100;
        int _queue[_maxQueue];
        int _beg, _end;

    public:
        Queue();
        void enqueue(int);
        int dequeue();
        int front();
        bool full();
        bool empty();
        int size();
};

int main(int argc, char* argv[])
{
    Queue myQueue;

    while(true)
    {
        int inNum;
        cout << "Enter a number, -999 to quit: ";
        cin >> inNum;
        if(inNum == -999) break;
        myQueue.enqueue(inNum);
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
    _beg = -1;
    _end = -1;
}
void Queue::enqueue(int data)
{
    if(empty())
    {
        _beg = 0;
        _end = 0;
        _queue[_beg] = data;
        return;
    }
    if(full())
    {
        cerr << "Queue is full" << endl;
        return;
    }
    _end++;
    _queue[_end] = data;
}
int Queue::dequeue()
{
    if(empty())
    {
        cerr << "Queue empty" << endl;
        return -999;
    }
    int toReturn = _queue[_beg];
    _beg++;
    if(_beg > _end)
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
    return -999;
}
bool Queue::full()
{
    if((_end > _beg && _beg == 0 && _end == _maxQueue - 1) || (_end - _beg == -1)) return true;
    return false;
}
bool Queue::empty()
{
    if(_beg == _end && _beg == -1) return true;
    return false;
}
int Queue::size()
{   
    if(full()) return _maxQueue;
    if(_end > _beg) return _end - _beg + 1;
    if(_end < _beg) return _maxQueue - abs(_end - _beg + 1);
    // return _end+1;
}