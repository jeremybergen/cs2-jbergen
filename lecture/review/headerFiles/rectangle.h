#pragma once
#include <iostream>

using namespace std;

template <class T1>
struct Rectangle
{
    T1 s1, s2;
    T1 area;
    T1 perim;
};

template <class T1>
void promptSides(Rectangle<T1>&);

template <class T1>
void calcVals(Rectangle<T1>&);

template <class T1>
void printVals(Rectangle<T1>&);



template <class T1>
void promptSides(Rectangle<T1>& r1)
{
    cout << "Enter the two sides of a rectangle: ";
    cin >> r1.s1 >> r1.s2;
}

template <class T1>
void calcVals(Rectangle<T1>& r1)
{
    r1.area = r1.s1 * r1.s2;
    r1.perim = 2*r1.s1 + 2*r1.s2;
}

template <class T1>
void printVals(Rectangle<T1>& r1)
{
    cout << "The rectangle with sides " 
         << r1.s1 << " and " << r1.s2
         << " has an area of " << r1.area
         << " and a perimeter of " << r1.perim << endl;
}