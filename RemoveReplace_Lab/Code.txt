/*1. Create a vector of words that end in "y" that are made plural by removing the "y" and adding "ies."
    Write a function that takes a word ending in "y" and makes it a plural by adding "ies."
    Use the function with the replace() algorithm to change all the words in the vector to plurals.

2. Modify the vector of words ending in "y" in the problem above so that some words don't end in "y."
    Use the replace_if() function to only make words ending in "y" plural.

3. Create a vector that contains 20 random numbers from 1 to 100.
    Use the remove() function to remove a value chosen by the user.
    Make sure the removal is permanent.

4. Write a function that determines if a number is odd.
    Use the function with the remove_if() function to remove all
    the odd numbers from a randomly generated vector of numbers.

5. Using an anonymous function, write a program that removes all
    the numbers between 0 and 49 permanently from a randomly generated vector of numbers.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

/*unique(vec.begin(), vec.end()); <== gets rid of duplicate elements in a vector*/
/*1*/
string replaceY(string val)
{
    string str = "ies";
    for(int i = 0; i = val.length(); ++i)
    {
        switch(val[i])
        {
            case 'y':
            val[i] = str;
        }
    }
    return val;
    //val
}

/*4*/
int ifOdd(int val)
{
    if (val%2 > 0)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<string> words;
    words.push_back("copy");
    words.push_back("body");
    words.push_back("fly");
    words.push_back("baby");
    words.push_back("country");
    for(string w : words)
    {
        cout << w << " ";
    }
    cout << endl;
    /*replace(words.begin(), words.end(), replaceY, "ies"); //replace(begin, end, old_value, new_value);
    for(string w : words)
    {
        cout << w << " ";
    }*/


    /*2*/
    words.push_back("eye");
    for(string w : words)
    {
        cout << w << " ";
    }
    cout << endl;

    /*3*/
    vector<int> numbers;
    srand(time(0));
    for (int i = 1; i <= 20; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;
    int x;
    cout << "Enter a value to remove: ";
    cin >> x;
    auto pos = remove(numbers.begin(), numbers.end(), x);
    numbers.erase(pos, numbers.end());
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;

    /*4*/
    numbers.erase(remove_if(numbers.begin(), numbers.end(), ifOdd), numbers.end());
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl << endl;

    /*5*/
    vector<int> nums;
    srand(time(0));
    for (int i = 1; i <= 20; i++)
    {
        nums.push_back(rand() % 100 + 1);
    }
    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
    nums.erase(remove_if(nums.begin(), nums.end(), [] (int val) { return (val < 50); }), nums.end());
    for (int n : nums)
    {
        //nums.erase(remove_if(nums.begin(), nums.end(), [] (int val) { return (val < 50); } ));
        cout << n << " ";
    }
    return 0;
}
