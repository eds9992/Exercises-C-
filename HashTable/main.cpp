#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.h"

using namespace std;

int main()
{
    int index;
    hash hObj;

    index = hObj.Hash("Eric");

    cout << "index = " << index << endl;
    return 0;
}
