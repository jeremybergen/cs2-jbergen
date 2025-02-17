#pragma once
#include "person.h"

namespace people
{
    class Student : public Person
    {
        private:
            int _numYears;
            string _classes[10];
            int _arrSize;
        
        public:
            /// @brief Student constructor derived from Person
            /// @param  numYears number of years of being a student
            /// @param  classes array of classes
            /// @param  arrSize size of classes to add to array
            /// @param  fName first name
            /// @param  lName last name
            /// @param  age age
            // Student(int, string[], int, string, string, int);
            Student(int, string, string, string, int);

            
    };
}