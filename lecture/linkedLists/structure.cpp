#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _next;
    Node* _prev;
};

void printList(Node*);
void insertNode(Node**, int);
void addNum(Node**, int);
void deleteNode(Node**, int);
void delNum(Node**, int);
void deleteList(Node*);

int main()
{
    return 0;
}