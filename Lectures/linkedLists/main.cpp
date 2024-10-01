#include <iostream>

using namespace std;

struct Node
{
    int data;
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
    }

    cout << "Printing List: " << endl;
    printList(list1);

    deleteFromList(&list1);
    cout << "Printing after delete: " << endl;
    printList(list1);

    emptyList(list1);
    return 0;
}

void insertList(Node** list1, int newData)
{
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

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

// void appendList(Node** list1, int inputNumber)
// {
//     Node* newNode = new Node;
//     newNode->data = inputNumber;
//     newNode->next = nullptr;

//     // list1 is empty
//     if(*list1 == nullptr)
//     {
//         *list1 = newNode;
//     }
//     else
//     {
//         //list1 has at least 1 element already
//         Node* head = *list1;
//         while(head->next != nullptr)
//         {
//             head = head->next;
//         }
//         head->next = newNode;
//     }
// }

void printList(Node* linkedList)
{
    Node* head = linkedList;
    while(head != nullptr)
    {
        cout << "head->data: " << head->data << endl;
        head = head->next;
    }
}












    // Node* n1 = new Node;
    // Node* n2 = new Node;
    // Node* n3 = new Node;

    // n1->data = 2;
    // (*n1).next = n2;

    // n2->data = 42;
    // n2->next = n3;

    // n3->data = 100;
    // n3->next = nullptr;

    // // cout << "n1.data: " << n1.data << endl;
    // // cout << "n2.data: " << n2.data << endl;
    // // cout << "n3.data: " << n3.data << endl;
    // // cout << "head->data: " << head->data << endl;
    // // head = head->next;
    // // cout << "head->data: " << head->data << endl;
    // // head = head->next;
    // // cout << "head->data: " << head->data << endl;
    // // head = head->next;

    // cout << "Printing list of 3 elements: " << endl;
    // printList(n1);

    // Node* n4 = new Node;
    // n4->data = 200;
    // n4->next = nullptr;
    // n3->next = n4;

    // cout << "Printing list of 4 elements: " << endl;
    // printList(n1);

    // n3->next = nullptr;
    // cout << "Printing list of 3 elements: " << endl;
    // printList(n1);

    // // delete n1;
    // // delete n2;
    // // delete n3;
    // // delete n4;
