#include <iostream>
#include <string>

using namespace std;

class MyClass
{
    private:
        string _fName = "";
        string _lName = "";
        int _age = 0;

    public:
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
};

int main(int argc, char* argv[])
{
    string tmpStr;
    MyClass classInstance1;
    MyClass classInstance2;

    classInstance1.setfName("Jeremy");
    classInstance1.setlName("Bergen");
    classInstance1.setAge(200);

    cout << "What is the first name? ";
    getline(cin, tmpStr);
    classInstance2.setfName(tmpStr);

    cout << "Hello " 
         << classInstance1.getfName() << " " 
         << classInstance1.getlName()
         << " you are " << classInstance1.getAge() 
         << " years old." << endl;
    return 0;
}