#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    private:
    int _side1, _side2;
    public:
    Rectangle(int, int);
    Rectangle operator+(Rectangle&);
    Rectangle operator%(int);
    void printSides();
};

int main(int argc, char* argv[])
{
    Rectangle rect1(2, 3);
    Rectangle rect2(2, 3);

    Rectangle rect3 = rect1 + rect2;
    Rectangle rect4 = rect1%42;

    rect1.printSides();
    rect2.printSides();
    rect3.printSides();
    rect4.printSides();

    return 0;
}

Rectangle Rectangle::operator%(int modNum)
{
    int newSide1 = _side1 * modNum;
    int newSide2 = _side2 * modNum;
    return Rectangle(newSide1, newSide2);
}

void Rectangle::printSides()
{
    cout << "_side1: " << _side1 << " _side2: " << _side2 << endl;
}

Rectangle Rectangle::operator+(Rectangle& otherRect)
{
    int newSide2 = _side2 + otherRect._side2;
    return Rectangle(_side1, newSide2);
}

Rectangle::Rectangle(int side1, int side2)
{
    _side1 = side1;
    _side2 = side2;
}



// class Ned
// {
//     private:
//     string _hobbies;
//     int _age;
//     float _kids;

//     public:
//     Ned();
//     Ned(string, int, float);
//     Ned operator+(Ned&);
//     Ned operator*(Ned&);
//     float get_kids();
//     int get_age();
// };


    // Ned ned1("Video games", 42, 15);
    // Ned ned2("Skiing", 87, 23);
    
    
    // Ned ned3 = ned1 + ned2;

    // cout << "ned3.get_kids(): " 
    //      << ned3.get_kids() << endl;

    // cout << "ned1 * ned2 = " 
    //      << (ned1 * ned2).get_age() << endl;



// int Ned::get_age()
// {
//     return _age;
// }

// Ned Ned::operator*(Ned& otherNed)
// {
//     int newAge = _age * otherNed._age;
//     return Ned(_hobbies, newAge, _kids);
// }

// float Ned::get_kids()
// {
//     return _kids;
// }

// Ned Ned::operator+(Ned& otherNed)
// {
//     float _newKids = abs(_kids - otherNed._kids);

//     Ned newNed(_hobbies, _age, _newKids);
//     return newNed;
// }

// Ned::Ned()
// {
//     _hobbies = "";
//     _age = 0;
//     _kids = 0.0;
// }

// Ned::Ned(string hobbies, int age, float kids)
// {
//     _hobbies = hobbies;
//     _age = age;
//     _kids = kids;
// }