#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void printList(Node*);
void insertNode(Node**, int);

int main(int argc, char* argv[])
{
    Node* head = nullptr;
    int inData = 0;

    while(inData != -999)
    {
        cout << "Enter a number, -999 to quit: ";
        cin >> inData;
        insertNode(&head, inData);
    }

    return 0;
}

void insertNode(Node** head, int inData)
{
    Node* newNode = new Node{inData, nullptr};

    //list is empty
    if (*head == nullptr)
    {
        *head = newNode;
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

    if(curNode->_data > inData)
    {
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