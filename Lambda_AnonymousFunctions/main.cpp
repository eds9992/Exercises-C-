#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*void print(int element)
{
    cout << element << " ";
}*/

/*void curve(int &value)
{
    value += 5;
}*/

//Class Object
class ClassAverage
{
private:
    int numGrades;
    int sumGrades;
public:
    ClassAverage() : numGrades(0), sumGrades(0) {}
    void operator() (int grade)
    {
        numGrades++;
        numGrades += grade;
    }

    operator double()
    {
        return static_cast<double>(sumGrades)/static_cast<double>(numGrades);
    }
};

int main()
{
    auto br = [] { cout << endl; };
    string name = "Eric";
    auto greet = [name] { cout << "Hello " << name; };
    greet();
    br();
    int val = 3;
    auto timesTwo= [val] { return 2 * val; };
    cout <<  timesTwo();
    br();
    vector<int> grades = {78, 82, 66, 91, 88};
    for_each(grades.begin(), grades.end(), [] (int grade) { cout << grade << " "; });
    br();
    for_each(grades.begin(), grades.end(), [] (int &grade) { grade += 5; });
    for_each(grades.begin(), grades.end(), [] (int grade) { cout << grade << " "; });
    br();
    double average = for_each(grades.begin(), grades.end(), ClassAverage());
    cout << "The class average is " << average << endl;
    br();

    return 0;
}
