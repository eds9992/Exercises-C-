#include <iostream>
#include <string>

using namespace std;

int main()
{
    int grade;
    string letterGrade;
    cout << "Enter a grade: ";
    cin >> grade;
    if (grade >= 90)
    {
        letterGrade = "A";
    }
    else if (grade >= 80)
    {
        letterGrade = "B";
    }
    else if (grade >= 70)
    {
        letterGrade = "C";
    }
    else if (grade >= 60)
    {
        letterGrade = "D";
    }
    else
    {
        letterGrade = "F";
    }
    cout << grade << " is equal to " << letterGrade;
    return 0;
}
