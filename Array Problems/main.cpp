/*1. Write a program that prompts the user to enter five test grades. Store each test grade in an array.
     After the grades are entered, use a for loop to compute the sum and then compute the average grade from the sum.

  2. Modify problem 1 so that you also have a second array of strings that stores the student's names.
     This array should parallel the grade array so that the first student's name is in position 0 of the names array and their test score is in position 0 of the grades array,
     and continue this for the rest of the students. Write a for loop that displays each student's name along with their grade.

  3. Write a program that takes the grades entered in Problem 1 and displays the grades in reverse order.

  4. Using random number generation, write a program that stores 100 values from 1 to 100 in an array.
     Display the array to the user. Prompt the user to enter a value that occurs in the array and then have the program count the number of times the value is found in the array.
     Display the final count.
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /*//1
    int grade;
    int Grades[5];
    int sum = 0;
    double average = 0.0;
    for (unsigned i = 0; i < 5; ++i)
    {
        cout << "Enter a number: ";
        cin >> Grades[i];
    }
    cout << endl;
    for (unsigned j = 0; j < 5; ++j)
    {
        cout << Grades[j] << " ";
        sum = sum + Grades[j];
    }
    cout << "\n" << "Sum: " << sum << endl;
    average = sum / 5;
    cout << "Average: " << average << endl << endl;*/


    //2
    /*string Names[5];
    int Grades[5];
    int sum = 0;
    double average = 0.0;
    for (unsigned i = 0; i < 5; ++i)
    {
        cout << "Enter a name: ";
        cin >> Names[i];
        cout << "Enter a grade: ";
        cin >> Grades[i];
    }
    cout << endl;
    for (unsigned j = 0; j < 5; ++j)
    {
        cout << Names[j] << ":" << Grades[j] << " ";
        sum = sum + Grades[j];

    }
    cout <<endl;
    cout << "\n" << "Sum: " << sum << endl;
    average = sum / 5;
    cout << "Average: " << average << endl << endl;


    //3
    cout << "Grades Reversed: ";
    for (int r = 4; r >= 0; --r)
    {
        cout << Grades[r] << " ";
    }
    cout << endl;*/


    //4
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
