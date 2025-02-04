#include <iostream>
#include <string>

using namespace std;

class Pen
{
    private:
        string _color;
        float _capacity;
        bool _cap;
    
    public:
        //Default Constructor
        Pen();
        //setters
        void setColor(string);
        void setCapacity(float);
        void setCapState(bool);

        //getters
        string getColor();
        float getCapacity();
        bool getCapState();
};

int main(int argc, char* argv[])
{
    Pen* marker1 = new Pen;
    Pen marker2;
    // Pen* marker3 = new Pen("Red", .5, false);

    // int* heapNum = new int(42);
    // cout << "*heapNum: " << *heapNum << endl;

    // string fName = "Jeremy";

    // marker1._color = "Black";
    marker1->setColor("Black");
    marker1->setCapacity(.95);
    (*marker1).setCapState(true);
    std::cout << "Marker color: " << marker1->getColor() << endl;
    cout << "Marker Capacity: " << (marker1->getCapacity()*100) << "%" << endl;
    // marker1._capacity = .95;
    // marker1._cap = true;
    delete marker1;
    return 0;
}

Pen::Pen()
{
    cout << "Pen Constructor" << endl;
    _color = "";
    _capacity = 0.0;
    _cap = true;
}

void Pen::setColor(string color)
{
    if(color == "White")
    {
        cout << "Invalid marker color" << endl;
    }
    else
    {
        _color = color;
    }
    
}
string Pen::getColor()
{
    return _color;
}

void Pen::setCapacity(float capacity)
{
    _capacity = capacity;
}
void Pen::setCapState(bool cap)
{
    _cap = cap;
}

float Pen::getCapacity()
{
    return _capacity;
}
bool Pen::getCapState()
{
    return _cap;
}