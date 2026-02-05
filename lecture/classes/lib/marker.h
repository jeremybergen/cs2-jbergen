#pragma once
#include <string>
#include <iostream>

using namespace std;

class Marker
{
    private:
        string _color;
        float _inklevel;
        string _brand;
        bool _cap;
        int* _ptr1;
    public:
        // Marker();
        // Marker(string color, float inklevel, string brand, bool cap);
        Marker(string color = "Black", float inklevel = 1.0, string brand = "Expo", bool cap = true);
        ~Marker();
        //Getter
        string getColor();
        float getInklevel();
        string getBrand();

        //Setter
        void setColor(string color);
        void setInklevel(float inklevel);

        void toggleCap();
};

Marker::~Marker()
{
    cout << "Deleting: " << _ptr1 << endl;
    delete _ptr1;
    cout << "Calling destructor" << endl;
}

Marker::Marker(string color, float inklevel, string brand, bool cap)
{
    _color = color;
    _inklevel = inklevel;
    _brand = brand;
    _cap = cap;
    _ptr1 = new int;
    // _color = "Black";
    // _inklevel = 1.0;
    // _cap = true;
    // _brand = "Expo";
}

string Marker::getBrand()
{
    return _brand;
}

string Marker::getColor()
{
    return _color;
}
float Marker::getInklevel()
{
    return _inklevel;
}

//Setter
void Marker::setColor(string color)
{
    _color = color;
}
void Marker::setInklevel(float inklevel)
{
    // _inklevel = inklevel;
    if(inklevel < 0 || inklevel > 1)
    {
        cerr << "inklevel must be between 0 and 1" << endl;
    }
    else
    {
        _inklevel = inklevel;
    }
}

void Marker::toggleCap()
{
    if(_cap) _cap = false;
    else _cap = true;
}