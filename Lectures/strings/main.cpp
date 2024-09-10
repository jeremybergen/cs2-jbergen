#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

void readFile(ifstream&, vector<string>&);
void splitLines(istringstream&);

int main(int argc, char* argv[])
{
    ifstream fin;
    vector<string> fileLines;

    fin.open("input.csv");

    readFile(fin, fileLines);

    for(auto line : fileLines)
    {
        istringstream iss;
        iss.str(line);
        splitLines(iss);
    }

    // for(size_t i = 0; i < fileLines.size(); i++)
    // {
    //     cout << fileLines.at(i) << endl;
    //     cout << fileLines[i] << endl;
        
    // }

    // if(fin.is_open())
    // {
    //     string inputLine;
    //     while(getline(fin, inputLine))
    //     {
    //         // cout << inputLine << endl;
    //         istringstream iss;
    //         string token;
    //         iss.str(inputLine);

    //         while(getline(iss, token, ','))
    //         {
    //             cout << token << "-";
    //         }
    //         cout << endl;
    //     }
    // }

    fin.close();
    return 0;
}

void splitLines(istringstream& iss)
{
    string token;
    while(getline(iss, token, ','))
    {
        cout << token << endl;
    }
}

void readFile(ifstream& fin, vector<string>& inputLines)
{
    string tmpLine;
    while(getline(fin, tmpLine))
    {
        inputLines.push_back(tmpLine);
    }
}