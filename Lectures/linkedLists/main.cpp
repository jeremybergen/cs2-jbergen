#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node*);

int main(int argc, char* argv[])
{
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 2;
    (*n1).next = n2;

    n2->data = 42;
    n2->next = n3;

    n3->data = 100;
    n3->next = nullptr;

    // cout << "n1.data: " << n1.data << endl;
    // cout << "n2.data: " << n2.data << endl;
    // cout << "n3.data: " << n3.data << endl;
    // cout << "head->data: " << head->data << endl;
    // head = head->next;
    // cout << "head->data: " << head->data << endl;
    // head = head->next;
    // cout << "head->data: " << head->data << endl;
    // head = head->next;

    cout << "Printing list of 3 elements: " << endl;
    printList(n1);

    Node* n4 = new Node;
    n4->data = 200;
    n4->next = nullptr;
    n3->next = n4;

    cout << "Printing list of 4 elements: " << endl;
    printList(n1);

    n3->next = nullptr;
    cout << "Printing list of 3 elements: " << endl;
    printList(n1);

    // delete n1;
    // delete n2;
    // delete n3;
    // delete n4;
    Node* head = n1;
    while(head != nullptr)
    {
        Node* curNode = head;
        head = head->next;
        delete curNode;
    }
    return 0;
}

void printList(Node* linkedList)
{
    Node* head = linkedList;
    while(head != nullptr)
    {
        cout << "head->data: " << head->data << endl;
        head = head->next;
    }
}