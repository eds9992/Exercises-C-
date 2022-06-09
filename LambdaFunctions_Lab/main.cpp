/*STL Algorithms Lab 1

1. Write a function that checks to see if a value is less than 50.
    Use the function to find the first value in a vector that is less than 50.

2. Rewrite Problem 1 using an anonymous function rather than a function.

3. Write a function that checks to see if a value is even.
    Use the function to count the number of even values in a randomly generated vector of integers.

4. Rewrite Problem 3 using an anonymous function.

5. Using the vector from problems 3 and 4, write a program that removes all the odd values from the vector using a predicate function.

6. Rewrite Problem 5 using an anonymous function.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

/*1*/
bool lessThan50(int val)
{
    if(val < 50)
    {
        return true;
    }
    return false;
}

/*3*/
bool ifEven(int val)
{
    if (val%2==0)
    {
        return true;
    }
    return false;
}

/*5*/
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

    /*1*/
    /*vector <int> nums = {52, 32, 63, 98, 45};
    for(auto it = nums.begin(); it != nums.end(); it++)
    {
        cout<< *it <<" ";
    }*/
    vector<int> nums;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        nums.push_back(rand() % 100 + 1);
    }
    for(int n : nums)
    {
        cout << n << " ";
    }
    cout<<endl;
    bool t;
    for(int n : nums)
    {
        t = lessThan50(n);
        if (t)
        {
            cout << "The first value less than 50 is " << n << endl;
            break;
        }
    }

    /*2*/
    /*int lt50 = find_if(numbers.begin(), numbers.end(), [] (int val) { return (val < 50) }); //find_if (begin, end, unary_predicate);
    cout << "The first value less than 50(using anonymous function): " << lt50 << endl;*/
    vector <int>::iterator lt50 = find_if(nums.begin(), nums.end(), [] (int value) {return (value<50);});
    cout << "Using a lambda function, the first element less than 50 is " << *lt50 << endl;

    cout << endl;
    /*3*/
    vector<int> numbers;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for(int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;
    bool j;
    int count = 0;
    for(int n : numbers)
    {
        j = ifEven(n);
        if(j)
        {
            ++count;
        }
    }
    cout << "Number of even values: " << count << endl;

    /*4*/
    int countEvens = count_if(numbers.begin(), numbers.end(), [] (int val) { if(val%2==0) {return true;} return false; }); //count_if (begin, end, unary_predicate);
    cout << "Number of even values(using a lambda function): " << countEvens << endl << endl;

    /*5*/
    bool k;
    int cnt = 0;
    for(int n : numbers)
    {
        k = removeIfOdd(n);
        if(k)
        {
            ++cnt;
        }
    }
    cout << "Number of odd values: " << cnt << endl; //I did this to compare the amount of odd values to the amount of odd values that were removed
    int occ = 0;
    /*for(int n : numbers)
    {
        k = removeIfOdd(n);
        if(k)
        {
            numbers.erase( remove_if(numbers.begin(), numbers.end(), removeIfOdd), numbers.end());
            ++occ;
        }
    }*/
    numbers.erase( remove_if(numbers.begin(), numbers.end(), removeIfOdd), numbers.end());
    for(int n : numbers)
    {
        cout << n << " ";
    }
    cout << "Number of odd values removed: " << occ << endl;//The number of odd values removed does not equal the number of odd values

    /*6*/
    /*int noOdds = remove_if(numbers.begin(), numbers.end(), [] (int number) { if(number%2 > 0) {return true;} return false; }); // remove_if(begin, end, predicate);

    cout << "Number of odd values removed(using anonymous function): " << noOdds << endl;*/ //First try
    /*int noOdds = numbers.erase( remove_if(numbers.begin(), numbers.end(), [] (int val) { if (val%2 > 0) {return true;} return false; }, numbers.end()) );
    //cout << "Number of odd values removed(using anonymous function): " << noOdds << endl;*/ // Second try using erase-remove idiom

    return 0;
}
