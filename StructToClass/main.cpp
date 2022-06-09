#include <iostream>

using namespace std;

/*struct Time
{
    int hour, minute, second;
    void setTime(int h, int m, int s)
    {
        if ((h >= 0) && (h <= 24))
        {
            hour = h;
        }
        else
        {
            hour = 0;
        }
        if ((m >= 0) && (m <= 59))
        {
            minute = 0;
        }
        if ((s >= 0) && (s <= 59))
        {
            second = 0;
        }
    }
};*/

/*class Time
{
private:
    int hour, minute, second;
    void check_minute()
    {
        if (minute > 60)
        {
            minute -= 60;        hour++;
        }
    }
public:
    Time(int h, int m, int s)
    {
        setTime(h, m, s);
    }
   Time(int h, int m)
   {
       setTime(h, m);
   }
   Time()
   {
       hour = 0;
       minute = 0;
       second = 0;
   }
    void setTime(int h, int m, int s)
    {
        if ((h >= 0) && (h <= 23))
        {
            hour = h;
        }
        else
        {
            hour = 0;
        }
        if ((m >= 0) && (m <= 59))
        {
            minute = 0;
        }
        if ((s >= 0) && (s <= 59))
        {
            second = 0;
        }
    }
    void setTime(int h, int m)
    {
        if ((h >= 0) && (h <= 23))
        {
            hour = h;
        }
        else
        {
            hour = 0;
        }
        if ((m >= 0) && (m <= 59))
        {
            minute = 0;
        }
        second = 0;
    }
    void show_time()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void increment(int n)
    {
        minute += n;
        check_minute();
    }
};*/

class Date
{
private:
    int month, day, year;
    void checkDay(int d)
    {
        if((day < 1) || (day > 31))
       {
           day = 0;
       }
       else
       {
           day = d;
       }
    }
    void checkMonth(int m)
    {
        if((m < 1) || (m > 12))
       {
           month = 1;
       }
       else
       {
           month = m;
       }
    }
public:
    Date(int m, int d, int y)
    {
        month = m;
        checkMonth(m);
        day = d;
        checkDay(d);
        year = y;
    }

    Date(int m, int y)
    {
        month = m;
        checkMonth(m);
        day = 0;
        year = y;
    }

    Date()
    {
        month = 0;
        day = 0;
        year = 0;
    }

    void display()
    {
       cout << month << "/" << day << "/" << year << endl;
    }

    void setMonth(int m)
    {
        checkMonth(m);
    }

    int getMonth()
    {
        return month;
    }
    void setDay(int d)
    {
        checkDay(d);
    }

    int getDay()
    {
        return day;
    }
    void setYear(int y)
    {
        year = y;
    }

    int getYear()
    {
        return year;
    }
};

int main(){
    /*Time now(12,40,0);
    now.setTime(13,45,0);
    Time later;
    later.setTime(14,0,0);
    now.show_time();
    later.show_time();
    later.increment(5);
    later.show_time();*/
    /*Time now;
    now.hour = 12;
    now.minute = 25;
    now.second = 0;
    Time later;
    later.setTime(12,26,0);
    now.hour = 55;
    now.minute = -11111;
    now.second = -2323;*/
    Date today(9, 12, 2018);
    today.display();
    today.setDay(14);
    today.getDay();
    today.display();

    Date someDay(10, 2018);
    someDay.display();

    Date whenever;
    whenever.display();

    Date never(100, 1000, 10000);
    never.display();
    return 0;}
