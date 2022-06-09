#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

bool lessThan50(int val)
{
    if(val < 50)
    {
        return true;
    }
    return false;
}

bool ifEven(int val)
{
    if (val%2==0)
    {
        return true;
    }
    return false;
}

bool removeIfOdd(int val)
{
    if (val%2 != 0)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<int> numbers;
    srand(time(0));
    for (int i = 1; i <= 50; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for(int n : numbers)
    {
        cout << n << " ";
    }
    auto it = min_element(numbers.begin(), numbers.end());
    cout << "\nMinimum value: " << *it << endl;
    auto maxit = max_element(numbers.begin(), numbers.end());
    cout << "Maximum value: " << *maxit << endl;

    /*double avg = 0.0;
    for(int n : numbers)
    {
        sum += n;
    }*/

    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    double avg = static_cast<double>(sum) / numbers.size();
    cout << "Average:" << avg;
    return 0;
}
