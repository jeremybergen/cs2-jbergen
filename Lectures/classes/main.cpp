#include <iostream>
#include <string>

using namespace std;

class MyClass
{
private:
    string _fName;
    string _lName;
    int _age;
    int* heapNum = new int;

public:
    // class constructor
    MyClass()
    {
        cout << "Creating instance of MyClass" << endl;
        _fName = "";
        _lName = "";
        _age = 42;
    }
    MyClass(string fName, string lName, int age)
    {
        setfName(fName);
        setlName(lName);
        setAge(age);
    }

    ~MyClass()
    {
        cout << "Calling destuctor" << endl;
        delete heapNum;
    }

    string getfName()
    {
        return _fName;
    }
    string getlName()
    {
        return _lName;
    }
    int getAge()
    {
        return _age;
    }

    void setfName(string fName)
    {
        _fName = fName;
    }
    void setlName(string lName)
    {
        _lName = lName;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 151)
        {
            cout << "Age is outside of the range" << endl;
        }
        else
        {
            _age = age;
        }
    }

    void printInfo()
    {
        cout << "Hello " << _fName << " " << _lName
             << ". You are " << _age << " years old." << endl;
    }
};

int main(int argc, char *argv[])
{
    string tmpStr;
    MyClass* classinst1 = new MyClass("Jeremy", "Bergen", 200);
    MyClass* classinst2 = new MyClass;

    // int* myArray = new int[5]{1, 2, 3, 4, 5};

    // classinst1->setfName("Jeremy");
    // classinst1->setlName("Bergen");
    // classinst1->setAge(200);

    classinst2->setfName("Bob");
    classinst2->setlName("Burger");
    classinst2->setAge(200);

    classinst1->printInfo();
    classinst2->printInfo();
    // MyClass classInstance1;
    // MyClass classInstance2;

    // classInstance1.setfName("Jeremy");
    // classInstance1.setlName("Bergen");
    // classInstance1.setAge(200);

    // cout << "What is the first name? ";
    // getline(cin, tmpStr);
    // classInstance2.setfName(tmpStr);

    // classInstance1.printInfo();
    // classInstance2.printInfo();

    // cout << "Hello "
    //      << classInstance1.getfName() << " "
    //      << classInstance1.getlName()
    //      << " you are " << classInstance1.getAge()
    //      << " years old." << endl;

    delete classinst1;
    delete classinst2;
    return 0;
}