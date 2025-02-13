#pragma once
#include "person.h"

namespace people
{
    class Teacher : public Person
    {
        private:
            string _title;
            string _department;

        public:
            Teacher(string, string, string, string, int);


    };
}