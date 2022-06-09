#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> numbers;
    numbers.insert(2);
    numbers.insert(20);
    numbers.insert(200);
    for(int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;
    set<int> nums = {1,34,12,19,12,1}; //set will not take duplicates
    for(int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
    set<int, less<int>> nums2 ={3,5,2,1,4};
    for(int n : nums2)
    {
        cout << n << " ";
    }
    return 0;
}
