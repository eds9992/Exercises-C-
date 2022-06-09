#include <iostream>
//#include <cstdlib>
#include <string>

using namespace std;

#ifndef HASH_H
#define HASH_H


class hash
{
private:
    int tableSize;

public:
    hash();
    int Hash(string key);
    //virtual ~hash();

/*protected:*/

};

#endif // HASH_H
