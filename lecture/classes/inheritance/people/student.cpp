#include "student.h"
#include <sstream>

/// @brief Student constructor derived from Person
/// @param  numYears number of years of being a student
/// @param  classes array of classes
/// @param  arrSize size of classes to add to array
/// @param  fName first name
/// @param  lName last name
/// @param  age age
// people::Student::Student(int numYears, string classes[], int arrSize, string fName, string lName, int age) : Person(fName, lName, age)
people::Student::Student(int numYears, string classes, string fName, string lName, int age) : Person(fName, lName, age)
{
    _arrSize = 0;
    string token;
    _numYears = numYears;
    

    istringstream iss;
    iss.str(classes);

    while(iss >> token)
    {
        _classes[_arrSize] = token;
        _arrSize++;
    }

    // if(arrSize >= 0 && arrSize <=10)
    // {    
    //     for (int i = 0; i < arrSize; i++)
    //     {
    //         _classes[i] = classes[i];
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < 10; i++)
    //     {
    //         _classes[i] = classes[i];
    //     }
    // }
}