#pragma once
#include <string>

using namespace std;

namespace person
{
    class Person
    {
        private:
        string _name;
        int _age;
        int _height;

        protected:
        string getName();
        int getAge();
        int getHeight();

        public:
        Person(string = "", int = 42, int = 42);

    };
}