#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void addNode(Node**, int);
void printList(Node*);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    Node* head = 0;

    addNode(&head, 42);
    // cout << "DEBUG: head: " << head << endl;
    addNode(&head, 15);
    addNode(&head, 23);
    addNode(&head, 9000);
    addNode(&head, 123);

    printList(head);
    cout << endl;

    deleteList(head);
    return 0;
}

void deleteList(Node* head)
{
    Node* toBeDeleted = head;
    while(head != nullptr)
    {
        head = head->_next;
        cout << "toBeDeleted: " << toBeDeleted << endl;
        delete toBeDeleted;
        toBeDeleted = head;
    }
}

void printList(Node* head)
{
    // cout << "DEBUG: in printlist: head: " << head << endl;
    while(head != nullptr)
    {
        cout << head->_data << " ";
        head = head->_next;
    }
}

void addNode(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->_data = data;
    newNode->_next = nullptr;
    cout << "newNode: " << newNode << endl;

    if(*head == nullptr)
    {
        *head = newNode;
        // return head;
        return;
    }

    Node* curNode = *head;

    while(curNode->_next != nullptr)
    {
        curNode = curNode->_next;
    }
    curNode->_next = newNode;
    // return head;
}