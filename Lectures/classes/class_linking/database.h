#pragma once
#include <string>
#include "movies.h"

using namespace std;

namespace databases
{
    class Database
    {
        private:
            string _db_name;
            movies::Movie _movies[100];

        public:
            void printMovies();
    };
}