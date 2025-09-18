#include <iostream>

using namespace std;

/// @brief Waterbottle class to demonstrate this keyword
class Waterbottle
{
    private:
        int _capacity;
        string _color;
    
    public:
        Waterbottle(int capacity)
        {
            // demonstrating that this is a pointer to the instance of the class
            cout << "&capacity: " << &capacity << endl;
            cout << "&(this->capacity)" << &(this->_capacity) << endl;
            _capacity = capacity;
        }
        void print()
        {
            cout << "_capacity: " << _capacity
                 << ", _color: " << _color
                 << endl;
        }

        // setters (or other functions) return a reference to Waterbottle to
        // enable function chaining (wb1->setCapacity(100)->setColor("Red"))
        Waterbottle& setCapacity(int capacity)
        {
            _capacity = capacity;
            return *this;
        }
        Waterbottle& setColor(string color)
        {
            this->_color = color;
            return *this;
        }
};

int main(int argc, char* argv[])
{
    Waterbottle wb1(50);
    // Waterbottle wb2(100);
    // cout << &wb1 << endl;
    // wb1.print();

    // cout << &wb2 << endl;
    // wb2.print();
    wb1.print();
    wb1.setCapacity(100).setColor("Red");
    wb1.print();

    return 0;
}