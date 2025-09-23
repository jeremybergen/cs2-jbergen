#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void printList(Node*);
void insertNode(Node**, int);
void deleteNode(Node**, int);

int main(int argc, char* argv[])
{
    Node* head = nullptr;
    int inData = 0;

    while(inData != -999)
    {
        cout << "Enter a number, -999 to quit: ";
        cin >> inData;
        if(inData == -999) break;
        insertNode(&head, inData);
    }

    printList(head);

    return 0;
}

void deleteNode(Node** head, int data)
{
    Node* toBeDeleted = *head;
    while(toBeDeleted->_next != nullptr && toBeDeleted->_next->_data < data)
    {
        toBeDeleted = toBeDeleted->_next;
    }
}

void insertNode(Node** head, int inData)
{
    Node* newNode = new Node{inData, nullptr};
    // cout << "DEUBG: " << newNode->_data << endl;
    //list is empty
    // cout << "*head: " << *head << endl;
    if (*head == nullptr)
    {
        *head = newNode;
        return;
        // This is incorrect because changes are lost after function exits
        // because you're modifying **head which is pass-by-value
        // head = &newNode;
    }

    // Find where we need to go to insert newNode
    Node* curNode = *head;
    //                              (*(*curNode)._next)._data
    while(curNode->_next != nullptr && curNode->_next->_data < inData)
    {
        curNode = curNode->_next;
    }
    // cout << "curNode: " << curNode << endl;

    if(curNode->_data > inData)
    {
        // This is a new head
        *head = newNode;
        newNode->_next = curNode;
    }
    else
    {
        // We are inserting the node after curNode
        if(curNode->_next == nullptr)
        {
            // at the end of the list
            curNode->_next = newNode;
        }
        else
        {
            // not at the end of the list
            newNode->_next = curNode->_next;
            curNode->_next = newNode;
        }
    }
}

void printList(Node* head)
{
    while(head != nullptr)
    {
        cout << head->_data << " ";
        head = head->_next;
    }
    cout << endl;
}
