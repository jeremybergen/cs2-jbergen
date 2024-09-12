#include <iostream>
#include "person.h"
#include "student.h"

using namespace std;

void addNums(int, int);
students::Student* someFunction(int, string&, char[]);

int main(int argc, char* argv[])
{
    // person::Person* newPerson = new person::Person("Jeremy", 42, 74);
    person::Person newPerson("Jeremy", 42, 74);
    students::Student newStudent(42, "Senior", 42, 74);

    newStudent.printInfo();
    // newPerson.getHeight();
    // newStudent.getHeight();

    // delete newPerson;
    return 0;
}