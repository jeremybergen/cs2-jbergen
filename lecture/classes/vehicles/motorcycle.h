#pragma once
#include <string>

using namespace std;

// Motorcycle class
class Motorcycle
{
    // private attributes for every motorcycle instance
    private:
        string _make;
        string _model;
        string _color;
        float _engineSize;
        int _numTires;

    // public methods for every instance of motorcycle
    public:
        /// @brief Default constructor
        Motorcycle();
        /// @brief Parameterized constructor
        /// @param  string make
        /// @param  string model
        /// @param  string color
        /// @param  float engineSize
        /// @param  int numTires
        Motorcycle(string, string, string, float, int);

        // Setter
        
        /// @brief This function sets the model of a motorcycle
        /// @param  string model
        void setModel(string);

        // Getters

        /// @brief This function returns the model of the motorcycle
        /// @return string
        string getModel();

        /// @brief Creates and returns formatted string for motorcycle instance
        /// @return string
        string print();
};