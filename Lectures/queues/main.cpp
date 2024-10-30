#include <iostream>

using namespace std;

template <class T1>
class Queue
{
    private:
    static const int maxQueue = 100;
    T1 _queueArr[maxQueue];
    int _beg, _end;

    public:
    Queue();
    void enqueue(T1);
    T1 dequeue();
    bool empty();
    bool full();
    int size();
    T1 front();
    T1 end();
};

int main(int argc, char* argv[])
{
    Queue<int> myQueue;

    int inData;

    cout << "Enter -999999 to quit" << endl;
    while(true)
    {
        cout << "Enter a number: ";
        cin >> inData;
        if(inData == -999999) break;
        myQueue.enqueue(inData);
    }
    cout << "myQueue size: " 
         << myQueue.size() << endl;

    cout << "myQueue front: "
         << myQueue.front() << endl;

    cout << "myQueue end: "
         << myQueue.end() << endl;

    while(myQueue.size() > 0)
    {
        cout << "data: " << myQueue.dequeue() << " ";
    }
    cout << endl;

    return 0;
}

template <class T1>
Queue<T1>::Queue()
{
    _beg = -1;
    _end = -1;
}

template <class T1>
void Queue<T1>::enqueue(T1 data)
{
    if(empty())
    {
        // cout << "DEBUG: Queue is empty" << endl;
        _beg = 0;
        _end = 0;
        _queueArr[_beg] = data;
        return;
    } else if(full())
    {
        cout << "Queue is full" << endl;
        return;
    }
    _end++;
    _end = _end % maxQueue;
    _queueArr[_end] = data;
}

template <class T1>
T1 Queue<T1>::dequeue()
{
    if(empty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    T1 tmpData = _queueArr[_beg];
    if(_beg == _end)
    {
        _beg = -1;
        _end = -1;
    } else
    {
        _beg++;
        _beg = _beg % maxQueue;
    }
    return tmpData;
}

template <class T1>
bool Queue<T1>::empty()
{
    if(_beg == -1) return true;
    return false;
}

template <class T1>
bool Queue<T1>::full()
{
    // return !empty();
    if((_end > _beg && _beg == 0 && _end == maxQueue - 1) || (_end - _beg == -1)) return true;
    return false;
}

template <class T1>
int Queue<T1>::size()
{
    // cout << "DEBUG: _end: " << _end << " _beg: " << _beg << endl;
    if(empty()) return 0;
    if(_end > _beg) return _end - _beg + 1;
    return (abs((_end - _beg)) + 1);
}

template <class T1>
T1 Queue<T1>::front()
{
    if(!empty()) return _queueArr[_beg];
    cout << "Queue is empty" << endl;
    return -1;
}

template <class T1>
T1 Queue<T1>::end()
{
    if(!empty()) return _queueArr[_end];
    cout << "Queue is empty" << endl;
    return -1;
}