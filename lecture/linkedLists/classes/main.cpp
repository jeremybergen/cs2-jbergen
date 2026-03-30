#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char* argv[])
{
    List<int>* myList = new List<int>();
    int insertNumber = 0;

    while(insertNumber != -999)
    {
        cout << "Enter a number to insert (-999 to quit): ";
        cin >> insertNumber;
        if(insertNumber == -999) break;
        myList->insert(insertNumber);
    }
    // myList->insert(42);
    // myList->insert(23);
    // myList->insert(15);
    
    // myList->insert(123);

    myList->print();

    // while(!myList->isEmpty())
    // {
    //     cout << "Enter a number to delete: ";
    //     cin >> insertNumber;

    //     myList->delItem(insertNumber);
    //     myList->print();
    // }


    delete myList;
    return 0;
}