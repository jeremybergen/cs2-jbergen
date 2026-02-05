#include <iostream>

using namespace std;

class Vehicle
{
    private:
        string _make;
        string _model;
        float _engineSize;
        int _fuelType;
        string _color;
        int _numWheels;
        bool _transmissionType;

    public:
        /// @brief Constructor
        /// @param make String make of the vehicle
        /// @param model string model of the vehicle
        /// @param engineSize float engine size in liters
        /// @param fuelType int 0 = gas, 1 = hybrid, 2 = electric
        /// @param color string color of the vehicle
        /// @param numWheels int number of wheels on the vehicle
        /// @param transmissionType bool true = automatic, false = manual
        Vehicle(string make = "Toyota",
                string model = "Yaris", 
                float engineSize = 2.1, 
                int fuelType = 0,
                string color = "Red",
                int numWheels = 4,
                bool transmissionType = true);
        /// @brief Destructor
        ~Vehicle();

        //Getters
        string getMake(){return _make;}
        string getModel(){return _model;}
        float getEngineSize(){return _engineSize;}
        int getFuelType(){return _fuelType;}
        string getColor(){return _color;}
        int getNumWheels(){return _numWheels;}
        bool getTransmissionType(){return _transmissionType;}
        //Setters
        void setEngineSize(float engineSize){_engineSize = engineSize;}
        void setFuelType(int fuelType){_fuelType = fuelType;}
        void setColor(string color){_color = color;}

        void printValues();
};

int main(int argc, char* argv[])
{
    Vehicle veh1("Ford", "F-150", 3, 1, "Red", 4, true);
    Vehicle veh2;

    veh1.printValues();
    veh2.printValues();

    return 0;
}

Vehicle::Vehicle(string make, string model, float engineSize, int fuelType, string color, int numWheels, bool transmissionType)
{
    _make = make;
    _model = model;
    
    if(fuelType != 2 && _engineSize <= 0)
    {
        while(engineSize <= 0)
        {
            cout << "Invalid engine size, must be greater than 0: ";
            cin >> engineSize;
        }
        _engineSize = engineSize;
    }
    else
    {
        _engineSize = engineSize;
    }

    _fuelType = fuelType;
    _color = color;
    _numWheels = numWheels;
    _transmissionType = transmissionType;
}

Vehicle::~Vehicle()
{
    cout << "Destructor called" << endl;
}

void Vehicle::printValues()
{
    cout << "You have a " << _color << " " << _make << " " << _model << " vehicle." << endl;
    cout << "It has " << _numWheels << " wheels" << endl;
    cout << "The engine size is: " << _engineSize << endl;
    if(_transmissionType)
    {
        cout << "It is automatic." << endl;
    }
    else
    {
        cout << "It is manual. " << endl;
    }
    switch(_fuelType)
    {
        case 0:
        cout << "It uses gas for fuel" << endl;
        break;
        case 1:
        cout << "It is a hybrid." << endl;
        break;
        case 2:
        cout << "It is electric. Good luck getting across the US...." << endl;
        break;
    }
}
