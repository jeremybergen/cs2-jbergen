#include <iostream>
#include <fstream>
#include "student.h"
#include "teacher.h"

using namespace std;

void readFile(people::Student *[], people::Teacher *[]);

int main(int argc, char* argv[])
{
    people::Student *students[5];
    people::Teacher *teachers[5];

    readFile(students, teachers);
    // string classes[] = {"CSCI112", "CSCI111", "CSCI333", "CSCI486"};
    // // string* ptr1 = classes;
    // people::Student stu1(42, classes, 4, "Jeremy", "Bergen", 43);
    // people::Teacher teach1("Professor", "Computer Science & Engineering", "Warren", "MacEvoy", 2);

    // cout << "classes: " << classes << endl;
    // cout << "&classes[0]: " << &classes[0] << endl;

    // cout << stu1.getFName() << endl;
    return 0;
}

void readFile(people::Student *students[], people::Teacher *teachers[])
{
    string inLine;
    ifstream fin("csci112.csv");

    for(int i = 0; i < 5; i++)
    {
        students[i] = nullptr;
        teachers[i] = nullptr;
    }

    while(getline(fin, inLine))
    {
        cout << "DEBUG: " << inLine << endl;
    }


    fin.close();
}