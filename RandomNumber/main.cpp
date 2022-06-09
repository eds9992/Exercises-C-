#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number;
    for (int i = 1; i <= 5; ++i)
    {
        number = rand() % 50+50; //Add " % num1 + num2" to set range
        cout << number << endl;
    }
    return 0;
}
