#include <iostream>

using namespace std;

class CEO
{
    private:
    string _name;
    int _networth;
    // friend class BoardOfDirectors;
    

    public:
    CEO(string = "", int = 0);
    friend void printName(CEO);
};

class BoardOfDirectors
{
    public:
    friend void printName(CEO);
    // void getCEONetWorth(CEO* ceo1)
    // {
    //     cout << "ceo1: " << ceo1->_networth << endl;
    // }
};



int main(int argc, char* argv[])
{
    CEO c1("Bob", 100);

    BoardOfDirectors b1;
    printName(c1);
    cout << endl;
    // b1.getCEONetWorth(&c1);
    return 0;
}

void printName(CEO ceo1)
{
    cout << ceo1._name;
}

CEO::CEO(string name, int networth)
{
    _name = name;
    _networth = networth;
}

// void BoardOfDirectors::printName(CEO ceo1)
// {
//     printName(ceo1);
// }
