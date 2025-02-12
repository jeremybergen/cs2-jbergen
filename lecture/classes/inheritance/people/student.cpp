#include "student.h"

/// @brief Student constructor derived from Person
/// @param  numYears number of years of being a student
/// @param  classes array of classes
/// @param  arrSize size of classes to add to array
/// @param  fName first name
/// @param  lName last name
/// @param  age age
people::Student::Student(int numYears, string classes[], int arrSize, string fName, string lName, int age) : Person(fName, lName, age)
{
    _numYears = numYears;

    if(arrSize >= 0 && arrSize <=10)
    {    
        for (int i = 0; i < arrSize; i++)
        {
            _classes[i] = classes[i];
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            _classes[i] = classes[i];
        }
    }
}