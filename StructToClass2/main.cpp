#include <iostream>

using namespace std;


// declaration file (.h)
class Date
{
private:
    int month, day, year;
    void checkDay(int);
public:
    Date(int, int, int);
    Date(int, int);
    Date();
    void display();
    void setDay(int);
    int getDay();
    void setMonth(int);
    int getMonth();
    void setYear(int);
    int getYear();
    void setDate(int, int, int);
};

void Date::setDate(int m, int d, int y)
{
    month = m;
    checkDay(d);
    year = y;
}
void Date::setDay(int d)
{
    checkDay(d);
}

int Date::getDay()
{
    return day;
}

void Date::setMonth(int m)
{
    month = m;
}

int Date::getMonth()
{
    return month;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::getYear()
{
    return year;
}

// implementation section (.cpp)
void Date::checkDay(int d)
{
    if ((d < 0) || (d > 31))
    {
        day = 0;
    }
    else
    {
        day = d;
    }
}

Date::Date(int m, int d, int y)
{
    checkDay(d);
    month = m;
    year = y;
}

Date::Date(int m, int y)
{

    month = m;
    year = y;
}

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}

void Date::display()
{
    cout << month << "/" << day << "/" << year << endl;
}


int main()
{
    Date today(9, 12, 2018);
    today.display();
    Date whenever;
    whenever.setDate(9, 14, 2018);
    whenever.checkDay(14);
    whenever.display();
    cout << "The month is: " << whenever.getMonth() << endl;
    cout << "The day is: " << whenever.getDay() << endl;
    cout << "The year is: " << whenever.getYear() << endl;
    return 0;
}
