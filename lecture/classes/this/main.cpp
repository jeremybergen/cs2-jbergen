#include <iostream>
// #include <fstream>

using namespace std;

// class MyClass
// {
//     private:
//     int _num1;
//     public:
//     MyClass()
//     {
//         _num1 = 42;
//     }

//     void printThis()
//     {
//         cout << this << endl;
//     }
// };

class Test
{
    private:
    int x;
    int y;

    public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    Test* setX(int x)
    {
        this->x = x;
        return this;
    }
    Test* setY(int y)
    {
        this->y = y;
        return this;
    }
    void print()
    {
        cout << "x: " << this->x << ", y: " << this->y << endl;
    }
};

int main(int argc, char* argv[])
{
    Test* t1 = new Test;

    t1->setX(42)->setY(15);
    t1->print();

    delete t1;
    // MyClass mc1;
    // MyClass mc2;

    // mc1.printThis();
    // cout << "&mc1: " << &mc1 << endl;

    // mc2.printThis();
    // cout << "&mc2: " << &mc2 << endl;


    // // ifstream fin;
    // // fin.open("whatever", ios_base::app|ios_base::binary|ios_base::beg);
    // // if((string)argv[1] == "test" && argc >= 2)
    // // {
    // //     cout << "Running test function" << endl;
    // //     return 0;
    // // }
    // cout << "argc: " << argc << endl;
    // for(int i = 0; i < argc; i++)
    // {
    //     cout << "argv[" << i << "]: " 
    //          << argv[i] << endl;
    // }
    return 0;
}