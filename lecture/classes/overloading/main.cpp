#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int _side1, _side2;

    public:
        /// @brief Parameterized/Default Constructor
        /// @param  int side 1
        /// @param  int side 2
        Rectangle(int = 0, int = 0);

        Rectangle operator+(const Rectangle&);
        void print()
        {
            cout << "side1: " << _side1 << ", side2: " << _side2 << endl;
        }
};

int main(int argc, char* argv[])
{
    Rectangle r1(2, 3);
    Rectangle r2(3, 4);

    Rectangle r3 = r1 + r2;

    r1.print();
    r2.print();
    r3.print();
    return 0;
}

Rectangle::Rectangle(int side1, int side2)
{
    _side1 = side1;
    _side2 = side2;
}

Rectangle Rectangle::operator+(const Rectangle& rhs)
{
    Rectangle r1(_side1 + rhs._side1, _side2 + rhs._side2);
    return r1;
}