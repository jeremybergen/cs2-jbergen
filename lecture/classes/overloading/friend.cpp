#include <iostream>

using namespace std;

class BoardOfDirectors;
/// @brief CEO Class has a friend of class BoardOfDirectors
class CEO
{
    private:
        string _name;
        int _netWorth;
        friend class BoardOfDirectors;
        
    public:
        CEO(string = "", int = 0);
        
};

/// @brief friend of CEO
class BoardOfDirectors
{
    public:
        void getCEONetWorth(CEO* ceo1)
        {
            cout << "ceo1: " << ceo1->_netWorth << endl;
        }
};

int main(int argc, char* argv[])
{
    CEO c1("Bob", 100);
    BoardOfDirectors bod1;

    // getCEONetWorth needs reference to CEO
    bod1.getCEONetWorth(&c1);
    return 0;
}

CEO::CEO(string name, int netWorth)
{
    _name = name;
    _netWorth = netWorth;
}