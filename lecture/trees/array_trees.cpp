#include <iostream>
#include <vector>

using namespace std;

template <class T1>
class Tree
{
    private:
    vector<T1> _tree;
    void insertVal(T1 data, size_t root)
    {
        if(root >= _tree.size())
        {
            _tree.resize(root+1, -1);
        }

        if(_tree.at(root) == -1)
        {
            _tree.at(root) = data;
            return;
        }
        if(_tree.at(root) > data)
        {
            insertVal(data, 2*root + 1);
        }
        else if(_tree.at(root) < data)
        {
            insertVal(data, 2*root + 2);
        }
    }
    void inorderPrint(size_t root)
    {
        if(root >= _tree.size() || _tree.at(root) == -1) return;

        inorderPrint(2*root + 1);
        cout << _tree.at(root) <<  " ";
        inorderPrint(2*root + 2);
    }

    public:
    void insert(T1 data)
    {
        insertVal(data, 0);
    }
    void printTree()
    {
        for(auto elem : _tree)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    void inorder()
    {
        inorderPrint(0);
        cout << endl;
    }
};

int main(int argc, char* argv[])
{
    Tree<int> myTree;
    int input = 0;

    while(input != -1)
    {
        cout << "Enter a number to insert, -1 to quit: ";
        cin >> input;
        myTree.insert(input);
    }

    cout << "Tree: " << endl;
    myTree.inorder();
    return 0;
}