/*Lab for Removing and Replacing Elements

1. Create a vector of words that end in "y" that are made plural by removing the "y" and adding "ies."
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

using namespace std;

bool lt50(int n)
{
    return (n < 50);
}
int main()
{
    vector<int> numbers;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl << endl;
    replace_if(numbers.begin(), numbers.end(), lt50, 50); //replace is for a single instance, replace_if is for multiple
    int n;
    cout << "Enter a number to replace: ";
    cin >> n;
    int rp;
    cout << "Enter a number to replace with: ";
    cin >> rp;
    replace(numbers.begin(), numbers.end(), n, rp);
    for (int n : numbers) {
        cout << n << " ";
    }
    int x;

    cout << endl;

    cout << "Enter a value to remove: ";
    cin >> x;
    auto pos = remove(numbers.begin(), numbers.end(), x); //remove is for a single instance, remove_if is for multiple
    numbers.erase(pos, numbers.end());
    for (int n : numbers)
    {
        cout << n << " ";
    }
    numbers.clear();
    cout << endl << endl;
    for (int i = 1; i <= 10; i++)
    {
        int num = rand() % 100 + 1;
        cout << num << " ";
        numbers.push_back(num);
    }
    cout << endl << endl;
    //remove_if(numbers.begin(), numbers.end(), lt50);
    numbers.erase(remove_if(numbers.begin(), numbers.end(), lt50), numbers.end());
    for (int n : numbers)
    {
        cout << n << " ";
    }
    return 0;
}
