#include <iostream>

using namespace std;

// class MyClass;
// class MyClass2;

// class MyClass2
// {
//     private:
//     int _number;

//     public:
//     MyClass2(int number = 0)
//     {
//         _number = number;
//     }
// };

// class MyClass
// {
//     private:
//     int _num1;
//     string _name;

//     public:
//     MyClass()
//     {
//         _num1 = 100;
//         _name = "Jedi";
//     }
// };

void hello();
void goodbye();

int main(int argc, char* argv[])
{
    int num1 = 0;

    
    while(true)
    {
        cout << "Enter a number: ";
        cin >> num1;
        if(!(num1 > 0 && num1 < 50))
        {
            cout << "Invalid number" << endl;
        }
        cin.clear();
    }
    // string name;

    //do stuff

    
    //prompt for a string
    // MyClass mc1;
    // MyClass mc2(42);
    return 0;
}

void hello()
{
    cout << "Hello" << endl;
    goodbye();
}

void goodbye()
{
    cout << "Goodbye" << endl;
    hello();
}