#include <iostream>

using namespace std;

class CEO
{
    private:
    string _name;
    int _salary;
    // friend class BoardOfDirectors;
    friend int getSalary(CEO* ceo);

    public:
    CEO(string = "", int = 0);
};

class BoardOfDirectors
{
    public:
    void getCEOSalary(CEO* ceo)
    {
        cout << "The salary of the CEO is: " << getSalary(ceo) << endl;
    }
    friend int getSalary(CEO* ceo) { return ceo->_salary; }
};

int main(int argc, char* argv[])
{
    CEO c1("Bob", 42);
    BoardOfDirectors b1;

    b1.getCEOSalary(&c1);
    return 0;
}

CEO::CEO(string name, int salary)
{
    _name = name;
    _salary = salary;
}
