/*Create a vector of ten random integers.
Write a program that does two things:
1) prints the sum of adjacent elements
2) prints the sum of the first and last element, the second and second-to-last element, etc.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    vector<int> numbers(5);
    for (int i = 0; i < 10; ++i)
    {
        int numbers = rand() % 20 + 1;
        cout << numbers << " ";
    }
    cout << endl;
    auto it = numbers.begin();
    /*for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        /*int n1 = --it; //Couldn't figure out how to find sum of adjacent elements
        int n2 = ++it;
        int sum = n1 + n2;
        cout << sum << endl;*/

        /*int sum = numbers.begin += it;
        ++it*/

        //cout << --it + ++it << endl;
        /*++it;
    }*/
    /*for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        int b = rand() % 20 + 1;
        cout << *it << " ";
        ++it;
    }*/
    /*for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        int sum = --it + ++it;
        cout << sum << " ";
        ++it;
    }*/
    /*vector<int> numbers = {23, 14, 15, 16};
    auto it = numbers.begin();

    while(it != numbers.end())
    {
        cout << *it << " ";
        it +=2;
    }
    cout << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        int sumfor (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it<< " ";
    } = --it + ++it;
        cout << sum << " ";
    }
    cout << endl;
    for(auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit)
    {
        cout << *rit<< " ";
    }*/
    return 0;
}

/*vector<int> numbers = {1,2,3,4,5};
    vector<string> names = {"Joan", "Jed"};
    /*for (unsigned i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    for (int n : numbers) {
        cout << n << endl;
    }*/
    //vector<int> numbers::iterator it;
    //vector<int> names::iterator nit;
    /*auto it = numbers.begin();
    while (it != numbers.end()) {
        cout << *it << endl;
        it++;
    }
    cout << endl << endl;
    auto rit = numbers.rbegin();
    while (rit != numbers.rend()) {
      cout << *rit << endl;
       rit++;
    }
    cout << endl << endl;
    for (auto iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << *iter << endl;
    }*/
