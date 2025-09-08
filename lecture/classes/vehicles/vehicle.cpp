#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    _make = "";
    _model = "";
    _color = "";
    _numTires = 0;
}

/// @brief Parameterized constructor
/// @param  string make
/// @param  string model
/// @param  string color
/// @param  int numTires 
Vehicle::Vehicle(string make, string model, string color, int numTires)
{
    _make = make;
    _model = model;
    _color = color;
    // _numTires = numTires;
    if(numTires < 1) 
    {
        cerr << "Invalid number of tires" << endl;
        _numTires = 2;
    }
}

/// @brief This function sets the model of a vehicle
/// @param  string model
void Vehicle::setModel(string model)
{
    _model = model;
}

// Getters

/// @brief This function returns the model of the motorcycle
/// @return string
string Vehicle::getModel()
{
    return _model;
}