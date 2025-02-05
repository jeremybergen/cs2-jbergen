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
        Vehicle(string = "", int = 0, float = 0.0);

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
        Truck(int = 0, string = "", int = 0, float = 0.0);

        // Getters
        int getNumTires();

        // Setters
        void setNumTires(int);
};

class TowTruck : public Truck
{
    private:
        bool _winch;

    public:
        // Constructor
        TowTruck(bool = false, int = 0, string = "", int = 0, float = 0.0);
        // Setters
        void setWinch(bool);

        // Getters
        bool getWinch();
};

class Unicycle : public Truck
{
    public:
        Unicycle();
};

class Boat : public Vehicle
{
    private:
        const int _numTires = 0;
};

int main(int argc, char* argv[])
{
    // Truck myTruck;

    // myTruck.setNumTires(4);
    // myTruck.setFuelType("Hybrid");
    // myTruck.setEngType(6, 5.6);

    // cout << "My Truck has : " << myTruck.getNumTires() << " tires." << endl;
    // cout << myTruck.getFuelType() << " Type of fuel" << endl;

    // TowTruck myTowTruck(true, 10, "Jet Fuel", 20, 8);
    Unicycle myTowTruck;

    // myTowTruck.setWinch(true);
    // myTowTruck.setNumTires(6);
    // myTowTruck.setEngType(8, 6);
    // myTowTruck.setFuelType("diesel");

    // cout << boolalpha << "myTowTruck: " << myTowTruck.getWinch() << endl;
    cout << "myTowTruck: " << myTowTruck.getNumTires() << endl;
    cout << "myTowTruck: " << myTowTruck.getFuelType() << endl;
    cout << "myTowTruck: " << myTowTruck.getEngType()._numRoundThings << endl;
    cout << "myTowTruck: " << myTowTruck.getEngType()._volume << endl;

    return 0;
}

Unicycle::Unicycle() : Truck(1, "Legs", 0, 0)
{

}

TowTruck::TowTruck(bool winch, int numTires, string fuelType, int numRoundThings, float volume) : Truck(numTires, fuelType, numRoundThings, volume)
{
    _winch = winch;
    
}

// Setters
void TowTruck::setWinch(bool winch)
{
    _winch = winch;
}

// Getters
bool TowTruck::getWinch()
{
    return _winch;
}

Truck::Truck(int numTires, string fuelType, int numRoundThings, float volume) : Vehicle(fuelType, numRoundThings, volume)
{
    _numTires = numTires;
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

Vehicle::Vehicle(string fuelType, int numRoundThings, float volume)
{
    _fuelType = fuelType;
    _engType._numRoundThings = numRoundThings;
    _engType._volume = volume;
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