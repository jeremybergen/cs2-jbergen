#pragma once
#include <string>

using namespace std;

namespace people
{
    class Person
    {
        private:
            std::string _fName;
            string _lName;
            int _age;

        public:
            /// @brief Constructor for Person
            /// @param  fName first name
            /// @param  lName last name
            /// @param  age age
            Person(string, string, int);

            string getFName();
            string getLName();
            int getAge();

            void setFName(string);
            void setLName(string);
            void setAge(int);
    };
}