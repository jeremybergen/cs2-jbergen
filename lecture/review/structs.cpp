#include <iostream>

using namespace std;

struct MyStruct
{
    int num1;
    float f1;
};

int main(int argc, char* argv[])
{
    MyStruct struct1;

    struct1.num1 = 42;
    struct1.f1 = 15.23;

    cout << "struct1.num1: " << struct1.num1 << endl;
    cout << "struct1.f1: " << struct1.f1 << endl;

    return 0;
}