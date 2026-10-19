#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
    Node* _prev;
};

void addNode(Node**, int);
void insertNode(Node**, int);
void deleteNode(Node**, int);
void printList(Node*);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    Node* head = 0;
    int inData = 0;
    // addNode(&head, 42);
    // // cout << "DEBUG: head: " << head << endl;
    // addNode(&head, 15);
    // addNode(&head, 23);
    // addNode(&head, 9000);
    // addNode(&head, 123);
    while (inData > -999)
    {
        cout << "Enter number to insert (-999 to exit): ";
        cin >> inData;
        if(inData <= -999) break;
        insertNode(&head, inData);
        printList(head);
        cout << endl;
    }

    printList(head);
    cout << endl;

    cout << "Enter number to delete: ";
    cin >> inData;
    deleteNode(&head, inData);
    printList(head);
    cout << endl;

    deleteList(head);
    return 0;
}

void deleteNode(Node** head, int data)
{
    if(*head == nullptr)
    {
        cout << "List empty" << endl;
        return;
    }

    Node* currentNode = *head;
    if((*head)->_data == data)
    {
        *head = (*head)->_next;
        cout << "Deleting: " << currentNode << endl;
        delete currentNode;
        return;
    }
    
    while(currentNode->_next != nullptr && currentNode->_next->_data != data)
    {
        currentNode = currentNode->_next;
    }

    if(currentNode->_next != nullptr && currentNode->_next->_data == data)
    {
        Node* toBeDeleted = currentNode->_next;
        currentNode->_next = currentNode->_next->_next;
        cout << "Deleting: " << toBeDeleted << endl;
        delete toBeDeleted;
    }
}

void insertNode(Node** head, int data)
{
    Node* newNode = new Node({data, nullptr});

    if(*head == nullptr)
    {
        *head = newNode;
        return;
    }

    Node* curNode = *head;
    // while(newNode->_data > curNode->_data)
    while(curNode->_next != nullptr && curNode->_next->_data < newNode->_data)
    {
        // if(curNode->_next == nullptr)
        // {
        //     curNode->_next = newNode;
        // }
        // else
        // {
            curNode = curNode->_next;
        // }
    }

    if(curNode == *head && curNode->_data > newNode->_data)
    {
        newNode->_next = curNode;
        *head = newNode;
    }
    else
    {
        newNode->_next = curNode->_next;
        curNode->_next = newNode;
    }

    // if(curNode == *head && curNode->_next == nullptr)
    // {
    //     curNode->_next = newNode;
    // }
    // else if(curNode == *head)
    // {
    //     newNode->_next = curNode;
    //     *head = newNode;
    // }
    // else
    // {
        
    // }
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
    newNode->_prev = nullptr;
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