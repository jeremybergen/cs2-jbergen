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
void appendList(Node**, int);
void searchList(Node**, int, Node**);
void deleteNode(Node**, int);
void searchDeleteNode(Node**, int, Node**);

int main(int argc, char* argv[])
{
    Node* head = nullptr;
    int numToDelete = 0;

    buildList(&head);

    printList(head);

    cout << "Enter number to delete: ";
    cin >> numToDelete;
    deleteNode(&head, numToDelete);

    printList(head);

    deleteList(head);

    return 0;
}

void deleteNode(Node** head, int data)
{
    Node* foundNodePrev = nullptr;
    searchDeleteNode(head, data, &foundNodePrev);
    cout << "foundNode: " << foundNodePrev << endl;

    if(foundNodePrev == nullptr)
    {
        cout << "Data not found" << endl;
        return;
    }
    else
    {
        if(foundNodePrev->_data == data)
        {
            *head = foundNodePrev->_next;
            delete foundNodePrev;
        }
        else if(foundNodePrev->_next->_data == data)
        {
            Node* toBeDeleted = foundNodePrev->_next;
            foundNodePrev->_next = foundNodePrev->_next->_next;
            delete toBeDeleted;
        }
    }
}

void searchDeleteNode(Node** head, int data, Node** foundNodePrev)
{
    Node* currentNode = *head;
    if(currentNode->_data == data)
    {
        *foundNodePrev = currentNode; 
    }
    while(currentNode != nullptr && currentNode->_next != nullptr && ((currentNode)->_next)->_data != data)
    {
        // cout << "DEBUG: " << "currentNode->_data: " << currentNode->_data << endl;
        currentNode = currentNode->_next;
    }

    // cout << "currentNode: " << currentNode << endl;
    if(currentNode->_next == nullptr)
    {
        *foundNodePrev = nullptr;
    }
    else
    {
        *foundNodePrev = currentNode;
    }
    
}

void searchList(Node** head, int data, Node** foundNode)
{
    Node* currentNode = *head;
    while(currentNode != nullptr && currentNode->_data != data)
    {
        // cout << "DEBUG: " << "currentNode->_data: " << currentNode->_data << endl;
        currentNode = currentNode->_next;
    }

    // cout << "currentNode: " << currentNode << endl;
    *foundNode = currentNode;
    // if(currentNode == nullptr)
    // {
    //     foundNode = nullptr;
    // }
    // else
    // {
    //     foundNode = *currentNode;
    // }
    // foundNode = &currentNode;
}

void appendList(Node** head, int data)
{
    Node* currentNode = *head;
    if(currentNode == nullptr)
    {
        // cout << "DEBUG: " << "newNode" << endl;
        Node* newNode = new Node();
        newNode->_data = data;
        newNode->_next = nullptr;
        // cout << "DEBUG: " << "newNode->_data: " << newNode->_data << endl;
        *head = newNode;
        return;
    }
    while(currentNode->_next != nullptr)
    {
        currentNode = currentNode->_next;
    }
    Node* newNode = new Node();
    newNode->_data = data;
    newNode->_next = nullptr;
    currentNode->_next = newNode;
}

void deleteList(Node* head)
{
    Node* toBeDeleted = head;
    while(toBeDeleted != nullptr)
    {
        head = head->_next;
        // cout << "toBeDeleted: " << toBeDeleted << endl;
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
    // currentNode = head;
    // while(currentNode != nullptr)
    // {
    //     cout << currentNode << endl;
    //     currentNode = currentNode->_next;
    // }
}

void buildList(Node** head)
{
    int newNumber;
    cout << "Enter a number to add to the list (-999 to quit): ";
    cin >> newNumber;
    while (newNumber != -999)
    {
        appendList(head, newNumber);
        // cout << "*head: " << *head << endl;
        // cout << "DEBUG: " << "(*head)->_data: " << (*head)->_data << endl;
        // Node* newNode = new Node();
        // newNode->_data = newNumber;
        // newNode->_next = nullptr;

        // if(*head == nullptr)
        // {
        //     (*head) = newNode;
        // }
        // else
        // {
        //     Node* curNode = *head;
        //     while(curNode->_next != nullptr)
        //     {
        //         curNode = curNode->_next;
        //     }
        //     curNode->_next = newNode;
        // }
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
