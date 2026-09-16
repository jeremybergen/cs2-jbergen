#pragma once
#include "faculty.h"

class Teacher : public Faculty
{
    private:
    int _officeNum;
    bool _lounge;

    public:
    Teacher(int, bool, string, int, string, int);
    string getName();
};

Teacher::Teacher(int officeNum, bool lounge, string title, int access, string name, int id) : Faculty(title, access, name, id)
{
    _officeNum = officeNum;
    _lounge = lounge;
}

string Teacher::getName()
{
    return _name;
}