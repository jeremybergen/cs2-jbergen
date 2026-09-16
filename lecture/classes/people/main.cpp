#include <iostream>
#include "student.h"
#include "teacher.h"

using namespace std;

int main(int argc, char* argv[])
{
    Student stu1("Jeremy", 42);
    Teacher t1(123, true, "Master", 1, "Bob", 1);

    cout << t1.getName() << endl;

    return 0;
}