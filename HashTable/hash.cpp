#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.h"

using namespace std;

hash::hash()
{
    tableSize = 100;
}

int hash::Hash(string key)
{
    int hash = 0;
    int index;
    //int sum = 0;

    /*for(index = 0; index < key.length(); ++index)
    {
        cout << "key[" << index << "]" << ": " << key[index]
             << " = " << (int)key[index] << endl; //Outputs ASCII value for each letter, no matter the length of the key
        sum = sum + (int)key[index];
    }*/
    for(int i = 0; i < key.length(); ++i)
    {
        hash = hash + (int)key[i];
        cout << "hash = " << hash << endl;
    }


    index = hash % tableSize;
    /*cout << "key[0] = " << (int)key[1] << endl;
    cout << "key[1] = " << (int)key[2] << endl;
    cout << "key[2] = " << (int)key[3] << endl;*/

    return index;
}

/*hash::~hash()
{
    //dtor
}*/
