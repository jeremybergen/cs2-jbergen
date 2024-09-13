#include "movies.h"

movies::Movie::Movie()
{
    _id = 0;
    _title = "";
}
movies::Movie::Movie(int id, string title)
{
    _id = id;
    _title = title;
}