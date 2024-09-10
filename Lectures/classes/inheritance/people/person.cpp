#include "person.h"

person::Person::Person(string name, int age, int height)
{
    _name = name;
    _age = age;
    _height = height;
}
string person::Person::getName()
{
    return _name;
}
int person::Person::getAge()
{
    return _age;
}
int person::Person::getHeight()
{
    return _height;
}