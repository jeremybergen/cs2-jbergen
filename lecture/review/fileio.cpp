#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;
    string inputLine;
    fin.open("input.txt", ios_base::in);

    while(getline(fin, inputLine))
    {
        cout << "DEBUG: inputLine: " << inputLine << endl;
        istringstream iss;
        iss.str(inputLine);
        string token;
        int column = 0;
        while(getline(iss, token, ','))
        {
            cout << "DEBUG: token: " << token << endl;
            if(column == 0) cout << "first name" << endl;
            if(column == 1) cout << "last name" << endl;
            column++;
        }
    }

    fin.close();

    // int numbers[10];
    // ifstream fin;
    // ofstream fout;
    // fin.open("input.txt", ios_base::in);
    // fout.open("output.txt", ios_base::out);

    // int token;
    // int counter = 0;
    // while(fin >> token)
    // {
    //     cout << "DEBUG: token: " << token << endl;
    //     numbers[counter] = token;
    //     counter++;
    // }

    // for(int i = 0; i < counter; i++)
    // {
    //     fout << "numbers[" << i << "]: " << numbers[i] << endl;
    // }

    // fin.close();
    // fout.close();
    return 0;
}