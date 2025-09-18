#include <iostream>

using namespace std;

// namespace shapes
// {
class Rectangle
{
    private:
        int _side1, _side2;

    public:
        /// @brief Parameterized/Default Constructor
        /// @param  int side 1
        /// @param  int side 2
        Rectangle(int = 0, int = 0);

        void setSide1(int s1) { _side1 = s1; }
        void setSide2(int s2) { _side2 = s2; }

        Rectangle operator+(const Rectangle&);
        void print()
        {
            cout << "side1: " << _side1 << ", side2: " << _side2 << endl;
        }

        Rectangle operator*(const Rectangle& rhs)
        {
            // Rectangle newRectangle(_side1 * rhs._side1, _side2 * rhs._side2);
            Rectangle newRectangle;
            newRectangle.setSide1(_side1 * rhs._side1);
            newRectangle.setSide2(_side2 * rhs._side2);
            return newRectangle;
        }

        friend ostream& operator<<(ostream&, const Rectangle&);

};

// Friend method for class
// class Aclass
// {
//     private:
//         int _num1 = 42;

//     public:
//         friend void printNum1(Aclass);
// };

// void printNum1(Aclass a) { cout << a._num1; }

// };

class B;

class A
{
    private:
        int _num1;

    public:
        A() { _num1 = 42; }
        // friend int addData(A, B);
        friend class B;
};

class B : public A
{
    private:
        int _bnum1;
    
    public:
        B() { _bnum1 = 42; }
        int addData(A a, B b) { return a._num1 + b._bnum1; }
};

int main(int argc, char* argv[])
{
    Rectangle r1(2, 3);
    Rectangle r2(3, 4);

    Rectangle r3 = r1 + r2;
    Rectangle r4 = r1 * r2;

    // Aclass something1;
    // printNum1(something1);

    // r1.print();
    // r2.print();
    // r3.print();
    // r4.print();

    // cout << r1 << endl;
    cout << r1 << endl;

    A a1;
    B b1;

    cout << b1.addData(a1, b1) << endl;
    return 0;
}

ostream& operator<<(ostream& os, const Rectangle& r1)
{
    os << "operator<<: side1: " << r1._side1 << ", side2: " << r1._side2;
    return os;
}

Rectangle::Rectangle(int side1, int side2)
{
    _side1 = side1;
    _side2 = side2;
}

Rectangle Rectangle::operator+(const Rectangle& rhs)
{
    Rectangle r1(this->_side1 + rhs._side1, this->_side2 + rhs._side2);
    return r1;
}
