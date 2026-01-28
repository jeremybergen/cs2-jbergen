#include <iostream>
#include <cassert>

using namespace std;

int addNums(int, int);
void test();

// int main(int argc, char** argv)
int main(int argc, char* argv[])
{
    if(argc == 2 && (string)argv[1] == "test")
    {
        test();
        return 0;
    }
    

    int num1, num2;

    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << addNums(num1, num2) << endl;

    // cout << "argc: " << argc << endl;

    // for(int i = 0; i < argc; i++)
    // {
    //     cout << "argv[" << i << "]: "
    //          << argv[i] << endl;
    // }
    // cout << "argv[0]: " 
    //      << argv[0] << endl;
    return 0;
}

int addNums(int n1, int n2)
{
    return n1 + n2;
}

void test()
{
    assert(addNums(42, 15) == 57);
    assert(addNums(123, 5) == 128);
    assert(addNums(2, 2) == 4);
    cout << "All test cases passed" << endl;
}