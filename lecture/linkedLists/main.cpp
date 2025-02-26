#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void buildList(Node**);
void appendNode(Node**, int);
// void buildList(Node*&);
void printList(Node*);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    Node* myList;
    myList = nullptr;

    buildList(&myList);

    printList(myList);

    deleteList(myList);
    myList = nullptr;
    return 0;
}

void deleteList(Node* head)
{
    while(head != nullptr)
    {
        Node* toBeDeleted = head;
        cout << "DEBUG: toBeDeleted: " << toBeDeleted << endl;
        head = head->_next;
        delete toBeDeleted;
    }
}

void printList(Node* head)
{
    Node* cNode = head;
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
}

void buildList(Node **myList)
{
    for(int i = 0; i < 5; i++)
    {
        int num1;
        
        // cout << "DEBUG: newNode: " << newNode << endl;

        cout << "Enter a number: ";
        cin >> num1;


        appendNode(myList, num1);
    }

}

void appendNode(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->_data = data;
    newNode->_next = nullptr;

    if(*head == nullptr)
    {
        *head = newNode;
        return;
    }

    Node* cNode = *head;
    while(cNode->_next != nullptr)
    {
        cNode = cNode->_next;
    }
    cNode->_next = newNode;
}