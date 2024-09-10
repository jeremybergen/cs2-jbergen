#include "student.h"
#include <iostream>

using namespace std;

students::Student::Student(int id, string classLevel)
{
    _id = id;
    _classLevel = classLevel;
}
int students::Student::getId()
{
    return _id;
}
string students::Student::getClassLevel()
{
    return _classLevel;
}

void students::Student::printInfo()
{
    cout << this->getName() << " has a student id of: "
         << this->_id << endl;
}