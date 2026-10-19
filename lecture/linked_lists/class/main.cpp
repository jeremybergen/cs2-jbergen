#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char* argv[])
{
    List<int> l1;

    l1.insertNode(42);
    l1.insertNode(15);
    l1.insertNode(23);

    cout << l1 << endl;
    return 0;
}