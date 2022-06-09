/*ASSIGNMENT: For each function, show current state of vector as they loop through*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void swap(int &val1, int &val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void bubble(vector<int> &vec)
{
    for (int maxElement = vec.size()-1; maxElement > 0; maxElement--)
    {
        for (int i = 0; i < maxElement; i++)
        {
            if (vec[i] > vec[i+1])
            {
                swap(vec[i], vec[i+1]);
            }
        }
    }
}

void selectionSort(vector<int> &vec)
{
    int minIndex, minValue;
    for (int start = 0; start < vec.size()-1; start++)
    {
        minIndex = start;
        minValue = vec[start];
        for (int i = start + 1; i < vec.size(); i++)
        {
            if (vec[i] < minValue)
            {
                minValue = vec[i];
                minIndex = i;
            }
        }
        swap(vec[minIndex], vec[start]);
    }
}

void br()
{
    for(int i = 0; i < 10; ++i)
    {
        cout << "--";
    }
}

int main()
{
    clock_t beginTime, endTime;

    vector<int> numbers;
    srand(time(0));
    const int s = 8;
    for(int i = 0; i < s; ++i)
    {
        numbers.push_back(rand() % 100 + 1);
    }
    for(int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;
    br();
    cout << endl << "Sorted by normal sort: ";
    sort(numbers.begin(), numbers.end());
    beginTime = clock();
    for(int n : numbers)
    {
        cout << n << " ";
    }
    endTime = clock();
    double elapsed_seconds = endTime - beginTime;
    cout << endl << "Time: " << elapsed_seconds << endl;

    br();

    cout << endl << "Sorted by bubble sort: ";
    bubble(numbers);
    beginTime = clock();
    for(int n : numbers)
    {
        cout << n << " ";
    }
    endTime = clock();
    elapsed_seconds = endTime - beginTime;
    cout << endl << "Time: " << elapsed_seconds << endl;

    br();

    cout << endl <<"Sorted by selection sort: ";
    selectionSort(numbers);
    beginTime = clock();
    for(int n : numbers)
    {
        cout << n << " ";
    }
    endTime = clock();
    elapsed_seconds = endTime - beginTime;
    cout << endl << "Time: " << elapsed_seconds << endl;
}
