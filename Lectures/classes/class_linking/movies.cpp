#include "movies.h"

movies::Movie::Movie()
{
    _id = 42;
}

int movies::Movie::getId()
{
    return _id;
}