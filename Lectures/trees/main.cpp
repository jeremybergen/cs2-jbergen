#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[])
{
    int inputData = 0;
    Tree<int> tree1;

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
    cout << "Root Value: ";
    tree1.printRoot();

    cout << "What number to search for: ";
    cin >> inputData;
    cout << boolalpha << tree1.search(inputData) << endl;

    cout << "What number to delete: ";
    cin >> inputData;
    tree1.remove(inputData);
    cout << "New In Order: ";
    tree1.inOrder();
    cout << "Root Value: ";
    tree1.printRoot();

    return 0;
}