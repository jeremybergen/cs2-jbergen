#include "database.h"
#include <iostream>

using namespace std;

void databases::Database::printMovies()
{
    for(int i = 0; i < 1; i++)
    {
        cout << _movies[i].getId() << endl;
    }
}