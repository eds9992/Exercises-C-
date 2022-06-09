/*Using the Time class implementation you should already have, overload the == operator to test if two Time objects hold the same time.
    Overload the < and the > operators as well. Be sure to test your operators.

  Using the Date class implementation you should already have, overload the output operator so that the code fragment, cout << today,
    will display the current date in mm/dd/yy format. Overload the input operator so that you can write, cin >> tomorrow,
    and input a date by entering the month, the day, and the year.*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Date
{
private:
    static int numDate;
    int month, day, year;
public:
    Date(int m, int d, int y)
    {
        numDate++;
        month = m;
        day = d;
        year = y;
    }

    Date(int m, int y)
    {
        numDate++;
        month = m;
        day = 0;
        year = y;
    }

    Date()
    {
        numDate++;
        month = 0;
        day = 0;
        year = 0;
    }

    string toString()
    {
        if (day == 0)
        {
            return to_string(month) + "/" + to_string(year) + "\n"
            + "Count: " + to_string(numDate) + "\n";
        }
        else
        {
            return to_string(month) + "/" + to_string(day) + "/" + to_string(year) + "\n"
            + "Count: " + to_string(numDate) + "\n";
        }
    }

    int getMonth()
    {
        return month;
    }

    int getDay()
    {
        return day;
    }

    int getYear()
    {
        return year;
    }

    int getDate()
    {
        time_t now = time(0);
        return now;
    }

    friend bool operator==(Date &d1, Date &d2)
    {
        return ((d1.getMonth() == d2.getMonth()) &&
                (d1.getDay() == d2.getDay())&&
                (d1.getYear() == d2.getYear()));
    }

    friend bool operator!=(Date &d1, Date &d2)
    {     return !((d1.getMonth() == d2.getMonth()) &&
                   (d1.getDay() == d2.getDay())&&
                   (d1.getYear() == d2.getYear()));
    }

    friend ostream &operator<<(ostream &os, Date &d)
    {
        os << d.getMonth() << "/" << d.getDay() << "/" << d.getYear();
        return os;
    }

    friend istream &operator>>(istream &is, Date &d)
    {
        is >> d.month >> d.day >> d.year;
        return is;
    }
};

int Date::numDate = 0;

class Time
{
private:
    int hour, minute;
    void checkMinute();
public:
    Time(int h, int m)
    {
        hour = h;
        minute = m;
    }

    Time()
    {
        hour = 0;
        minute = 0;
    }

    void setHour(int h)
    {
        hour = h;
    }

    int getHour()
    {
        return hour;
    }

    void setMinute(int m)
    {
        minute = m;
    }

    int getMinute()
    {
        return minute;
    }

    friend string convert(Time &t)
    {
        if (t.hour > 12 && t.hour <=24)
        {
            t.hour = t.hour - 12;
            cout << "Time is " << to_string(t.hour) << ":" << to_string(t.minute);
        }
        else
        {
            cout << "Time is " << to_string(t.hour) << ":" << to_string(t.minute);
        }
    }

    friend ostream &operator<<(ostream &os, Time &t)
    {
        os << t.getHour() << ":" << t.getMinute();
        return os;
    }

    friend istream &operator>>(istream &is, Time &t)
    {
        is >> t.hour >> t.minute;
        return is;
    }

     friend bool operator==(Time &t1, Time &t2)
    {
        return ((t1.getHour() == t2.getHour()) &&
                (t1.getMinute() == t2.getMinute()));
    }
};

int main()
{
    Date aDate(9, 18, 2018);
    cout << aDate.toString() << endl;

    Date someDate(5, 17, 2005);
    cout << someDate.toString() << endl;

    Date otherDate(4, 2016);
    cout << otherDate.toString() << endl;

    if (aDate == someDate)
    {
        cout << "The dates are the same" << endl; // this is displayed
    }
    else
    {
        cout << "The dates are different" << endl;
    }

    cout << endl;

    cout << aDate << endl;

    cout << endl;

    Date today();
    getDate(today);
    cout << today << endl;

    Date tomorrow;
    cin >> tomorrow;
    cout << tomorrow;

    cout << endl;

    Time aTime(13, 30);
    convert(aTime);

    cout << endl;

    Time yourTime;
    cout << "Enter the time: ";
    cin >> yourTime;
    convert(yourTime);

    cout << endl;

    if (aTime == yourTime)
    {
        cout << "The times are the same" << endl;
    }
    else
    {
        cout << "The times are different" << endl;
    }
    return 0;
}
