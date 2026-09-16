#pragma once
#include "person.h"

class Faculty : public Person
{
    private:
    string _title;
    int _access;

    public:
    Faculty(string, int, string, int);
    void setTitle(string);
    void setAccess(int);
    string getTitle();
    int getAccess();
};

Faculty::Faculty(string title, int access, string name, int id) : Person(name, id)
{
    _title = title;
    _access = access;
}

void Faculty::setTitle(string title)
{
    _title = title;
}
void Faculty::setAccess(int access)
{
    _access = access;
}
string Faculty::getTitle()
{
    return _title;
}
int Faculty::getAccess()
{
    return _access;
}