#pragma once
#include "person.h"

class Student : public Person
{
    private:
    string _classes[10];
    float _gpa;
    string _books[10];

    public:
    Student(string, int);
};

Student::Student(string name, int id) : Person(name, id)
{
    
}