#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public person::Person
{
    private:
        float _gpa;
        int _year;

    public:
        Student(string name, int id, float gpa, int year) : person::Person(name, id)
        {
            _gpa = gpa;
            _year = year;
        }
        string printVals()
        {
            return this->getName() + " has an id of: " + to_string(this->getId()) 
                   + "\n also a gpa of: " + to_string(_gpa) + " and is year: " 
                   + to_string(_year) + "\n";
        }
};

#endif