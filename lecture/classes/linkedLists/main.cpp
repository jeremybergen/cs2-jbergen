#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

void printList(Node*);
void buildList(Node**);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    Node* head = nullptr;

    buildList(&head);

    printList(head);

    deleteList(head);

    return 0;
}

void deleteList(Node* head)
{
    Node* toBeDeleted = head;
    while(toBeDeleted != nullptr)
    {
        head = head->_next;
        delete toBeDeleted;
        toBeDeleted = head;
    }
}

void printList(Node* head)
{
    Node* currentNode = head;
    while(currentNode != nullptr)
    {
        cout << currentNode->_data << " ";
        currentNode = currentNode->_next;
    }
    cout << endl;
}

void buildList(Node** head)
{
    int newNumber;
    cout << "Enter a number to add to the list (-999 to quit): ";
    cin >> newNumber;
    while (newNumber != -999)
    {
        Node* newNode = new Node();
        newNode->_data = newNumber;
        newNode->_next = nullptr;

        if(*head == nullptr)
        {
            (*head) = newNode;
        }
        else
        {
            Node* curNode = *head;
            while(curNode->_next != nullptr)
            {
                curNode = curNode->_next;
            }
            curNode->_next = newNode;
        }
        cout << "Enter a number to add to the list (-999 to quit): ";
        cin >> newNumber;
    }
    // Node* newHead = *head;
    
    // newHead = new Node();
    // newHead->_data = 42;
    // newHead->_next = nullptr;

    // Node* node2 = new Node;
    // node2->_data = 15;
    // node2->_next = nullptr;

    // newHead->_next = node2;

    // Node* node3 = new Node;
    // node3->_data = 23;
    // node3->_next = nullptr;

    // node2->_next = node3;
    // // return head;
    // *head = newHead;
}
