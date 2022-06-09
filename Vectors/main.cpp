#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers; //vector<data type> title
    numbers.push_back(1); //.push_back adds items to vector
    numbers.push_back(2);
    numbers.push_back(3);
    cout << "Array: " << numbers.at(0) << numbers.at(1) << numbers.at(2) << endl; //.at() is arr[] for vectors
    cout << "For Loop: ";
    for (int i = 0; i < numbers.size(); ++i)
    {
        cout << numbers.at(i) << " ";
    }
    cout << endl;
    cout << "Ranged For Loop: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    /*vector<int> RandVector;
    srand((unsigned)time(NULL));
    int grade = rand() % 50 + 50;
    for (int i = 0; i < 20; ++i)
    {
        int b = rand() % 20 + 1;
        RandVector.push_back(b);
        cout << RandVector[i] << " ";
    }*/
    return 0;
}
