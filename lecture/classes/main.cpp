#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    string _name;
    string _breed;
    int _age;
    int _numLegs;
    int *_newInt = new int;

public:
    // Constructor
    Dog();

    Dog(string, string, int);
    ~Dog();

    // Setters
    void setName(string name);
    void setBreed(string breed);
    void setAge(int age);
    void setNumLegs(int numLegs);

    // Getters
    string getName() { return _name; }
    string getBreed()
    {
        return _breed;
    }
    int getAge()
    {
        return _age;
    }
    int getNumLegs()
    {
        return _numLegs;
    }
};

void addDogs(Dog *[]);

int main(int argc, char *argv[])
{
    Dog *dogs[10] = {0};

    // for(int i = 0; i < 10; i++)
    // {
    addDogs(dogs);

    int counter = 0;
    while (dogs[counter] != nullptr)
    {
        cout << dogs[counter]->getName() << " is a " << dogs[counter]->getBreed()
             << ". He is " << dogs[counter]->getAge() << " years old and has "
             << dogs[counter]->getNumLegs() << " number of legs." << endl;
        counter++;
    }

    counter = 0;
    while (dogs[counter] != nullptr)
    {
        delete dogs[counter];
        counter++;
    }
    // break;
    // }
    // Dog* dog1 = new Dog;
    // Dog* dog2 = new Dog;
    // Dog* dog3 = new Dog;

    // dog1->setName("Novo");
    // dog1->setBreed("Husky");
    // dog1->setAge(5);
    // dog1->setNumLegs(4);

    // dog2->setName("Tyu");
    // dog2->setBreed("Husky");
    // dog2->setAge(4);
    // dog2->setNumLegs(4);

    // dog3->setName("Sora");
    // dog3->setBreed("Shiba-inu");
    // dog3->setAge(5);
    // dog3->setNumLegs(4);

    // cout << dog1->getName() << " is a " << dog1->getBreed()
    //      << ". He is " << dog1->getAge() << " years old and has "
    //      << dog1->getNumLegs() << " legs." << endl;

    // cout << dog2->getName() << " is a " << dog2->getBreed()
    //      << ". He is " << dog2->getAge() << " years old and has "
    //      << dog2->getNumLegs() << " legs." << endl;

    // cout << dog3->getName() << " is a " << dog3->getBreed()
    //      << ". He is " << dog3->getAge() << " years old and has "
    //      << dog3->getNumLegs() << " legs." << endl;

    return 0;
}

Dog::Dog()
{
    _name = "";
    _breed = "";
    _age = 0;
    _numLegs = 0;
}

Dog::Dog(string name, string breed, int age)
{
    _name = name;
    _breed = breed;
    _age = age;
    _numLegs = 4;
}
Dog::~Dog()
{
    // cout << "Calling destructor" << endl;
    delete _newInt;
}

void Dog::setName(string name) 
{
    _name = name;
}
void Dog::setBreed(string breed)
{
    _breed = breed;
}
void Dog::setAge(int age)
{
    _age = age;
}
void Dog::setNumLegs(int numLegs)
{
    _numLegs = numLegs;
}

void addDogs(Dog *dogs[])
{
    int numDogs;
    cout << "How many dogs? ";
    cin >> numDogs;

    for (int j = 0; j < numDogs; j++)
    {
        string name, breed, age;

        // dogs[j] = new Dog;
        cout << "What is the dog's name? ";
        cin >> name;
        // dogs[j]->setName(name);

        cout << "What is the dog's breed? ";
        cin >> breed;
        // dogs[j]->setBreed(breed);

        cout << "How old is the dog? ";
        cin >> age;
        // dogs[j]->setAge(stoi(age));

        dogs[j] = new Dog(name, breed, stoi(age));
        // string* newStr = new string("Hello World");
    }
}

// class MyClass
// {
//     private:
//         int num1;
//         int num2;

//     public:
//         // Setters
//         void setNum1(int n1)
//         {
//             // num1 = n1;
//             while (true)
//             {
//                 if(n1 < 1 || n1 > 20)
//                 {
//                     cout << "Number must be between 1 and 20: ";
//                     cin >> n1;
//                     continue;
//                 }

//                 break;
//             }
//             num1 = n1;
//         }
//         void setNum2(int n2)
//         {
//             num2 = n2;
//         }

//         // Getters
//         int getNum1()
//         {
//             return num1;
//         }
//         int getNum2()
//         {
//             return num2;
//         }
// };

// int main(int argc, char* argv[])
// {
//     MyClass cl1;

//     //won't work
//     // cl1.num1 = 42;
//     // cl1.num2 = 15;
//     cl1.setNum1(42);
//     cl1.setNum2(15);

//     cout << "num1: " << cl1.getNum1() << ", num2: " << cl1.getNum2() << endl;

//     return 0;
// }