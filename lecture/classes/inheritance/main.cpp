#include <iostream>

using namespace std;

class Base
{
    protected:
    int _num1;
    string _name;

    public:
    Base(int num, string name)
    {
        _num1 = num;
        _name = name;
    }

    virtual void sayHello() = 0;
};

class Derived : public Base
{
    // private:
    // int _num1;
    // string _name;

    public:
    Derived(int num1, string name) : Base(num1, name)
    {

    }

    int getNum1() { return _num1; }
    string getName() { return _name; }

    void sayHello()
    {
        cout << "Hello from derived" << endl;
    }

    friend ostream& operator<<(ostream& os, const Derived d1)
    {
        os << d1._num1 << ", " << d1._name;
        return os;
    }
};

int main(int argc, char* argv[])
{
    Derived d1(42, "Jeremy");

    cout << d1 << endl;
    cout << d1.getNum1() << " " << d1.getName() << endl;
    d1.sayHello();
    return 0;
}