#include <iostream>

using namespace std;

// class Rectangle
// {
//     private:
//     int _side1, _side2;

//     public:
//     Rectangle(int, int);
//     int get_side1();
//     int get_side2();
//     // friend int calcArea(const Rectangle&);
// };

// int calcArea(Rectangle&);

class Aclass;
class Bclass;

class Aclass
{
    private:
    int _number1;

    public:
    void setNumber1(int);
    friend void max(Aclass&, Bclass&);
    friend class Bclass;
};

class Bclass
{
    private:
    int _number1;
    
    public:
    void getAclassNumber1(Aclass&);
    void setNumber1(int);
    friend void max(Aclass&, Bclass&);
};

void max(Aclass&, Bclass&);

int main(int argc, char* argv[])
{
    Aclass a1;
    Bclass b1;

    a1.setNumber1(42);
    b1.setNumber1(15);

    max(a1, b1);
    b1.getAclassNumber1(a1);

    // Rectangle rect1(42, 15);

    // cout << "The rectangle has an area of: " 
    //      << calcArea(rect1) << endl;

    return 0;
}

void Bclass::getAclassNumber1(Aclass& a1)
{
    cout << "a1._number1: " << a1._number1 << endl;
}

void max(Aclass& a1, Bclass& b1)
{
    if(a1._number1 > b1._number1)
    {
        cout << "a1 > b1" << endl;
    }
    else if(a1._number1 < b1._number1)
    {
        cout << "b1 > a1" << endl;
    }
    else 
    {
        cout << "a1 == b1" << endl;
    }
}

void Aclass::setNumber1(int number1)
{
    _number1 = number1;
}

void Bclass::setNumber1(int number1)
{
    _number1 = number1;
}

// int Rectangle::get_side1()
// {
//     return _side1;
// }
// int Rectangle::get_side2()
// {
//     return _side2;
// }

// int calcArea(Rectangle& r1)
// {
//     int area;
//     area = r1.get_side1() * r1.get_side2();
//     return area;
// }

// Rectangle::Rectangle(int side1, int side2)
// {
//     _side1 = side1;
//     _side2 = side2;
// }