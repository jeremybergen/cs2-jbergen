#include <iostream>

using namespace std;

template <typename T1>
struct Node
{
    T1 data;
    Node<T1>* prev;
    Node<T1>* next;
};

template <typename T1>
struct List
{
    Node<T1>* head;
    Node<T1>* tail;
};

template <typename T1>
void printList(List<T1>*);

template <typename T1>
void printRevList(List<T1>*);
// void appendList(Node**, int);
template <typename T1>
void insertList(List<T1>*, T1);

template <typename T1>
void deleteFromList(List<T1>*);

template <typename T1>
void emptyList(List<T1>*);

int main(int argc, char* argv[])
{
    List<string>* list1 = new List<string>;
    list1->head = nullptr;
    list1->tail = nullptr;
    // Node* list1 = nullptr;
    // Node* listTail1 = nullptr;

    unsigned int listSize;

    cout << "How many numbers do you want to input? ";
    cin >> listSize;

    for(unsigned int i = 0; i < listSize; i++)
    {
        string newNumber;

        cout << "Enter a number: ";
        cin >> newNumber;

        insertList(list1, newNumber);

        cout << "Printing List: " << endl;
        printList(list1);
    }

    cout << "Printing Complete List: " << endl;
    printList(list1);
    cout << "Printing Reverse List: " << endl;
    printRevList(list1);

    // deleteFromList(&list1);
    // cout << "Printing after delete: " << endl;
    // printList(list1);

    emptyList(list1);
    delete list1;
    return 0;
}

template <typename T1>
void insertList(List<T1>* list1, T1 newData)
{
    Node<T1>* newNode = new Node<T1>;
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    // list1 is empty
    // if(*list1 == nullptr)
    if(list1->head == nullptr && list1->tail == nullptr)
    {
        list1->head = newNode;
        list1->tail = newNode;
    }
    else
    {
        //list1 not empty
        Node<T1>* curNode = list1->head;
        while(curNode->next != nullptr && curNode->next->data < newData)
        {
            curNode = curNode->next;
        }
        if(curNode->data > newData)
        {
            newNode->next = curNode;
            curNode->prev = newNode;
            // newNode->next->prev = newNode;
            list1->head = newNode;
        }
        else
        {
            newNode->next = curNode->next;
            newNode->prev = curNode;
            if(curNode->next != nullptr)
            {
                curNode->next->prev = newNode;
            }
            curNode->next = newNode;

            if(newNode->next == nullptr)
            {
                list1->tail = newNode;
            }
        }
    }
}

// void deleteFromList(List* list1)
// {
//     int valToDelete;

//     cout << "Enter the number to delete: ";
//     cin >> valToDelete;

//     Node* curNode = list1->head;
//     if(curNode->data == valToDelete)
//     {
//         Node* nodeToDelete = curNode;
//         list1 = curNode->next;
//         // head->next = nodeToDelete->next;
//         // or head->next = head->next->next;
//         delete nodeToDelete;
//         return;
//     }
//     while((curNode->next != nullptr && curNode->next->data != valToDelete))
//     {
//         curNode = curNode->next;
//     }
//     if(curNode->next != nullptr)
//     {
//         Node* nodeToDelete = curNode->next;
//         curNode->next = nodeToDelete->next;
//         // or head->next = head->next->next;
//         delete nodeToDelete;
//     }
//     else
//     {
//         cout << "Node not found" << endl;
//     }
// }

template <typename T1>
void emptyList(List<T1>* list1)
{
    Node<T1>* head = list1->head;
    while(head != nullptr)
    {
        Node<T1>* curNode = head;
        head = head->next;
        delete curNode;
    }
}

template <typename T1>
void printList(List<T1>* linkedList)
{
    Node<T1>* head = linkedList->head;
    while(head != nullptr)
    {
        // cout << "head->data: " << head->data << endl;
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

template <typename T1>
void printRevList(List<T1>* linkedList)
{
    Node<T1>* tail = linkedList->tail;
    while(tail != nullptr)
    {
        // cout << "head->data: " << head->data << endl;
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}
