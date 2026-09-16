#pragma once
#include <string>

using namespace std;

namespace person
{
    class Person
    {
        protected:
        string _name;
        int _id;
        Person(string, int);

        protected:
        string getName();
        int getId();
        void setName(string);
        void setId(int);
    };
}

Person::Person(string name, int id)
{
    _name = name;
    _id = id;
}

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