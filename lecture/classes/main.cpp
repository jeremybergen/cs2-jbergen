#include <iostream>
#include <string>

using namespace std;

class Pen
{
    public:
        string _color;
        float _capacity;
        bool _cap;
    
    public:
        void setColor(string color)
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
        string getColor()
        {
            return _color;
        }

};

int main(int argc, char* argv[])
{
    Pen marker1;

    // string fName = "Jeremy";

    // marker1._color = "Black";
    marker1.setColor("White");
    cout << "Marker color: " << marker1.getColor() << endl;
    // marker1._capacity = .95;
    // marker1._cap = true;
    return 0;
}