#pragma once
#include <iostream>

using namespace std;

template<class T1>
class Rectangle
{
    private: 
    T1 _side1 = 0;
    T1 _side2 = 0;
    T1* _side3 = new T1;

    public:
    //Constructor
    // Rectangle();
    Rectangle(T1 = 0, T1 = 0);

    //Destructor
    ~Rectangle(void);
    
    //Setters
    void setSide1(T1);
    void setSide2(T1);

    //Getters
    T1 getSide1();
    T1 getSide2();
};


//Constructor
// Rectangle::Rectangle()
// {
//     std::cout << "Calling rectangle default constructor" << std::endl;
//     _side1 = 0;
//     _side2 = 0;
// }
template<class T1>
Rectangle<T1>::Rectangle(T1 side1, T1 side2)
{
    std::cout << "Calling rectangle parameterized constructor" << std::endl;
    _side1 = side1;
    _side2 = side2;
}

//Destructor
template<class T1>
Rectangle<T1>::~Rectangle(void)
{
    std::cout << "Destroyed class" << std::endl;
    delete _side3;
}

//setters
template<class T1>
void Rectangle<T1>::setSide1(T1 side1)
{
    _side1 = side1;
}
template<class T1>
void Rectangle<T1>::setSide2(T1 s2)
{
    _side2 = s2;
}
//getters
template<class T1>
T1 Rectangle<T1>::getSide1()
{
    return _side1;
}
template<class T1>
T1 Rectangle<T1>::getSide2()
{
    return _side2;
}