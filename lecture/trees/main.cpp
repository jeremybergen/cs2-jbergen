#include <iostream>

using namespace std;

template <class T1>
class Node
{
    private:
    T1 _data;
    Node<T1>* _left;
    Node<T1>* _right;

    public:
    Node<T1>() {_left = nullptr; _right = nullptr;}
    void setData(T1 data) {_data = data;}
    void setLeft(Node<T1>* left) {_left = left;}
    void setRight(Node<T1>* right) {_right = right;}

    T1 getData() {return _data;}
    Node<T1>* getLeft() {return _left;}
    Node<T1>* getRight() {return _right;}
};

template <class T1>
class Tree
{
    private:
    Node<T1>* _root;
    Node<T1>* insertNode(T1, Node<T1>*);
    void inOrderPrint(Node<T1>*);
    void deleteTree(Node<T1>*);
    Node<T1>* removeNode(T1, Node<T1>*);
    Node<T1>* maxVal(Node<T1>*);

    public:
    Tree<T1>() {_root = nullptr;}
    ~Tree();
    void insert(T1);
    void inOrder();
    void remove(T1);
};

int main(int argc, char* argv[])
{
    Tree<int> myTree;

    // myTree.insert(42);
    // myTree.insert(15);
    // myTree.insert(90);
    // myTree.insert(366);
    // myTree.insert(365);
    // myTree.insert(16);
    myTree.insert(100);
    myTree.insert(42);
    myTree.insert(200);
    myTree.insert(15);
    myTree.insert(150);
    myTree.insert(300);
    myTree.insert(2);
    myTree.insert(23);
    myTree.insert(125);
    myTree.insert(175);
    myTree.insert(250);
    myTree.insert(9000);
    myTree.insert(160);

    myTree.inOrder();

    // cout << "Deleting 160" << endl;
    // myTree.remove(160);
    // cout << "Deleting 125" << endl;
    // myTree.remove(125);
    cout << "Deleting 42" << endl;
    myTree.remove(42);

    myTree.inOrder();
    return 0;
}

template <class T1>
Node<T1>* Tree<T1>::maxVal(Node<T1>* root)
{
    Node<T1>* largestNode = root;
    while(largestNode->getRight() != nullptr)
    {
        largestNode = largestNode->getRight();
    }
    return largestNode;
}

template <class T1>
Node<T1>* Tree<T1>::removeNode(T1 data, Node<T1>* root)
{
    if(root == nullptr) return nullptr;
    if(root->getData() > data)
    {
        root->setLeft(removeNode(data, root->getLeft()));
    }
    else if(root->getData() < data)
    {
        root->setRight(removeNode(data, root->getRight()));
    }
    else
    {
        if(root->getLeft() == root->getRight())
        {
            cout << "Deleting: " << root << endl;
            delete root;
            return nullptr;
        }
        if(root->getLeft() != nullptr)
        {
            // return root->getLeft();
            cout << "DEBUG: root->getLeft() != nullptr" << endl;
            Node<T1>* leftNode = root->getLeft();
            cout << "root: " << root << endl;
            delete root;
            return leftNode;
        }
        if(root->getRight() != nullptr)
        {
            // return root->getLeft();
            cout << "DEBUG: root->getRight() != nullptr" << endl;
            Node<T1>* rightNode = root->getRight();
            cout << "root: " << root << endl;
            delete root;
            return rightNode;
        }
        Node<T1>* largest = maxVal(root->getLeft());
        root->setData(largest->getData());
        removeNode(largest->getData(), root->getLeft());
    }

    return root;
}

template <class T1>
void Tree<T1>::remove(T1 data)
{
    _root = removeNode(data, _root);
}

template <class T1>
void Tree<T1>::deleteTree(Node<T1>* root)
{
    if(root == nullptr)
    {
        return;
    }
    deleteTree(root->getLeft());
    deleteTree(root->getRight());
    cout << "root: " << root << endl;
    delete root;
}

template <class T1>
Tree<T1>::~Tree()
{
    deleteTree(_root);
}

template <class T1>
void Tree<T1>::inOrderPrint(Node<T1>* root)
{
    if(root == nullptr)
    {
        return;
    }
    //visit left
    inOrderPrint(root->getLeft());
    //visit root
    cout << root->getData() << " ";
    //visit right
    inOrderPrint(root->getRight());
}

template <class T1>
void Tree<T1>::inOrder()
{
    inOrderPrint(_root);
    cout << endl;
}

template <class T1>
void Tree<T1>::insert(T1 data)
{
    // first value: insertNode(42, nullptr)
    // second value: insertNode(15, 0x1230);
    // third value: insertNode(90, 0x1230);
    // fourth value: insertNode(366, 0x1230);
    // fifth value: insertNode(365, 0x1230);
    _root = insertNode(data, _root);
}

template <class T1>
Node<T1>* Tree<T1>::insertNode(T1 data, Node<T1>* root)
{
    if(root == nullptr)
    {
        Node<T1>* newNode = new Node<T1>;
        newNode->setData(data);
        // cout << "newNode: " << newNode << endl;
        return newNode;
    }
    if(root->getData() > data)
    {
        // insertNode(15, nullptr)

        // insertNode(365, nullptr)
        root->setLeft(insertNode(data, root->getLeft()));
    }
    else
    {
        // insertNode(90, nullptr)
        // insertNode(366, 0x5230)
        // insertNode(366, nullptr)

        // insertNode(365, 0x5230)
        // insertNode(365, 0x1000)
        root->setRight(insertNode(data, root->getRight()));
    }
    return root;
    

    // if(_root == nullptr)
    // {
    //     _root = newNode;
    // }
    // else
    // {
    //     if(_root->getData() > data)
    //     {
    //         //go left
    //         // something = _root->getLeft();
    //         insertNode(data, root->getLeft());
    //     }
    //     else
    //     {
    //         //go right
    //         insertNode(data, root->getRight());
    //     }
    // }
}