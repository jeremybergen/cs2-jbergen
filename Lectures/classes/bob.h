#pragma once
#include <string>

using namespace std;

namespace bob
{
    class Bob
    {
        private:
            std::string _name;
        public:
            Bob();
            std::string getName();
    };
}