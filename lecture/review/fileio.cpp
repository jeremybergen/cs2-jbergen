#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin;
    int number;

    fin.open("input.txt");

    while(fin >> number)
    {
        cout << number << endl;
    }
    // fin >> number;

    // cout << number << endl;

    fin.close();
    return 0;
}