#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char* argv[])
{
    List<int>* myList = new List<int>();

    myList->insert(42);
    myList->insert(23);
    myList->insert(15);
    
    myList->insert(123);

    myList->print();

    delete myList;
    return 0;
}