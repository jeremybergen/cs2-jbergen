#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
    private:
    int _numTires;
    string _fuel;

    public:
    Vehicle(int = 4, string = "gas");
    int getNumTires();
    string getFuel();
};

class Car : public Vehicle
{
    private:
    int _capacity;
    string _color;

    public:
    Car(int, string);
    int getCapacity();
    string getColor();
};

class Boat : public Vehicle
{
    private:
    bool _sail;
    string _motorType;

    public:
    Boat();
    bool getSail();
    string getMotorType();
};

int main(int argc, char* argv[])
{
    // Vehicle veh1(4, "gas");

    // cout << "veh1.getNumTires(): " << veh1.getNumTires() << endl;
    Car myCar(5, "red");

    cout << "myCar.getCapacity(): " << myCar.getCapacity() << endl;
    cout << "myCar.getFuel(): " << myCar.getFuel() << endl;

    return 0;
}

Car::Car(int capacity, string color)
{
    _capacity = capacity;
    _color = color;
}
int Car::getCapacity()
{
    return _capacity;
}
string Car::getColor()
{
    return _color;
}

Vehicle::Vehicle(int numTires, string fuel)
{
    _numTires = numTires;
    _fuel = fuel;
}
int Vehicle::getNumTires()
{
    return _numTires;
}
string Vehicle::getFuel()
{
    return _fuel;
}