#include <iostream>

using namespace std;

template <class T1>
class Queue
{
    private:
    const int maxQueue = 100;
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

}

template <class T1>
T1 Queue<T1>::dequeue()
{

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
    if(empty()) return 0;
    if(_end > _beg) return _end - _beg + 1;
    return maxQueue - (abs((_end - _beg)) + 1)
}

template <class T1>
T1 Queue<T1>::front()
{

}

template <class T1>
T1 Queue<T1>::end()
{

}