#include <iostream>
#include <fstream>

using namespace std;

class Banana
{
    private:
        int _length;
        int _weight;

    public:
        Banana(int length) { _length = length;
                             _weight = 10; }
        int getLength() { return _length; }
        int getWeight() { return _weight; }

        Banana operator+(const Banana& rhs)
        {
            Banana toReturn(_length + rhs._length);
            toReturn._weight = _weight * rhs._weight;
            return toReturn;
        }
        Banana operator-(const Banana& rhs)
        {
            // Can't do this because rhs is a constant
            // rhs._length = 42;
            return Banana(_length - rhs._length);
        }
        bool operator==(const Banana& rhs)
        {
            return (_length == rhs._length && _weight == rhs._weight);
        }
        bool operator!=(const Banana& rhs)
        {
            return !(*this == rhs);
        }
        friend ostream& operator<<(ostream& os, const Banana& b1)
        {
            os << "Banana of length: " << b1._length << endl
               << "and weight: " << b1._weight << endl;
            return os;
        }
};

void doSomething(ifstream&);
ifstream& openStream(ifstream&, string);

int main(int argc, char* argv[])
{
    ifstream fin;
    openStream(fin, "Somefile.txt");
    // ifstream fin;
    // fin.open("something");


    string str1 = "Jeremy";
    str1 = str1 + "Bergen";

    Banana b1(10);
    Banana b2(5);

    cout << b1;
    // b1 << cout;

    // Banana b3(b1.getLength() + b2.getLength());

    // Banana b4(0);
    // b4 = b1 + b2;

    // cout << "Banana 4: " << b4.getLength() << endl;
    // cout << "Banana 4: " << b4.getWeight() << endl;

    return 0;
}

ifstream& openStream(ifstream& fin, string fileName)
{
    // ifstream fin;
    fin.open(fileName);

    return fin;
}

void doSomething(ifstream& fin)
{
    string token;
    while(fin >> token)
    {
        //do stuff
    }
}