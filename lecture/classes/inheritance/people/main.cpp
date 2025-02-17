#include <iostream>
#include <fstream>
#include <sstream>
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
    int studentCounter = 0;
    int teacherCounter = 0;

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
            students[studentCounter] = new people::Student(stoi(tmpPerson[3]), {}, 0, tmpPerson[0], tmpPerson[1], stoi(tmpPerson[2]));
            studentCounter++;
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