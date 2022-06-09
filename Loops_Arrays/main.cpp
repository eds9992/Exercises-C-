/*
Modify the 10 grade file I/O problem so that your program reads the data from the file into an array
and then uses a for loop to find the average, highest, and lowest values by accessing the array.
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    ofstream outFile;
    ifstream inFile;
    outFile.open("grades.txt");
    int grade;
    int count = 1;
    const unsigned numGrades = 10;
    while (count <= numGrades)
    {
        grade = rand() % 50 + 50;
        outFile << grade << endl;
        ++count;
    }
    outFile.close();
    const int arraySize = 10;
    int Grades[numGrades];
    int sum, highest, lowest;
    double average = 0.0;
    inFile.open("grades.txt");
    unsigned index = 0;
    while (inFile >> grade)
    {
        cout << grade << " ";
        Grades[index] = grade;
        ++index;
    }
    cout << endl << endl << "Using ranged for loop: ";
    for (int &grade : Grades)
    {
        cout << grade << " ";
    }
    highest = Grades[0];
    lowest = Grades[0];
    sum += Grades[0];
    for (unsigned i = 1; i < numGrades; ++i)
    {
       sum += Grades[i];
       if (Grades[i] > highest)
       {
           highest = Grades[i];
       }
       if (Grades[i] < lowest)
       {
           lowest = Grades[i];
       }
    }
    average = sum / static_cast<double>(numGrades);
    cout << endl << endl;
    cout << "The average is: " << average << endl;
    cout << "The highest value is: " << highest << endl;
    cout << "The lowest value is: " << lowest << endl;
    return 0;
}
