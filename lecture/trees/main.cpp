#include <iostream>

using namespace std;

class Node
{
    private:
    int _data;
    Node* _left;
    Node* _right;

    public:
    Node(int data = 0, Node* left = nullptr, Node* right = nullptr)
    {
        _data = data;
        _left = left;
        _right = right;
    }
    int getData() { return _data; }
    Node* getLeft() { return _left; }
    Node* getRight() { return _right; }
    void setLeft(Node* left) { _left = left; }
    void setRight(Node* right) { _right = right; }
};

class Tree
{
    private:
    Node* _root;
    Node* insert(Node* newRoot, int data);
    void print(Node* root);
    Node* remove(Node* root, int data);

    public:
    Tree() { _root = nullptr; }
    void insert(int data);
    Node* getRoot() { return _root; }
    void print();
    void remove(int data);
};

int main(int argc, char* argv[])
{
    Tree myTree;
    int toBeDeleted;

    myTree.insert(42);
    myTree.insert(15);
    myTree.insert(23);
    myTree.insert(-2);
    myTree.insert(8);
    myTree.insert(9000);
    myTree.insert(69);

    myTree.print();
    cout << endl;

    cout << "Enter number to delete: ";
    cin >> toBeDeleted;
    myTree.remove(toBeDeleted);

    return 0;
}

void Tree::remove(int data)
{
    remove(_root, data);
}

Node* remove(Node* root, int data)
{
    if(root == nullptr) return root;
    if(data < root->getData())
    {
        root->setLeft(remove(root->getLeft(), data));
    }
    else if(data > root->getData())
    {
        root->setRight(remove(root->getRight(), data));
    }
}

void Tree::print()
{
    print(_root);
}

void Tree::print(Node* root)
{
    //in order traversal
    if(root == nullptr) return;
    
    print(root->getLeft());
    cout << root->getData() << " ";
    print(root->getRight());
}

void Tree::insert(int data)
{
    // cout << "Inserting " << data << endl;
    _root = insert(_root, data);
}

Node* Tree::insert(Node* newRoot, int data)
{
    
    if(newRoot == nullptr)
    {
        // cout << "newRoot is a nullptr" << endl;
        Node* newNode = new Node(data);
        // newRoot = newNode;
        return newNode;
    }

    if(data < newRoot->getData())
    {
        //go left
        newRoot->setLeft(insert(newRoot->getLeft(), data));
    }
    else
    {
        //go right
        newRoot->setRight(insert(newRoot->getRight(), data));
    }
    return newRoot;
}

void print()
{
    
}