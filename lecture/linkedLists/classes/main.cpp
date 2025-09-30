#include <iostream>
#include "list.h"

using namespace std;

class MyClass
{
    private:
        int _num;
        float _num2;
    
    public:
        MyClass() {}
        MyClass(int num, float num2) { _num = num; _num2 = num2; }
        bool operator==(MyClass rhs) { return _num == rhs._num; }
        bool operator<(MyClass rhs) { return _num < rhs._num2; }
        bool operator<=(MyClass rhs) { return _num <= rhs._num2; }
        friend ostream& operator<<(ostream& os, MyClass rhs)
        {
            os << rhs._num << ", " << rhs._num2;
            return os;
        }
};

int main(int argc, char* argv[])
{
    List<MyClass> myList;

    myList.insert(MyClass(42, 42.5));
    myList.insert(MyClass(15, 15.23));
    myList.insert(MyClass(23, 23.7894321));

    cout << myList << endl;
    return 0;
}