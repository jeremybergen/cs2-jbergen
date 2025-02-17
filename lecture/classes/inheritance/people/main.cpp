#include <iostream>
#include <fstream>
#include <sstream>
#include "student.h"
#include "teacher.h"

using namespace std;

void readFile(people::Student *[], people::Teacher *[], int&, int&);
void freeMem(people::Student *[], people::Teacher *[]);

int main(int argc, char* argv[])
{
    int studentCounter = 0;
    int teacherCounter = 0;
    people::Student *students[5];
    people::Teacher *teachers[5];

    readFile(students, teachers, studentCounter, teacherCounter);

    for(int i = 0; i < studentCounter; i++)
    {
        cout << students[i]->getFName() << endl;
    }
    for(int i = 0; i < teacherCounter; i++)
    {
        cout << teachers[i]->getFName() << endl;
    }
    // string classes[] = {"CSCI112", "CSCI111", "CSCI333", "CSCI486"};
    // // string* ptr1 = classes;
    // people::Student stu1(42, classes, 4, "Jeremy", "Bergen", 43);
    // people::Teacher teach1("Professor", "Computer Science & Engineering", "Warren", "MacEvoy", 2);

    // cout << "classes: " << classes << endl;
    // cout << "&classes[0]: " << &classes[0] << endl;

    // cout << stu1.getFName() << endl;
    freeMem(students, teachers);
    return 0;
}

void freeMem(people::Student *students[], people::Teacher *teachers[])
{
    for(int i = 0; i < 5; i++)
    {
        if(students[i] == nullptr)
            break;
        delete students[i];
    }
    for(int i = 0; i < 5; i++)
    {
        if(teachers[i] == nullptr)
            break;
        delete teachers[i];
    }
}

void readFile(people::Student *students[], people::Teacher *teachers[], int& studentCounter, int& teacherCounter)
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
        // cout << "DEBUG: " << inLine << endl;
        string token;
        int tokenCounter = 0;
        char classType;
        string tmpPerson[6];

        istringstream iss;
        iss.str(inLine);
        while(getline(iss, token, ','))
        {
            // cout << "DEBUG: " << token << endl;
            tokenCounter++;
            if(tokenCounter == 1)
            {
                classType = token.at(0);
            }
            else if(classType == 's')
            {
                tmpPerson[tokenCounter-2] = token;
                // if(tokenCounter == 2)
                // {

                // }
            }
            else if(classType == 't')
            {
                tmpPerson[tokenCounter-2] = token;
            }
            else
            {
                cout << "Error" << endl;
            }
        }
        if(classType == 's')
        {
            /// @param  numYears number of years of being a student
            /// @param  classes array of classes
            /// @param  arrSize size of classes to add to array
            /// @param  fName first name
            /// @param  lName last name
            /// @param  age age
            // cout << "student" << endl;
            // cout << "DEBUG: stoi(tmpPerson[3]): " << stoi(tmpPerson[3]) << endl;
            // cout << "DEBUG: stoi(tmpPerson[2]): " << stoi(tmpPerson[2]) << endl;
            students[studentCounter] = new people::Student(stoi(tmpPerson[3]), tmpPerson[4], tmpPerson[0], tmpPerson[1], stoi(tmpPerson[2]));
            studentCounter++;
        }
        else if(classType == 't')
        {
            //string title, string department, string fName, string lName, int age
            // cout << "teacher" << endl;
            // cout << "DEBUG: stoi(tmpPerson[2]): " << stoi(tmpPerson[2]) << endl;
            teachers[teacherCounter] = new people::Teacher(tmpPerson[3], tmpPerson[4], tmpPerson[0], tmpPerson[1], stoi(tmpPerson[2]));
            teacherCounter++;
        }

        // for(int j = 0; j < inLine.length(); j++)
        // {
        //     int commaPos = j;
        //     for(int i = j; i < inLine.length(); i++)
        //     {
        //         if(inLine.at(i) == ',')
        //         {
        //             break;
        //         }
        //         commaPos++;
        //     }
        //     cout << "DEBUG: " << inLine.substr(j, commaPos-j) << endl;
        //     j = commaPos;
        // }

    }


    fin.close();
}