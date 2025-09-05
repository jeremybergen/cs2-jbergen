#pragma once
#include <string>
#include "vehicle.h"

using namespace std;

// Truck class
class Truck : private Vehicle
{
    // private attributes for every truck instance
    private:
        // string _make;
        // string _model;
        // string _color;
        // int _numTires;

    // public methods for every instance of truck
    public:
        /// @brief Default constructor
        Truck();
        /// @brief Parameterized constructor
        /// @param  string make
        /// @param  string model
        /// @param  string color
        /// @param  int numTires
        Truck(string, string, string, int);

        // // Setter
        
        // /// @brief This function sets the model of a truck
        // /// @param  string model
        // void setModel(string);

        // // Getters

        // /// @brief This function returns the model of the truck
        // /// @return string
        // string getModel();

        /// @brief Creates and returns formatted string for truck instance
        /// @return string
        string print();
};