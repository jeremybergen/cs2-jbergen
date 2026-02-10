#pragma once
#include <string>

using namespace std;

namespace person
{
    class Person
    {
        private: string _name;
        private: int _id;

        public:
            Person(string name, int id)
            {
                _name = name;
                _id = id;
            }

        protected:
            string getName()
            {
                return _name;
            }
            int getId()
            {
                return _id;
            }

    };
}
