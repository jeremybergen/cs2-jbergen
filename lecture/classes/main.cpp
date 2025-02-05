#include <iostream>
#include <string>

using namespace std;

class Pen
{
    private:
        string _color;
        float _capacity;
        bool _cap;
        int* testInt = new int;
    
    public:
        //Default Constructor
        Pen(string = "", float = 0.0, bool = false);
        // Pen();
        // Pen(string, float, bool);
        ~Pen();
        //setters
        void setColor(string);
        void setCapacity(float);
        void setCapState(bool);

        //getters
        string getColor();
        float getCapacity();
        bool getCapState();
};

void testFunc();

int main(int argc, char* argv[])
{
    Pen* marker1 = new Pen;
    Pen marker2;
    Pen* marker3 = new Pen("Red", .5);

    // int* heapNum = new int(42);
    // cout << "*heapNum: " << *heapNum << endl;

    // string fName = "Jeremy";

    // marker1._color = "Black";
    testFunc();
    marker1->setColor("Black");
    marker1->setCapacity(.95);
    (*marker1).setCapState(true);
    std::cout << "Marker color: " << marker1->getColor() << endl;
    cout << "Marker Capacity: " << (marker1->getCapacity()*100) << "%" << endl;

    cout << "Marker3 color: " << marker3->getColor() << endl;
    cout << "Marker3 Capacity: " << (marker3->getCapacity()*100) << "%" << endl;
    // marker1._capacity = .95;
    // marker1._cap = true;
    delete marker1;
    delete marker3;
    return 0;
}

void testFunc()
{
    Pen* tempPen = new Pen();

    //other code for stuff...

    delete tempPen;
}

Pen::~Pen()
{
    cout << "Calling Destructor" << endl;
    delete testInt;
}

Pen::Pen(string color, float capacity, bool cap)
{
    _color = color;
    _capacity = capacity;
    _cap = cap;
}

// Pen::Pen()
// {
//     cout << "Pen Constructor" << endl;
//     _color = "";
//     _capacity = 0.0;
//     _cap = true;
// }

// Pen::Pen(string color, float capacity, bool cap)
// {
//     _color = color;
//     _capacity = capacity;
//     _cap = cap;
// }

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