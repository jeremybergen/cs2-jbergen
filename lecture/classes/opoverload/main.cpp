#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
    private:
    float _side1, _side2;
    float _area;

    public:
    Rectangle(float side1, float side2)
    {
        _side1 = side1;
        _side2 = side2;
        _area = _side1 * _side2;
    }
    float getSide1()
    {
        return _side1;
    }
    float getSide2()
    {
        return _side2;
    }
    float getArea()
    {
        return _area;
    }

    Rectangle operator+(const Rectangle& r1)
    {
        // float newArea;
        // float newSide1, newSide2;
        // newArea = this->_area + r1._area;
        // // newSide1 = newArea / 2;
        // // newSide2 = newArea / 2;
        // newSide1 = sqrt(newArea);
        // newSide2 = sqrt(newArea);
        float newSide1;
        float newSide2;

        newSide1 = this->_side1 + r1._side1;
        newSide2 = this->_side2 + r1._side2;

        Rectangle retRect(newSide1, newSide2);
        return retRect;
    }
    Rectangle operator*(const Rectangle& r1)
    {
        return Rectangle(this->_side1 * r1._side1, this->_side2 * r1._side2);
    }
    Rectangle operator/(const Rectangle& r1);

    bool operator==(const Rectangle& r1)
    {
        if(this->_area == r1._area) return true;
        return false;
    }

    bool operator!=(const Rectangle& r1)
    {
        return !(*this == r1);
    }

    friend ostream& operator<<(ostream& os, const Rectangle& r1)
    {
        os << r1._side1 << " and " << r1._side2 << " has an area of " << r1._area << endl;
        return os;
    }
};

int main(int argc, char* argv[])
{
    Rectangle rect1(3, 4);
    Rectangle rect2(4, 3);

    // cout << boolalpha << (rect1 == rect2) << endl;
    cout << rect1;
    // Rectangle rect1(4, 5);
    // Rectangle rect2(3, 4);

    // Rectangle rect3 = rect1 * rect2;
    // Rectangle rect4 = rect1 + rect2 * rect3;
    // cout << "rect4: " 
    //      << rect4.getSide1() << " x " << rect4.getSide2()
    //      << " has an area of: " << rect4.getArea() << endl;

    // cout << "rect1: " 
    //      << rect1.getSide1() << " x " << rect1.getSide2()
    //      << " has an area of: " << rect1.getArea() << endl;
    // int num1;
    // bool positive;
    // cout << "enter a number: ";
    // cin >> num1;

    // // (num1 > 0) ? cout << "num1 is positive" << endl : cout << "num1 is negative" << endl;
    // positive = (num1 > 0) ? true : false;

    // if(num1 > 0)
    // {
    //     // cout << "num1 is positive" << endl;
    //     positive = true;
    // }
    // else
    // {
    //     // cout << "num1 is negative" << endl;
    //     positive = false;
    // }

    // cout << boolalpha << positive << endl;
    return 0;
}