#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;
    string filename;
    string inputLine;

    cout << "Enter a file name: ";
    // cin >> filename;
    getline(cin, filename);
    // cin.clear();
    // cin.ignore(1000, '\n');
    // cin.get();

    fin.open(filename);

    while(getline(fin, inputLine))
    {
        cout << "inputLine: " << inputLine << endl;
    }

    // bool keepRunning = true;
    // while(keepRunning)
    // {
    cout << "Running" << endl;
    cout << "Press Enter/Return to continue";
    cin.get();
    // }

    fin.close();
    return 0;
}