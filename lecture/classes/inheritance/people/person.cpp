#include "person.h"

people::Person::Person(string fName, string lName, int age)
{
    _fName = fName;
    _lName = lName;
    _age = age;
}

string people::Person::getFName()
{
    return _fName;
}
string people::Person::getLName()
{
    return _lName;
}
int people::Person::getAge()
{
    return _age;
}

void people::Person::setFName(string fName)
{
    _fName = fName;
}
void people::Person::setLName(string lName)
{
    _lName = lName;
}
void people::Person::setAge(int age)
{
    _age = age;
}