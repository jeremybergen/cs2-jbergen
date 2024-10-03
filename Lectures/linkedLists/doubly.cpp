#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void printList(Node*);
// void appendList(Node**, int);
void insertList(Node**, int);
void deleteFromList(Node**);
void emptyList(Node*);

int main(int argc, char* argv[])
{
    Node* list1 = nullptr;

    unsigned int listSize;

    cout << "How many numbers do you want to input? ";
    cin >> listSize;

    for(unsigned int i = 0; i < listSize; i++)
    {
        int newNumber;

        cout << "Enter a number: ";
        cin >> newNumber;

        insertList(&list1, newNumber);

        cout << "Printing List: " << endl;
        printList(list1);
    }

    cout << "Printing Complete List: " << endl;
    printList(list1);

    // deleteFromList(&list1);
    // cout << "Printing after delete: " << endl;
    // printList(list1);

    emptyList(list1);

    return 0;
}

void insertList(Node** list1, int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    // list1 is empty
    if(*list1 == nullptr)
    {
        *list1 = newNode;
    }
    else
    {
        //list1 not empty
        Node* head = *list1;
        while(head->next != nullptr && head->next->data < newData)
        {
            head = head->next;
        }
        if(head->data > newData)
        {
            newNode->next = head;
            head->prev = newNode;
            // newNode->next->prev = newNode;
            *list1 = newNode;
        }
        else
        {
            newNode->next = head->next;
            newNode->prev = head;
            if(head->next != nullptr)
            {
                head->next->prev = newNode;
            }
            head->next = newNode;
        }
    }
}

void deleteFromList(Node** list1)
{
    int valToDelete;

    cout << "Enter the number to delete: ";
    cin >> valToDelete;

    Node* head = *list1;
    if(head->data == valToDelete)
    {
        Node* nodeToDelete = head;
        *list1 = head->next;
        // head->next = nodeToDelete->next;
        // or head->next = head->next->next;
        delete nodeToDelete;
        return;
    }
    while((head->next != nullptr && head->next->data != valToDelete))
    {
        head = head->next;
    }
    if(head->next != nullptr)
    {
        Node* nodeToDelete = head->next;
        head->next = nodeToDelete->next;
        // or head->next = head->next->next;
        delete nodeToDelete;
    }
    else
    {
        cout << "Node not found" << endl;
    }
}

void emptyList(Node* list1)
{
    Node* head = list1;
    while(head != nullptr)
    {
        Node* curNode = head;
        head = head->next;
        delete curNode;
    }
}

void printList(Node* linkedList)
{
    Node* head = linkedList;
    while(head != nullptr)
    {
        // cout << "head->data: " << head->data << endl;
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
