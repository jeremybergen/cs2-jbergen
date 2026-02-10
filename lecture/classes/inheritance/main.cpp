#include <iostream>
#include "student.h"
#include "faculty.h"

using namespace std;

int main(int argc, char* argv[])
{
    Student stu1("Bob", 123456, 3.99, 10);
    person::Faculty f1("Jeremy", 42, "Computer Science & Engineering");

    Student* stu2 = new Student("Alice", 1, 4, 12);

    cout << stu1.printVals();
    cout << stu2->printVals();

    cout << f1.printVals();

    delete stu2;
    return 0;
}