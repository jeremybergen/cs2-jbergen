#include <iostream>

using namespace std;

struct Node
{
    int _data;
    Node* _left = nullptr;
    Node* _right = nullptr;
};

void insert(Node**, int);
void inorder(Node*);
void freeTree(Node*);

int main(int argc, char* argv[])
{
    Node* root = nullptr;

    // cout << "Inserting 42" << endl;
    insert(&root, 42);
    // cout << "Inserting 15" << endl;
    insert(&root, 15);
    // cout << "Inserting 23" << endl;
    insert(&root, 23);
    insert(&root, 51);

    cout << "Printing tree" << endl;
    inorder(root);
    cout << endl;

    freeTree(root);
    return 0;
}

void freeTree(Node* root)
{
    if(root == nullptr) return;

    freeTree(root->_left);
    freeTree(root->_right);
    cout << "Deleting: " << root << endl;
    delete root;
}

void inorder(Node* root)
{
    if(root == nullptr) return;

    inorder(root->_left);
    cout << root->_data << " ";
    inorder(root->_right);
}

void insert(Node** root, int data)
{
    // cout << "root: " << root << endl;
    if(*root == nullptr)
    {
        Node* newNode = new Node;
        cout << "Creating: " << newNode << endl;
        newNode->_data = data;
        *root = newNode;
        return;
    }

    // Binary Search Tree
    if((*root)->_data > data)
    {
        insert(&((*root)->_left), data);
    }
    else
    {
        insert(&((*root)->_right), data);
    }

    // Binary tree
    // if((*root)->_left == nullptr)
    // {
    //     insert(&((*root)->_left), data);
    // }
    // else
    // {
    //     insert(&((*root)->_right), data);
    // }
}