#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _left;
    Node* _right;
};

void printTree(Node* root);

int main(int argc, char* argv[])
{
    Node* root = nullptr;

    root = new Node({42, nullptr, nullptr});
    root->_left = new Node({23, nullptr, nullptr});
    root->_left->_left = new Node({15, nullptr, nullptr});

    printTree(root);
    return 0;
}

void printTree(Node* root)
{
    if(root == nullptr) return;

    printTree(root->_left);
    cout << root->_data << " ";
    printTree(root->_right);
}