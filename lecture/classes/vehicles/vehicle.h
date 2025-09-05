#pragma once
#include <string>

using namespace std;

class Vehicle
{
    protected:
        string _make;
        string _model;
        string _color;
        int _numTires;

    public:
        // Constructor
        Vehicle();

        /// @brief Parameterized constructor
        /// @param  string make
        /// @param  string model
        /// @param  string color
        /// @param  int numTires 
        Vehicle(string, string, string, int);

        /// @brief This function sets the model of a vehicle
        /// @param  string model
        void setModel(string);

        // Getters

        /// @brief This function returns the model of the motorcycle
        /// @return string
        string getModel();
};