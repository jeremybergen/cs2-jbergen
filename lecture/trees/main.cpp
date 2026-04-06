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
    Node(T1 data, Node<T1>* left = nullptr, Node<T1>* right = nullptr)
    {
        _data = data;
        _left = left;
        _right = right;
    }
    T1 getData() { return _data; }
    Node<T1>* getLeft() { return _left; }
    Node<T1>* getRight() { return _right; }
    void setLeft(Node<T1>* left) { _left = left; }
    void setRight(Node<T1>* right) { _right = right; }
    void setData(T1 data) { _data = data; }
};

template <class T1>
class Tree
{
    private:
    Node<T1>* _root;
    Node<T1>* insert(Node<T1>* newRoot, T1 data);
    void print(Node<T1>* root);
    Node<T1>* remove(Node<T1>* root, T1 data);
    Node<T1>* maxVal(Node<T1>* root);

    public:
    Tree() { _root = nullptr; }
    void insert(T1 data);
    Node<T1>* getRoot() { return _root; }
    void print();
    void remove(T1 data);
};

class MyClass
{
    private:
    int _data;

    public:
    MyClass(int data) : _data(data) {}
    bool operator<(const MyClass rhs)
    {
        return this->_data < rhs._data;
    }

    friend ostream& operator<<(ostream& os, const MyClass mc1)
    {
        os << mc1._data;
        return os;
    }
};

int main(int argc, char* argv[])
{
    Tree<MyClass> myTree;
    string toBeDeleted;

    myTree.insert(MyClass(42));
    myTree.insert(MyClass(15));
    myTree.insert(MyClass(23));
    myTree.insert(MyClass(-2));
    // myTree.insert(8);
    // myTree.insert("9000");
    // myTree.insert("69");
    // myTree.insert("100");
    // myTree.insert("10000");

    myTree.print();
    cout << endl;

    // cout << "Enter number to delete: ";
    // cin >> toBeDeleted;
    // myTree.remove(toBeDeleted);
    // // cout << "after remove" << endl;

    // myTree.print();
    // cout << endl;

    return 0;
}

template <class T1>
void Tree<T1>::remove(T1 data)
{
    _root = remove(_root, data);
}

template <class T1>
Node<T1>* Tree<T1>::remove(Node<T1>* root, T1 data)
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
    else
    {
        //The data exists at this "root"
        if(root->getLeft() == nullptr)
        {
            // cout << "DEBUG: inside root->getLeft() == nullptr" << endl;
            Node<T1>* toReturn = root->getRight();
            delete root;
            return toReturn;
        }
        else if(root->getRight() == nullptr)
        {
            Node<T1>* toReturn = root->getLeft();
            delete root;
            return toReturn;
        }
        else
        {
            //Both left and right has a node
            // cout << "DEBUG: " << root << endl;
            Node<T1>* largestNode = maxVal(root->getLeft());
            // cout << "DEBUG: largestNode->getData(): " << largestNode->getData() << endl;

            root->setData(largestNode->getData());
            root->setLeft(remove(root->getLeft(), largestNode->getData()));
            // largestNode->setRight(root->getRight());
            // largestNode->setLeft(root->getLeft());
            // if(root == _root) _root = largestNode; THE WRONG WAY!!!!
            // delete root;
            // cout << "After updating node" << endl;
            // return largestNode;
            return root;
        }
    }
    return root;
}

template <class T1>
Node<T1>* Tree<T1>::maxVal(Node<T1>* root)
{
    Node<T1>* curNode = root;
    // Node<T1>* parent = root;
    while(curNode->getRight() != nullptr)
    {
        // parent = curNode;
        curNode = curNode->getRight();
    }
    // parent->setRight(nullptr);
    return curNode;
}

template <class T1>
void Tree<T1>::print()
{
    // cout << "_root: " << _root->getData() << endl;
    print(_root);
}

template <class T1>
void Tree<T1>::print(Node<T1>* root)
{
    //in order traversal
    if(root == nullptr) return;
    
    print(root->getLeft());
    cout << root->getData() << " ";
    print(root->getRight());
}

template <class T1>
void Tree<T1>::insert(T1 data)
{
    // cout << "Inserting " << data << endl;
    _root = insert(_root, data);
    // cout << "_root: " << _root << endl;
}

template <class T1>
Node<T1>* Tree<T1>::insert(Node<T1>* newRoot, T1 data)
{
    
    if(newRoot == nullptr)
    {
        // cout << "newRoot is a nullptr" << endl;
        Node<T1>* newNode = new Node(data);
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
