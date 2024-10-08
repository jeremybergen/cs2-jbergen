#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    string token;
    string inputLine = "";
    getline(cin, inputLine);
    
    istringstream iss;
    iss.str(inputLine);

    getline(iss, token, ' ');
    iss >> token;


    // while(cin >> token)
    // {
    //     inputLine += token;
    // }

    // cout << "Enter a line: ";
    // // getline(cin, inputLine, '\n');
    // cin >> inputLine;

    // cout << "Enter another line: ";
    // // cin.ignore(1000, '\n');
    // getline(cin.ignore(), inputLine);

    return 0;
}