#include <iostream>
#include "database.h"

using namespace std;

int main(int argc, char* argv[])
{
    databases::Database database1;

    database1.printMovies();
    return 0;
}