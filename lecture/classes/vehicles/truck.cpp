#include "truck.h"

// /// @brief Default constructor
// Truck::Truck()
// {
//     _make = "";
//     _model = "";
//     _color = "";
//     _numTires = 0;
// }
/// @brief Parameterized constructor
/// @param  string make
/// @param  string model
/// @param  string color
/// @param  int numTires
Truck::Truck(string make, string model, string color, int numTires) : Vehicle(make, model, color, numTires)
{
    // _make = make;
    // _model = model;
    // _color = color;
    // _numTires = numTires;
}

// // Setter

// /// @brief This function sets the model of a truck
// /// @param  string model
// void Truck::setModel(string model)
// {
//     _model = model;
// }

// // Getters

// /// @brief This function returns the model of the truck
// /// @return string
// string Truck::getModel()
// {
//     return _model;
// }

/// @brief Creates and returns formatted string for truck instance
/// @return string
string Truck::print()
{
    return "This is a " + _make + " " + _model + " and is " + _color + "\nIt has " + to_string(_numTires) + " tires.";
}