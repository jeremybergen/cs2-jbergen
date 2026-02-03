#include <iostream>

using namespace std;

class Marker
{
    private:
        string _color;
        float _inklevel;
        string _brand;
        bool _cap;
    public:
        //Getter
        string getColor()
        {
            return _color;
        }
        float getInklevel()
        {
            return _inklevel;
        }

        //Setter
        void setColor(string color)
        {
            _color = color;
        }
        void setInklevel(float inklevel)
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

        void toggleCap()
        {
            if(_cap) _cap = false;
            else _cap = true;
        }
};

int main(int argc, char* argv[])
{
    Marker marker1;

    marker1.setColor("Black");
    marker1.setInklevel(.75);

    cout << "marker1: color: " << marker1.getColor() 
         << ", ink level: " << marker1.getInklevel() << endl;

    return 0;
}