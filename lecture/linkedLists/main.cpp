#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
};

int main(int argc, char* argv[])
{
    // Node node1;
    Node* head = nullptr;

    for(int i = 0; i < 10; i++)
    {
        Node* tmpNode = new Node;
        cout << "Enter a number: ";
        cin >> tmpNode->_data;
        tmpNode->_next = nullptr;
        if(head == nullptr) head = tmpNode;
        else
        {
            Node* currentNode = head;
            while(currentNode->_next != nullptr)
            {
                currentNode = currentNode->_next;
            }
            currentNode->_next = tmpNode;
        }
    }
    // Node node2;
    // Node node3;

    // node1._data = 42;
    // node2._data = 15;
    // node3._data = 23;

    // node1._next = &node2;
    // node2._next = &node3;
    // node3._next = nullptr;

    
    while(head != nullptr)
    {
        cout << "head->_data: " << head->_data << endl;
        head = head->_next;
    }
    
    // head = &node2; wrong way
    // head = node1._next; also wrong way
    // head = head->_next;
    // cout << "head->_data: " << head->_data << endl;
    // head = head->_next;
    // cout << "head->_data: " << head->_data << endl;
    // head = head->_next;
    // cout << "head->_data: " << head->_data << endl;
    return 0;
}