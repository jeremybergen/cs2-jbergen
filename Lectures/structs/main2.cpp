#include <iostream>

using namespace std;

void something(int);
void something2(const int&);
void something3(int*);

int main(int argc, char* argv[])
{
    int num1 = 42;
    int* ptr1 = &num1;

    cout << "Inside main: num1: " << num1 << " &num1: " << &num1 << endl;
    something(num1);
    something(42);
    something2(num1);
    something2(42);

    cout << "something3(ptr1): " << endl;
    something3(ptr1);

    cout << "something3(&num1): " << endl;
    something3(&num1);

    return 0;
}

void something(int n1)
{
    cout << "Inside something: n1: " << n1 << " &n1: " << &n1 << endl;
}
void something2(const int& n1)
{
    cout << "Inside something2: n1: " << n1 << " &n1: " << &n1 << endl;
}
void something3(int* n1)
{
    cout << "Inside something3: n1: " << n1 << " &n1: " << &n1 << endl;
}