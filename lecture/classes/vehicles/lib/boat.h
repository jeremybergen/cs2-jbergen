#pragma once
#include "vehicle.h"

class Boat : public Vehicle
{
    private:
        bool _sail;

    public:
        void printValues()
        {
            cout << "This is a boat" << endl;
        }
};