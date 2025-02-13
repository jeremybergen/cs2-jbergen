#include "teacher.h"

people::Teacher::Teacher(string title, string department, string fName, string lName, int age) : Person(fName, lName, age)
{
    _title = title;
    _department = department;
}