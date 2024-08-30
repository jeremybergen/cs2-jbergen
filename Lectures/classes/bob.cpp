#include "bob.h"

bob::Bob::Bob()
{
    _name = "Bob";
}

std::string bob::Bob::getName()
{
    return _name;
}