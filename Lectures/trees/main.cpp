#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[])
{
    int inputData = 0;
    Tree tree1;

    cout << "Enter numbers, -999 to quit: ";
    while(inputData != -999)
    {
        cin >> inputData;
        if(inputData == -999) break;
        tree1.addNode(inputData);
        cout << "Enter another number: ";
    }

    cout << "In Order: ";
    tree1.inOrder();
    cout << "Pre Order: ";
    tree1.preOrder();
    cout << "Post Order: ";
    tree1.postOrder();

    return 0;
}