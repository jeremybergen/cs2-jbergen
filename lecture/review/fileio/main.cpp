#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// namespace n1
// {
//     void addNums(int, int);
// }

// namespace j1
// {
//     void addNums(int, int);

// }

struct MyStruct
{
    string fName;
    string lName;
    string title;
    string color;
};

int main(int argc, char* argv[])
{
    string inputLine;
    ifstream fin;
    MyStruct* people[100];
    int numPeople = 0;

    fin.open("test.csv");

    // getline(fin, inputLine);
    // while(getline(fin, inputLine))
    // while(fin >> inputLine)
    while(getline(fin, inputLine))
    {
        MyStruct* person = new MyStruct;
        int tokenNum = 0;
        string token;
        istringstream iss;
        iss.str(inputLine);

        while(getline(iss, token, ','))
        {
            // cout << "DEBUG: " << token << endl;
            // switch (tokenNum)
            // {
            // case 0:
            //     person->fName = token;
            //     break;
            // case 1:
            //     person->lName = token;
            //     break;
            // case 2:
            //     person->title = token;
            //     break;
            // case 3:
            //     person->color = token;
            //     break;
            
            // default:
            //     break;
            // }
            
            if(tokenNum == 0) person->fName = token;
            if(tokenNum == 1) person->lName = token;
            if(tokenNum == 2) person->title = token;
            if(tokenNum == 3) person->color = token;
            tokenNum++;
        }
        people[numPeople] = person;
        // cout << "DEBUG: " << inputLine.substr() << endl;
        // int lastCommaPos = 0;
        // for(int i = 0; i <= inputLine.size(); i++)
        // {
        //     if(inputLine[i] == ',' || i == inputLine.size() - 1)
        //     {
        //         cout << "DEBUG: " << inputLine.substr(lastCommaPos, i - lastCommaPos) << endl;
        //         lastCommaPos = i + 1;
        //     }
        // }
        numPeople++;
    }

    for(int i = 0; i < numPeople; i++)
    {
        cout << "Favorite Color: " << people[i]->color << endl;
    }

    fin.close();
    // std::cout << "Hello World" << std::endl;
    // addNums(42, 15);
    return 0;
}

// namespace n1
// {
//     void addNums(int n1, int n2)
//     {
//         cout << "Other addNums function" << endl;
//     }
// }


// void j1::addNums(int n1, int n2)
// {
//     cout << n1 + n2 << endl;
// }