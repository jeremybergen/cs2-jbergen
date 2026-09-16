#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int _side1;
    int _side2;

    public:
    Rectangle(int side1 = 0, int side2 = 0)
    {
        _side1 = side1;
        _side2 = side2;
    }

    void printVals()
    {
        cout << "Rectangle with sides: " << _side1 << " and " << _side2 << endl;
    }

    Rectangle operator+(const Rectangle rhs)
    {
        int newSide1;
        int newSide2;

        newSide1 = _side1 + rhs._side1;
        newSide2 = _side2 + rhs._side2;

        Rectangle toReturn(newSide1, newSide2);
        return toReturn;
    }

    bool operator==(const Rectangle otherRectangle)
    {
        return (_side1 == otherRectangle._side1 && _side2 == otherRectangle._side2);
    }

    bool operator!=(const Rectangle rhs)
    {
        return !(*this == rhs);
    }

    friend ostream& operator<<(ostream& os, const Rectangle r1)
    {
        os << "This is operator<<: side1: " << r1._side1 << " and side2: " << r1._side2;
        return os;
    }
};

int main(int argc, char* argv[])
{
    Rectangle r1(42, 15);
    Rectangle r2(12, 13);

    // r1.printVals();
    // r2.printVals();
    cout << "Some string" << r1 << endl;
    cout << r2 << endl;

    Rectangle r3;

    r3 = r1 + r2;
    r3.printVals();

    // Rectangle r4(1, 2);

    // r4 += r1;
    return 0;
}