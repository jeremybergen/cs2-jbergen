#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;
    // ofstream fout;
    string inLine;
    string filename;
    int rowCounter = 0;
    char dnaGrid[3][5];

    string fullname;
    string fName, lName;
    cout << "Enter your full name: ";
    getline(cin, fullname);
    // cin >> fName >> lName;

    cout << "Hello " << fullname << endl;
    // cout << "Hello " << fName << " " << lName << endl;
    // cin >> fullname;
    // getline(cin, fullname);

    // Jeremy                  Bergen
    // cin >> fName >> lName;


    // cout << "Enter the file to load: ";
    // cin >> filename;
    // getline(cin, filename);
    // fin.open(filename);
    // // fout.open("output.txt");

    // // for(initializer;conditional;updater)
    // // int i = 0;
    // // for( ; ; )
    // // {
    // //     cout << "i: " << i << endl;
    // //     if(i == 10)
    // //     {
    // //         break;
    // //     }
    // //     i++;
    // // }

    // // while(!fin.eof())
    // // while(fin >> inLine)
    // while(getline(fin, inLine))
    // {
    //     // fin >> inLine;
    //     // cout << "DEBUG: " << inLine << endl;
    //     for(size_t i = 0; i < inLine.length(); i++)
    //     {
    //         dnaGrid[rowCounter][i] = inLine.at(i);
    //     }
    //     rowCounter++;
    // }

    // for(int i = 0; i < rowCounter; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //     {
    //         cout << dnaGrid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // // cout << "What do you want to say? ";
    // // while(cin >> inLine)
    // // {
    // //     if(inLine == "quit")
    // //     {
    // //         break;
    // //     }
    // //     cout << "Read in: " << inLine << endl;
    // //     cout << "What do you want to say? ";
        
    // // }
    
    // // fin >> inLine;
    // // cout << "DEBUG: " << inLine << endl;
    // // fin >> inLine;
    // // cout << "DEBUG: " << inLine << endl;

    fin.close();
    // fout.close();
    return 0;
}