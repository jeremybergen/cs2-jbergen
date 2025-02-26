#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void buildList(Node **);

int main(int argc, char* argv[])
{
    Node* myList = nullptr;

    buildList(&myList);

    Node* cNode = myList;
    while(cNode != nullptr)
    {
        if(cNode->_next == nullptr)
        {
            cout << cNode->_data << endl;
            // continue;
            break;
        }
        
        cout << cNode->_data << "->";
        cNode = cNode->_next;
    }

    while(myList != nullptr)
    {
        Node* toBeDeleted = myList;
        cout << "DEBUG: toBeDeleted: " << toBeDeleted << endl;
        myList = myList->_next;
        delete toBeDeleted;
    }

    return 0;
}

void buildList(Node **myList)
{
    for(int i = 0; i < 5; i++)
    {
        int num1;
        Node* newNode = new Node;
        cout << "DEBUG: newNode: " << newNode << endl;

        cout << "Enter a number: ";
        cin >> num1;

        newNode->_data = num1;
        newNode->_next = nullptr;

        if(myList == nullptr)
        {
            myList = &newNode;
            continue;
        }

        Node* cNode = *myList;
        while(cNode->_next != nullptr)
        {
            cNode = cNode->_next;
        }
        cNode->_next = newNode;
    }

}