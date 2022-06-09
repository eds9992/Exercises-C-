#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    srand(0);
    int num;
    int arraySize = 100;
    int Numbers[arraySize];
    int count = 0;
    for (unsigned i = 0; i <= arraySize; ++i)
    {
        Numbers[i] = rand() % 100 + 1;
        cout << Numbers[i] << " ";
    }
    cout << "\n\n" << "Enter a number to search for: ";
    cin >> num;
    for (unsigned j = 0; j <=arraySize; ++j)
    {
        if (Numbers[j] == num)
        {
            count++;
        }
        else
        {
            count;
        }
    }
    cout << num << " was found " << count << " times.";
    return 0;
}
