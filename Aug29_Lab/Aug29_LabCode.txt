/*Create a Date object with month, day, and year (all integers) as the member variables. Create at least two constructor functions for Date objects.
  Create a print() member function that displays the date.
  Create a same_date() member function that compares two Date objects to see if they are the same.
  Create an increment() function that increments a Date by one day. Be sure to test each function in a program.*/

#include <iostream>

using namespace std;

struct Date
{
    int month, day, year;

    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
    Date2(int m, int y)
    {
        month = m;
        year = y;
    }

    void printDate()
    {
        if (day == 0)
        {
            cout << month << "/" << year << endl;
        }
        else
        {
            cout << month << "/" << day << "/" << year << endl;
        }
    }
    void incrementDate(int m, int d, int y)
    {
        month += m;
        day += d;
        year += y;
        while (day > 30) //I'm assuming every month has 30 days
        {
            day -= 30;
            month += 1;
        }
        while (month > 12)
        {
            month -= 12;
            year + 1;
        }
    }
    bool sameDate(Date &D, Date &D2)
    {
        if (D.month == D2.month && D.day == D2.day && D.year == D2.year)
        {
            cout << "The dates are the same" << endl;
        }
        else
        {
            cout << "The dates are not the same" << endl;
        }
    }
};

int main()
{
    Date theDate = {12, 11, 2009};
    theDate.printDate();
    theDate.incrementDate(2, 30, 2);
    theDate.printDate();

    cout << endl;

    Date someDate = {12, 3, 2018};
    someDate.printDate();

    Date aDate = {12, 3, 2018};
    aDate.printDate();
    someDate.sameDate(someDate, aDate);

    cout << endl;

    theDate.printDate();
    aDate.printDate();
    theDate.sameDate(theDate, aDate);
    return 0;
}
