#include <iostream>
#include "tree.h"

using namespace std;

class MyClass
{
    private:
        int _num;
        float _num2;
    
    public:
        MyClass() {}
        MyClass(int num, float num2) { _num = num; _num2 = num2; }
        bool operator==(const MyClass rhs) { return _num == rhs._num; }
        bool operator!=(const MyClass rhs) { return !this->operator==(*this); }
        bool operator<(const MyClass rhs) { return _num2 < rhs._num2; }
        bool operator>(const MyClass rhs) { return _num2 > rhs._num2; }
        bool operator<=(const MyClass rhs) { return _num <= rhs._num2; }
        friend ostream& operator<<(ostream& os, MyClass rhs)
        {
            os << "\"" << rhs._num << ", " << rhs._num2 << "\"";
            return os;
        }
};

int main(int argc, char* argv[])
{
    Tree<MyClass> t1;
    // int searchNum;

    // t1.insert(42);
    // t1.insert(15);
    // t1.insert(100);
    // t1.insert(23);
    // t1.insert(10);
    // t1.insert(20);
    t1.insert(MyClass(42, 1.2));
    t1.insert(MyClass(15, 5.3));

    t1.inOrder();

    // cout << "Enter number to search for: ";
    // cin >> searchNum;

    // cout << boolalpha << t1.search(searchNum) << endl;
    // t1.remove(23);
    // t1.inOrder();
    return 0;
}