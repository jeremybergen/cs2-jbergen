#pragma once
#include <string>

using namespace std;

namespace movies
{
    class Movie
    {
        private:
        int _id;
        string _title;
        int* myNumber = new int;

        public:
        Movie();
        Movie(int, string);
        ~Movie();

        //getters
        int getId();
        string getTitle();
        //setters
        void setId(int);
        void setTitle(string);
    };
}