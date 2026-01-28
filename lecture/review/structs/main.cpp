#include <iostream>

using namespace std;

struct MyStruct
{
    int num1;
    float f1;
    string s1;
    int numbers[10];
    int* ptr1;
    MyStruct* msptr1;
    char ch1;
};

void someFun(MyStruct*);

void myFunction(int*);

int main(int argc, char* argv[])
{
    // MyStruct* ms1 = new MyStruct;

    // MyStruct* ms1;
    // ms1 = new MyStruct;

    // MyStruct ms1;

    // (*ms1).num1 = 42;
    // ms1->f1 = 23.15;
    // ms1->s1 = "Jeremy";

    // cout << ms1->s1 << " favorite numbers: " << ms1->num1 << endl;
    // cout << "sizeof(ms1): " << sizeof(*ms1) << endl;

    // someFun(ms1);

    int num1 = 42;

    cout << "&num1: " << &num1 << endl;
    myFunction(&num1);
    // cout << "num1: " << num1 << endl;

    // delete ms1;
    return 0;
}

void myFunction(int* n1)
{
    cout << "In function: n1: " << n1 << endl;
    (*n1)++;
}

void someFun(MyStruct* s1)
{
    cout << "s1.num1: " << s1->num1 << endl;
}