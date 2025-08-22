#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string fName;
    string lName;
    int age;
};

int main(int argc, char* argv[])
{
    int inputNumber = 0;
    unsigned int arrSize;

    cout << "How many numbers do you want? ";
    cin >> arrSize;

    int* numbers[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        numbers[i] = nullptr;
    }

    int counter = 0;
    while(inputNumber != -999)
    {
        cout << "Enter a number, -999 to exit: ";
        cin >> inputNumber;
        if(inputNumber != -999)
        {
            numbers[counter] = new int(inputNumber);
        }
        counter++;
    }

    for(int i = 0; i < arrSize; i++)
    {
        if(numbers[i] == nullptr) break;
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete[] numbers;

    // int num1;
    // float f1;
    // void* ptr1 = nullptr;

    // num1 = 42;

    // ptr1 = &num1;
    // *((int*)ptr1) = 43;
    // cout << "DEBUG: " << *((int*)ptr1) << endl;

    // ptr1 = &f1;
    // *((float*) ptr1) = 123.321;

    // cout << "DEBUG: " << *((float*) ptr1) << endl;
    

    // Person* people[3];

    // for(int i = 0; i < 3; i++)
    // {  
    //     people[i] = new Person;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "Enter a name: ";
    //     cin >> people[i]->fName >> people[i]->lName;
    //     cout << "Enter an age: ";
    //     cin >> people[i]->age;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "DEBUG: " << people[i]->fName << ", " 
    //          << people[i]->lName << ", " 
    //          << people[i]->age << endl;
    // }

    // Person* ptr1 = new Person;

    // Person* ptr2;
    // ptr2 = new Person;
    // int num1;
    // int* heapNum1 = new int;

    // num1 = 42;
    // *heapNum1 = 42;
    
    // Person people[3];

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "Enter a name: ";
    //     cin >> people[i].fName >> people[i].lName;

    //     cout << "Enter an age: ";
    //     cin >> people[i].age;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     cout << "DEBUG: " << people[i].fName << ", " 
    //          << people[i].lName << ", " 
    //          << people[i].age << endl;
    // }
    // delete heapNum1;
    // delete ptr1;
    // delete ptr2;
    // delete[] people;
    
    // for(int i = 0; i < 3; i++)
    // {
    //     delete people[i];
    // }
    return 0;
}