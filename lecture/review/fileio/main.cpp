#include <iostream>
#include <fstream>

using namespace std;

// namespace n1
// {
//     void addNums(int, int);
// }

// namespace j1
// {
//     void addNums(int, int);

// }

int main(int argc, char* argv[])
{
    string inputLine;
    ifstream fin;

    fin.open("test.csv");

    // getline(fin, inputLine);
    // while(getline(fin, inputLine))
    // while(fin >> inputLine)
    while(getline(fin, inputLine))
    {
        cout << "DEBUG: " << inputLine << endl;
        // for(int i = 0; i < inputLine.size(); i++)
        // {

        // }
    }

    fin.close();
    // std::cout << "Hello World" << std::endl;
    // addNums(42, 15);
    return 0;
}

// namespace n1
// {
//     void addNums(int n1, int n2)
//     {
//         cout << "Other addNums function" << endl;
//     }
// }


// void j1::addNums(int n1, int n2)
// {
//     cout << n1 + n2 << endl;
// }