/*Using the function definition below(**),
    create a function object that will display only the prime numbers from a vector of 100 randomly generated integers.

    bool isPrime(int n)
    {
        if (n <= 1)  return false;
        if (n <= 3)  return true;
        if (n%2 == 0 || n%3 == 0) return false;
        for (int i=5; i*i<=n; i=i+6)
        {
            if (n%i == 0 || n%(i+2) == 0)
            {
                return false;
            }
            return true;
        }
    }*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
class PrintInt
{
public:
    void operator() (int elem) const
    {
        cout << elem << " ";
    }
};

class IsPrime
{
private:
    int theValue;
public:
    IsPrime(int v) : theValue(v) {}
    bool check(int &elem)
    {
        if (elem <= 1)  return false;
        if (elem <= 3)  return true;
        if (elem%2 == 0 || elem%3 == 0) return false;
        for (int i = 5; i * i <= elem; i = i + 6)
        {
            if (elem%i == 0 || elem % ( i + 2) == 0)
            {
                return false;
            }
            return true;
        }
    }
};

int main()
{
    srand(time(0));
    vector<int> numbers;
    for(int i = 0; i <= 100; ++i)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for_each(numbers.begin(), numbers.end(), PrintInt());

    cout << endl << endl;
    for (int n : numbers)
    {
        if(IsPrime(n).check(n))
        {
            cout << n << " ";
        }
    }
    return 0;
}
