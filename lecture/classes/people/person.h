#pragma once
#include <string>

using namespace std;

class Person
{
    protected:
    string _name;
    int _id;

    string getName();
    int getId();
    void setName(string);
    void setId(int);
};

string Person::getName()
{
    return _name;
}

int Person::getId()
{
    return _id;
}

void Person::setName(string name)
{
    _name = name;
}

void Person::setId(int id)
{
    _id = id;
}