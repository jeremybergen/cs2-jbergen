#include <iostream>
#include "lib/car.h"
#include "lib/truck.h"
#include "lib/vehicle.h"
#include "lib/boat.h"

using namespace std;

int main(int argc, char* argv[])
{
    Car c1;
    // Truck t1("Ford", "F-150", 3, 1, "Red", 4, true);
    Truck t1;
    Vehicle v1;
    Boat b1;

    t1.setColor("Black");
    t1.setEngineSize(3);
    t1.setFuelType(1);

    b1.printValues();
    c1.printValues();
    t1.printValues();
    v1.printValues();
    // Vehicle veh1("Ford", "F-150", 3, 1, "Red", 4, true);
    // Vehicle veh2;

    // veh1.printValues();
    // veh2.printValues();

    return 0;
}

