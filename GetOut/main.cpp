#include <iostream>
#include <stdio.h>

using namespace std;

void GetOut()
{
    for(int a = 1; a < 11; a++)
    {
        cout << "I'm in the GetOut() function!" << endl;
    }
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if(a > 2)
    {
        cout << a << " is greater than 2" << endl;
    }
    else
    {
        GetOut();
    }
    return 0;
}
