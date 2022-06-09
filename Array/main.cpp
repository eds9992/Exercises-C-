#include <iostream>

using namespace std;

int main()
{
    //const int numGrades = 5;
    int grades[5];
    grades[0] = 81;
    grades[1] = 77;
    grades[2] = 92;
    grades[3] = 100;
    grades[4] = 89;
    for (unsigned int i = 0; i < 5; i++) //Unsigned means int can never be negative
    {
        cout << grades[i] << " ";
    }
    return 0;
}
