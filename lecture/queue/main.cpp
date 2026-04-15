#include <iostream>
#include "queueArr.h"

using namespace std;

int main(int argc, char* argv[])
{
    Queue<int> myQueue;

    while(!myQueue.full())
    {
        int num1;
        cout << "Enter a number: ";
        cin >> num1;
        myQueue.enqueue(num1);
    }

    cout << myQueue.dequeue() << " ";
    cout << myQueue.dequeue() << " ";

    myQueue.enqueue(42);
    myQueue.enqueue(15);

    while(!myQueue.empty())
    {
        cout << myQueue.dequeue() << " ";
    }
    cout << endl;
    // myQueue.enqueue(23);

    // cout << myQueue.dequeue() << " ";
    // cout << myQueue.dequeue() << " ";
    // cout << myQueue.dequeue() << " ";

    // myQueue.enqueue(9000);

    
    // cout << myQueue.dequeue() << " ";
    // cout << myQueue.dequeue() << " ";

    // while(!myQueue.empty())
    // {
    //     cout << myQueue.dequeue() << endl;
    // }
    return 0;
}