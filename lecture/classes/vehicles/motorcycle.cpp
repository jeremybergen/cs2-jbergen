#include "motorcycle.h"

/// @brief Default constructor
Motorcycle::Motorcycle()
{
    _make = "";
    _model = "";
    _color = "";
    _engineSize = 0.0;
    _numTires = 0;
}
/// @brief Parameterized constructor
/// @param  string make
/// @param  string model
/// @param  string color
/// @param  float engineSize
/// @param  int numTires
Motorcycle::Motorcycle(string make, string model, string color, float engineSize, int numTires)
{
    _make = make;
    _model = model;
    _color = color;
    _engineSize = engineSize;
    _numTires = numTires;
}

// Setter

// /// @brief This function sets the model of a motorcycle
// /// @param  string model
// void Motorcycle::setModel(string model)
// {
//     _model = model;
// }

// Getters

// /// @brief This function returns the model of the motorcycle
// /// @return string
// string Motorcycle::getModel()
// {
//     return _model;
// }

/// @brief Creates and returns formatted string for motorcycle instance
/// @return string
string Motorcycle::print()
{
    string toReturn;
    toReturn += "This is a " + _make + " and " + _model;
    toReturn += "\nIts engine size is : " + to_string(_engineSize) + " cc.";
    toReturn += "\nIt has " + to_string(_numTires) + " tires.";
    return toReturn;
}