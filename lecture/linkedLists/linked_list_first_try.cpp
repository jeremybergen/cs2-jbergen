#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
    Node* _prev;
};

void createList(Node**, Node**);
void printList(Node*);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    // Node n1;
    // Node n2;
    // Node n3;
    Node* head = nullptr;
    Node* tail = nullptr;

    createList(&head, &tail);

    // n1._data = 42;
    // n2._data = 15;
    // n3._data = 23;

    // n1._next = &n2;
    // n2._next = &n3;
    // n3._next = nullptr;
    // head = &n1;

    // cout << n1._data << " " << n2._data << " " << n3._data << endl;
    printList(head);

    deleteList(head);
    
    return 0;
}

void createList(Node** head, Node** tail)
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int inData = 0;

    while(inData != -999)
    {
        cout << "Enter a number or -999 to quit: ";
        cin >> inData;
        if(inData == -999) break;
        Node* newNode = new Node;
        newNode->_data = inData;
        newNode->_next = nullptr;
        newNode->_prev = nullptr;

        // list is empty
        if(head == nullptr)
        {
            head = &newNode;
            tail = &newNode;
        }
        else //list is not empty
        {
            Node* curNode = *head;
            while(curNode->_next != nullptr)
            {
                curNode = curNode->_next;
            }
            curNode->_next = newNode;
            newNode->_prev = curNode;
            tail = &newNode;
        }    
    }
    // return head;
}

void printList(Node* head)
{
    Node* curNode = head;
    while(curNode != nullptr)
    {
        cout << curNode->_data << " ";
        curNode = curNode->_next;
    }
    cout << endl;
}

void deleteList(Node* head)
{
    Node* toBeDeleted = head;
    while(head != nullptr)
    {
        head = head->_next;
        cout << "deleting: " << toBeDeleted << endl;
        delete toBeDeleted;
        toBeDeleted = head;
    }
}