#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

class MyException
{
    public:
    string message;
    MyException(string msg) : message(msg) {}
    // MyException(string msg)
    // {
    //     message = msg;
    // }
};

int someFun(int n)
{
    if(n%5 != 0)
    {
        throw -1;
    }
    return n * 10;
}

int main(int argc, char* argv[])
{
    vector<int> myVector(10);

    try
    {
        throw out_of_range("Out of range error");
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    // try
    // {
    //     throw MyException("Default message");
    // }
    // catch(MyException error)
    // {
    //     std::cerr << error.message << '\n';
    // }
    
    // try
    // {
    //     myVector.at(11);
    // }
    // catch(const std::out_of_range& oor)
    // {
    //     cout << "Caught out of range" << endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // int num1 = 42;
    // try
    // {
    //     // cout << someFun(40) << endl;
    //     try
    //     {
    //         /* code */
    //         throw -1;
    //     }
    //     // catch(const std::exception& e)
    //     catch(int e)
    //     {
    //         // std::cerr << e.what() << '\n';
    //         cerr << "Caught: " << e << endl;
    //         // throw "42";
    //         throw 42;
    //     }
        
        
    // }
    // catch(int e)
    // {
    //     // std::cerr << e.what() << '\n';
    //     cout << "Exception caught: " << e << endl;
    // }
    // catch(...)
    // {
    //     cerr << "Default exception" << endl;
    // }
    
    return 0;
}

// // out_of_range example
// #include <iostream>       // std::cerr
// #include <stdexcept>      // std::out_of_range
// #include <vector>         // std::vector

// using namespace std;

// int main (void) {
//   std::vector<int> myvector(10);
//   try
//   {
//     myvector.at(20)=100;      // vector::at throws an out-of-range
//   }
//   catch (const std::out_of_range& oor)
//   {
//     std::cerr << "Out of Range error: " << oor.what() << '\n';
//   }
//   cout << "After try/catch" << endl;
//   return 0;
// }