#pragma once
#include <string>
#include "person.h"

using namespace std;

namespace students
{
    class Student : public person::Person
    {
        private:
        int _id;
        string _classLevel;

        public:
        Student(int, string, int, int);
        int getId();
        string getClassLevel();
        void printInfo();
    };
}