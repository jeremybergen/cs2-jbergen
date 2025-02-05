#include <iostream>

using namespace std;

struct Engine
{
    int _numRoundThings;
    float _volume;
};

//Base class
class Vehicle
{
    private:
        string _fuelType;
        Engine _engType;
    public:
        // Default Constructor
        Vehicle();

        // Getters
        string getFuelType();
        Engine getEngType();
        // Setters
        void setFuelType(string);
        void setEngType(int, float);
};

class Truck : public Vehicle
{
    private:
        int _numTires;
    public:
        // Default Constructor
        Truck();

        // Getters
        int getNumTires();

        // Setters
        void setNumTires(int);
};

int main(int argc, char* argv[])
{
    Truck myTruck;

    myTruck.setNumTires(4);
    myTruck.setFuelType("Hybrid");
    myTruck.setEngType(6, 5.6);

    cout << "My Truck has : " << myTruck.getNumTires() << " tires." << endl;
    cout << myTruck.getFuelType() << " Type of fuel" << endl;

    return 0;
}

Truck::Truck()
{
    _numTires = 0;
}

// Getters
int Truck::getNumTires()
{
    return _numTires;
}

// Setters
void Truck::setNumTires(int numTires)
{
    _numTires = numTires;
}

Vehicle::Vehicle()
{
    _fuelType = "";
    _engType._numRoundThings = 0;
    _engType._volume = 0.0;
}

// Getters
string Vehicle::getFuelType()
{
    return _fuelType;
}
Engine Vehicle::getEngType()
{
    return _engType;
}
// Setters
void Vehicle::setFuelType(string fuelType)
{
    _fuelType = fuelType;
}
void Vehicle::setEngType(int numRoundThings, float volume)
{
    _engType._numRoundThings = numRoundThings;
    _engType._volume = volume;
}