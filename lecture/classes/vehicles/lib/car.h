#pragma once
#include "vehicle.h"

class Car : public Vehicle
{
    private:
        int _numWheels;
        bool _transmissionType;

    public:
        void setNumWheels(int numWheels) { _numWheels = numWheels; }
        void setTransmissionType(bool transmissionType) { _transmissionType = transmissionType; }

        void printValues()
        {
            cout << "This is a car" << endl;
            // cout << "You have a " << _color << " " << _make << " " << _model << " vehicle." << endl;
            // cout << "It has " << _numWheels << " wheels" << endl;
            // cout << "The engine size is: " << _engineSize << endl;
            // if(_transmissionType)
            // {
            //     cout << "It is automatic." << endl;
            // }
            // else
            // {
            //     cout << "It is manual. " << endl;
            // }
            // switch(_fuelType)
            // {
            //     case 0:
            //     cout << "It uses gas for fuel" << endl;
            //     break;
            //     case 1:
            //     cout << "It is a hybrid." << endl;
            //     break;
            //     case 2:
            //     cout << "It is electric. Good luck getting across the US...." << endl;
            //     break;
            // }
        }
};