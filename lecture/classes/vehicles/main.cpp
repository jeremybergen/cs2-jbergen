/*
This program will demonstrate various vehicles in classes
*/
#include <iostream>
#include <string>
#include "truck.h"
#include "motorcycle.h"
// #include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    Truck truck1("Ford", "F-150", "Red", 4);
    Motorcycle mc1("Honda", "Shadow", "Black", 150.5, 2);
    Truck truck2("Ford");
    Truck truck3;

    // cout << truck1.print() << endl;
    // cout << mc1.print() << endl;
    cout << truck2.print() << endl;
    cout << truck3.print() << endl;

    // mc1.setModel("Civic");
    // cout << mc1.print() << endl;
    return 0;
}