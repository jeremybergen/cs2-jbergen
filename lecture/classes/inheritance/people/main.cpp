#include <iostream>
#include "student.h"
#include "teacher.h"

using namespace std;

int main(int argc, char* argv[])
{
    string classes[] = {"CSCI112", "CSCI111", "CSCI333", "CSCI486"};
    people::Student stu1(42, classes, 4, "Jeremy", "Bergen", 43);

    cout << stu1.getFName() << endl;
    return 0;
}