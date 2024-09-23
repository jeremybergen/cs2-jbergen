#include <iostream>

using namespace std;

// int addNums(int, int);
// float addNums(float, float);
// float addNums(float, int);
// float addNums(int, float);

// class SomeClass
// {
//     private:
//     int _number1;

//     public:
//     SomeClass(int = 0);
//     int getNumber1();
//     SomeClass operator+(SomeClass&);
// };

// template <typename T1, typename T2>
// T1 addNums(T1, T2);

template <typename T1>
class MyClass
{
    private:
    T1 _id;

    public:
    void setId(const T1&);
    T1 getId();
};

class TmpClass
{
    private:
    int _id;

    public:
    int getId();
    void setId(const int&);
};

int main(int argc, char* argv[])
{
    // MyClass<int> c1;
    // MyClass<string> c2;
    // MyClass<char> c3;
    MyClass<TmpClass> c4;
    TmpClass tmp1;

    // c1.setId(42);
    // c2.setId("Jeremy");
    // c3.setId('J');
    
    cout << "DEBUG: &tmp1: " << &tmp1 << endl;
    c4.setId(tmp1);
    tmp1.setId(42);
    

    // cout << "c1.getId(): " << c1.getId() << endl;
    // cout << "c2.getId(): " << c2.getId() << endl;
    // cout << "c3.getId(): " << c3.getId() << endl;
    cout << "c4.getId().getId(): " 
         << c4.getId().getId() << endl;
    // int numbers[10];
    // int* ptr1;

    // for(int i = 0; i < 10; i++)
    // {
    //     numbers[i] = i*2;
    // }

    // ptr1 = &numbers[0];
    // ptr1 = numbers;
    // cout << "numbers[5]: " << numbers[5] << endl;
    // cout << "*(numbers+5): " << *(numbers+5) << endl;
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "*(numbers+" << i << "): "
    //          << *(numbers+i) << endl;
    //          //  numbers[i]
    //     // cout << "*(ptr1+" << i << "): " 
    //     //      << *(ptr1+i) << endl;
    //     // cout << "*ptr1: " << *ptr1 << endl;
    //     // ptr1++;
    //     // cout << "numbers[" << i << "]: " 
    //     //      << numbers[i] << endl;
    // }
    // float num1;
    // float num2;

    // num1 = 42.15;
    // num2 = 15.23;

    // SomeClass num1(123);
    // SomeClass num2(821);

    // SomeClass tmpClass;
    // tmpClass = addNums<SomeClass, SomeClass>(num1, num2);
    // cout << tmpClass.getNumber1() << endl;
    // cout << (num1 + num2).getNumber1() << endl;

    // cout << num1.getNumber1() << " + " << num2.getNumber1() << " = "
    //      << addNums<SomeClass, SomeClass>(num1, num2).getNumber1() << endl;

         // addNums<SomeClass, SomeClass>(num1, num2).getNumber1()
         // SomeClass <tmpClassName>
         // SomeClass tmpClass = addNums<SomeClass, SomeClass>(num1, num2)
         // cout << tmpClass.getNumber1();
    return 0;
}

int TmpClass::getId()
{
    return _id;
}
void TmpClass::setId(const int& id)
{
    cout << "DEBUG: this: " << this << endl;
    _id = id;
}


template <typename T1>
void MyClass<T1>::setId(const T1& id)
{
    cout << "DEBUG: &id: " << &id << endl;
    _id = id;
    // cout << "DEBUG _id: " << _id << endl;
}

template <typename T1>
T1 MyClass<T1>::getId()
{
    return _id;
}

// SomeClass SomeClass::operator+(SomeClass& rightSide)
// {
//     SomeClass tmpClass(this->_number1 + rightSide.getNumber1());

//     return tmpClass;
// }

// int SomeClass::getNumber1()
// {
//     return _number1;
// }

// SomeClass::SomeClass(int number1)
// {
//     _number1 = number1;
// }

// template <typename T1, typename T2>
// T1 addNums(T1 n1, T2 n2)
// {
//     T1 sum;
//     sum = n1 + n2;
//     return sum;
//     // return n1 + n2;
// }

// int addNums(int n1, int n2)
// {
//     int sum;
//     sum = n1 + n2;
//     return sum;
// }

// float addNums(float n1, float n2)
// {
//     return n1 + n2;
// }

// float addNums(float n1, int n2)
// {
//     return n1 + n2;
// }

// float addNums(int n1, float n2)
// {
//     return n1 + n2;
// }