#pragma once
#include <iostream>
#include <cstdio>

/// @brief Prompt for the sides of a rectangle
/// @param  int side1
/// @param  int side2
void promptSides(int&, int&);

/// @brief Calculates the area of a rectangle
/// @param  int side1
/// @param  int side2
/// @return area
int calcArea(int, int);

/// @brief Calculates the perimeter of a rectangle
/// @param  int side1
/// @param  int side2
/// @return perimeter
int calcPerim(int, int);

/// @brief Prints the values for the rectangle
/// @param  int side1
/// @param  int side2
/// @param  int area
/// @param  int perimeter
void printVals(int, int, int, int);

// #ifndef RECTANGLE_H
// #define RECTANGLE_H

// //Code goes here

// #endif