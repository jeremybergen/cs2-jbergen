#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;

    fin.open("input.csv");

    if(fin.is_open())
    {
        string inputLine;
        while(getline(fin, inputLine))
        {
            // cout << inputLine << endl;
            istringstream iss;
            string token;
            iss.str(inputLine);

            while(getline(iss, token, ','))
            {
                cout << token << "-";
            }
            cout << endl;
        }
    }

    fin.close();
    return 0;
}