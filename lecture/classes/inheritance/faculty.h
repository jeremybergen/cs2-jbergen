#pragma once
#include "person.h"
#include <cstdio>

namespace person
{
    class Faculty : public Person
    {
        private:
            string _dept;
        
        public:
            // Faculty()
            // {
            //     //default construtor
            // }
            Faculty(string name, int id, string dept) : Person(name, id)
            {
                // Person(name, id);
                // _name = name;
                // _id = id;
                _dept = dept;
            }
            string printVals()
            {
                char buffer[100];
                sprintf(buffer, "%s has an id of: %d\nalso works in %s department\n", getName().c_str(), this->getId(), _dept.c_str());
                return buffer;
            }
    };
}
