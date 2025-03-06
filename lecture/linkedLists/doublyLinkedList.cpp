#include <iostream>

using namespace std;

template <typename T1>
struct Node
{
    T1 _data;
    Node<T1>* _next;
    Node<T1>* _prev;
};

class MyClass
{
    private:
    int _someNumber;

    public:
    int getSomeNumber()
    {
        return _someNumber;
    }

    void setSomeNumber(int n1)
    {
        _someNumber = n1;
    }

    friend ostream& operator<<(ostream& os, const MyClass& mc)
    {
        os << mc._someNumber;
        return os;
    }

};

template <typename T1>
void addNode(Node<T1>**, Node<T1>**);

template <typename T1>
void deleteList(Node<T1>*);

int main(int argc, char* argv[])
{
    Node<MyClass>* head = nullptr;
    Node<MyClass>* tail = nullptr;

    addNode<MyClass>(&head, &tail);
    addNode<MyClass>(&head, &tail);

    cout << head->_data.getSomeNumber() << endl;

    // head = tmpNode;
    // tail = tmpNode;
    deleteList<MyClass>(head);

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
    MyClass* newClass = new MyClass;
    cout << "tmpNode: " << tmpNode << endl;

    cout << "Enter data: ";
    // getline(cin, tmpNode->_data);
    tmpNode->_data = *newClass;
    int tempnum;
    cin >> tempnum;
    tmpNode->_data.setSomeNumber(tempnum);
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