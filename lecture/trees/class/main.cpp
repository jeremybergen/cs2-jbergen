#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[])
{
    Tree<int> myTree;
    int inData;

    // // cout << "DEBUG: inserting 42" << endl;
    // myTree.insert(42);
    // // cout << "DEBUG: inserting 15" << endl;
    // myTree.insert(15);
    // // cout << "DEBUG: inserting 23" << endl;
    // myTree.insert(23);

    cout << "Enter a number (-999 to quit): ";
    while(cin >> inData)
    {
        if(inData == -999) break;
        myTree.insert(inData);
        cout << "Enter a number (-999 to quit): ";
    }

    // cout << "DEBUG: inOrder" << endl;
    myTree.inOrder();

    cout << "Enter a number to delete: ";
    cin >> inData;
    myTree.remove(inData);

    myTree.inOrder();

    return 0;
}