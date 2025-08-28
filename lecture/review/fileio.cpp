#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;
    // int number;
    string inLine;
    string fileName;

    do
    {
        cout << "Enter the name of the file: ";
        getline(cin, fileName);

        fin.open(fileName);
    } while (!fin.is_open());

    // if(!fin.is_open())
    // {
    //     cerr << "Invalid filename" << endl;
    //     return 0;
    // } 
    // else
    // {
    while(getline(fin, inLine))
    {
        cout << inLine << endl;
        if(inLine.length() != 10) 
        {
            cerr << "Invalid Line";
            break;
        }
        for(size_t i = 0; i < inLine.length(); i++)
        {
            cout << inLine[i] << ", ";
        }
        cout << endl;
    }

    cout << "Press Enter to quit";
    // cin.ignore(1000, '\n');

    cin.get();
    // }

    // fin >> number;

    // cout << number << endl;

    fin.close();
    return 0;
}