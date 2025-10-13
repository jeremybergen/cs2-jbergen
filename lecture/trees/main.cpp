#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[])
{
    Tree<int> t1;
    int searchNum;

    t1.insert(42);
    t1.insert(15);
    t1.insert(100);
    t1.insert(23);
    t1.insert(10);

    t1.inOrder();

    cout << "Enter number to search for: ";
    cin >> searchNum;

    cout << boolalpha << t1.search(searchNum) << endl;
    return 0;
}