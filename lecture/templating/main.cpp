#include <iostream>

using namespace std;

void hello();
void goodbye();

int main(int argc, char* argv[])
{
    hello();
    // goodbye();
    return 0;
}

void goodbye()
{
    cout << "Goodbye" << endl;
    hello();
}

void hello()
{
    cout << "Hello" << endl;
    goodbye();
}


// #include <iostream>
#include <vector>

// using namespace std;

// // int addNums(int, int);
// // float addNums(float, float);

// template<class T1, class T2, class T3>
// T3 addNums(T1, T2);

// template<class T1>
// struct Node
// {
//     T1 _data;
// };

// int main(int argc, char* argv[])
// {
//     Node<int> node1;
//     Node<string> node2;
//     Node<vector<int>> node3;
//     Node<vector<vector<int>>> node4;
//     Node<vector<vector<vector<int>>>> node5;
//     Node<vector<vector<vector<vector<int>>>>> node6;
//     Node<vector<vector<vector<vector<vector<string>>>>>> node7;

//     Node< vector<int[10]> > node8;
//     // vector<int> numbers;
//     // vector<string> morestrings;
//     // vector<float> myfloats;


//     // // numbers.push_back(42);
//     // // numbers.push_back(15);
//     // // numbers.push_back(23);
//     // // numbers.push_back(9000);
//     // // numbers.push_back(-123);
//     // for(int i = 0; i < 1000000; i++)
//     // {
//     //     numbers.push_back(i);
//     // }
//     // cout << "numbers.size(): " << numbers.size() << endl;
//     // cout << "numbers.capacity(): " << numbers.capacity() << endl;
//     float num1;
//     int num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     cout << num1 << " + " << num2 << " = " << addNums<float, int, int>(num1, num2) << endl;
//     return 0;
// }

// template<class T1, class T2, class T3>
// T3 addNums(T1 n1, T2 n2)
// {
//     return n1 + n2;
// }

// // int addNums(int n1, int n2)
// // {
// //     cout << "int function" << endl;
// //     return n1 + n2;
// // }

// // float addNums(float n1, float n2)
// // {
// //     cout << "float function" << endl;
// //     return n1 + n2;
// // }