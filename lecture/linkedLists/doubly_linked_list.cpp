#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
    Node* _prev;
};

void printList(Node*);
void printRevList(Node*);
void insertNode(Node**, Node**, int);
void deleteNode(Node**, Node**, int);

int main(int argc, char* argv[])
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int inData = 0;

    while(inData != -999)
    {
        cout << "Enter a number, -999 to quit: ";
        cin >> inData;
        if(inData == -999) break;
        insertNode(&head, &tail, inData);
    }

    printList(head);
    printRevList(tail);

    inData = 0;
    while(inData != -999)
    {
        cout << "Enter a number to delete, -999 to quit: ";
        cin >> inData;
        if(inData == -999) break;
        deleteNode(&head, &tail, inData);
        printList(head);
        printRevList(tail);
    }

    return 0;
}

void deleteNode(Node** head, Node** tail, int data)
{
    if(*head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node* prevNode = *head;
    while(prevNode->_next != nullptr && prevNode->_next->_data < data)
    {
        prevNode = prevNode->_next;
    }
    Node* toBeDeleted = prevNode->_next;
    if(toBeDeleted == nullptr)
    {
        // Only one node in list
        if(prevNode->_data == data)
        {
            cout << "prevNode: " << prevNode << endl;
            delete prevNode;
            *head = nullptr;
        }
        else
        {
            cout << "Number not found" << endl;
            
        }
        // return;
    }
    else
    {
        // Many nodes checking data
        if(prevNode->_data == data)
        {
            // we are at the head
            *head = prevNode->_next;
            cout << "prevNode: " << prevNode << endl;
            delete prevNode;
            return;
        }
        if(toBeDeleted->_data == data)
        {
            prevNode->_next = toBeDeleted->_next;
            cout << "toBeDeleted: " << toBeDeleted << endl;
            delete toBeDeleted;
        }
        else
        {
            cout << "Number not found" << endl;
        }
    }
    
    // delete toBeDeleted;
}

void insertNode(Node** head, Node** tail, int inData)
{
    Node* newNode = new Node{inData, nullptr, nullptr};
    // cout << "DEUBG: " << newNode->_data << endl;
    //list is empty
    // cout << "*head: " << *head << endl;
    if (*head == nullptr)
    {
        *head = newNode;
        *tail = newNode;
        return;
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
    // cout << "curNode: " << curNode << endl;

    Node* oldCurNodeNext = curNode->_next;

    if(curNode->_data > inData)
    {
        // This is a new head
        *head = newNode;
        newNode->_next = curNode;
        curNode->_prev = newNode;
    }
    else
    {
        // We are inserting the node after curNode
        if(curNode->_next == nullptr)
        {
            // at the end of the list
            curNode->_next = newNode;
            newNode->_prev = curNode;
            *tail = newNode;
        }
        else
        {
            // not at the end of the list
            newNode->_next = curNode->_next;
            curNode->_next = newNode;
            newNode->_prev = curNode;
            // These are the same...
            // newNode->_next->_prev = newNode
            oldCurNodeNext->_prev = newNode;
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

void printRevList(Node* tail)
{
    while(tail != nullptr)
    {
        cout << tail->_data << " ";
        tail = tail->_prev;
    }
    cout << endl;
}
