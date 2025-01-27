#include "rectangle.h"

using namespace std;

/// @brief Prompt for the sides of a rectangle
/// @param  int side1
/// @param  int side2
void promptSides(int& side1, int& side2)
{
    std::cout << "Please enter side 1 and side 2 separated by a space: ";
    std::cin >> side1 >> side2;
}

/// @brief Calculates the area of a rectangle
/// @param  int side1
/// @param  int side2
/// @return area
int calcArea(int side1, int side2)
{
    return side1 * side2;
}

/// @brief Calculates the perimeter of a rectangle
/// @param  int side1
/// @param  int side2
/// @return perimeter
int calcPerim(int side1, int side2)
{
    return 2*side1 + 2*side2;
}

/// @brief Prints the values for the rectangle
/// @param  int side1
/// @param  int side2
/// @param  int area
/// @param  int perimeter
void printVals(int side1, int side2, int area, int perim)
{
    printf("Your rectangle with sides %d and %d has an area of %d and a perimeter of %d\n", side1, side2, area, perim);


    // char ch;
    // int state;
    // cin >> ch;

    // state = ch - '0';

    // if(ch - 48 == 0)
    // {
    //     state = 0;
    // }
    // else
    // {
    //     state = 1;
    // }
}