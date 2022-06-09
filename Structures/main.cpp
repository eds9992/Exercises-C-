/*Create member functions from the printTime, increment, sum, and after functions. Test them in a program.*/

#include <iostream>

using namespace std;

/*struct Time
{
    int hour, minute;
    double second;
    void PrintTime()
    {
        cout << hour << ":" << minute << ":" << second;
    }

    void Increment(Time &time, double secs)
    {
        time.second += secs;
        if (time.second >= 60)
        {
            time.second -= 60;
            time.minute += 1;
        }
        if (time.minute >= 60)
        {
            time.minute -= 60;
            time.hour += 1;
        }
    }

    Time AddTime(const Time &t1, const Time &t2)
    {
        Time sum;
        sum.hour = t1.hour + t2.hour;
        sum.minute = t1.minute + t2.minute;
        sum.second = t1.second + t2.second;
        if (sum.second >= 60)
        {
            sum.second -= 60;
            sum.minute += 1;
        }
        if (sum.minute >= 60)
        {
            sum.minute -= 60;
            sum.hour += 1;
        }
        return sum;
    }

    bool After(const Time &t1, const Time &t2)
    {
        if (t1.hour > t2.hour) { return true; }
        if (t1.hour < t2.hour) { return false; }

        if (t1.minute > t2.minute) { return true; }
        if (t1.minute < t2.minute) { return false; }

        if (t1.second > t2.second) { return true; }
        if (t1.second < t2.second) { return false; }
    }
};

void PrintTime(const Time &t)
{
    cout << t.hour << ":" << t.minute << ":" << t.second;
}

bool After(const Time &t1, const Time &t2)
{
    if (t1.hour > t2.hour) { return true; }
    if (t1.hour < t2.hour) { return false; }

    if (t1.minute > t2.minute) { return true; }
    if (t1.minute < t2.minute) { return false; }

    if (t1.second > t2.second) { return true; }
    if (t1.second < t2.second) { return false; }
}

Time AddTime(const Time &t1, const Time &t2)
{
    Time sum;
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;
    if (sum.second >= 60)
    {
        sum.second -= 60;
        sum.minute += 1;
    }
    if (sum.minute >= 60)
    {
        sum.minute -= 60;
        sum.hour += 1;
    }
    return sum;
}

void Increment(Time &time, double secs)
{
    time.second += secs;
    if (time.second >= 60)
    {
        time.second -= 60;
        time.minute += 1;
    }
    if (time.minute >= 60)
    {
        time.minute -= 60;
        time.hour += 1;
    }
}

void FillTime(const Time &t1, const Time &t2, Time &sum)
{
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;
    if (sum.second >= 60)
    {
        sum.second -= 60;
        sum.minute += 1;
    }
    if (sum.minute >= 60)
    {
        sum.minute -= 60;
        sum.hour += 1;
    }
}*/

struct Point
{
    int x, y;
};

struct Circle
{
    Point center;
    double radius;
};

void PrintPoint(Point p)
{
    cout << "{" << p.x << ", " << p.y << "}";
}

int main()
{
    /*Time time1 = {13, 48, 00};
    Time time2 = {14, 49, 01};
    time1.PrintTime();
    cout << endl;
    if (time1.After(time1, time2) && time2.After(time1, time2))
    {
        cout << "time1 is after time2" << endl;
    }
    else
    {
        cout << "time2 is after time1" << endl;
    }
    AddTime(time1, time2);
    Time NewTime = time1.AddTime(time1, time2) && time2.AddTime(time1, time2);
    NewTime.PrintTime();
    newTime.Increment(NewTime, 6);

    cout << endl;

    NewTime.PrintTime();

    cout << endl;

    Time TheTime;
    FillTime(time1, time2, TheTime);
    PrintTime(TheTime);
    TheTime.Display();*/

    Point pt1 = {x:1, y:2};
    pt1.x = 1;
    pt1.y = 2;
    Circle c;
    Point p = {x:150, y:100};
    c.center = p;
    c.radius = 75;
    cout << "Center of the circle is ";
    PrintPoint(c.center);
    //cout << endl << "The radius of the circle is " << c.radius << endl;
    Circle c2;
    c2.center = pt1;
    c2.radius = 50;
    cout << "Center of the second circle is ";
    PrintPoint(c2.center);
    cout << endl << "The radius of the second circle is " << c.radius << endl;
    return 0;
}

/*Member functions are functions that are defined inside a struct/structure*/
