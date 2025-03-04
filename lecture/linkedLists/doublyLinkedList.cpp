#include <iostream>

using namespace std;

template <typename T1>
struct Node
{
    T1 _data;
    Node<T1>* _next;
    Node<T1>* _prev;
};

template <typename T1>
void addNode(Node<T1>**, Node<T1>**);

template <typename T1>
void deleteList(Node<T1>*);

int main(int argc, char* argv[])
{
    Node<float>* head = nullptr;
    Node<float>* tail = nullptr;

    addNode<float>(&head, &tail);
    addNode<float>(&head, &tail);

    cout << head->_data << endl;

    // head = tmpNode;
    // tail = tmpNode;
    deleteList<float>(head);

    return 0;
}

template <typename T1>
void deleteList(Node<T1>* head)
{
    Node<T1>* toBeDeleted = head;
    while(toBeDeleted != nullptr)
    {
        head = head->_next;
        cout << "toBeDeleted: " << toBeDeleted << endl;
        delete toBeDeleted;
        toBeDeleted = head;
    }
}

template <typename T1>
void addNode(Node<T1>** head, Node<T1>** tail)
{
    Node<T1>* tmpNode = new Node<T1>;
    cout << "tmpNode: " << tmpNode << endl;

    cout << "Enter data: ";
    // getline(cin, tmpNode->_data);
    cin >> tmpNode->_data;
    // tmpNode->_data = "Jeremy";
    tmpNode->_next = nullptr;
    tmpNode->_prev = nullptr;

    if(*head == nullptr && *tail == nullptr)
    {
        *head = tmpNode;
        *tail = tmpNode;
    }
    (*tail)->_next = tmpNode;
    tmpNode->_prev = *tail;
    *tail = tmpNode;
}