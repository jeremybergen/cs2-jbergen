#include <iostream>

using namespace std;

class MyClass
{
    private:
        int _secondVar;
        int _myVar;

    public:
        void setMyVar(int);
        void printMyVar();
};

int main(int argc, char* argv[])
{
    // int numbers[5];

    // cout << numbers << endl;
    // cout << &numbers[0] << endl;
    MyClass mc1;

    mc1.setMyVar(42);
    mc1.printMyVar();

    cout << "inside main: " << &mc1 << endl;
    return 0;
}

void MyClass::setMyVar(int myVar)
{
    _myVar = myVar;
}

void MyClass::printMyVar()
{
    int* tmpPtr;
    tmpPtr = (int*)this;
    cout << &_myVar << endl;
    cout << *(tmpPtr+1) << endl;
}