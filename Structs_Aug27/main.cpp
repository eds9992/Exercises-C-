#include <iostream>

using namespace std;
struct Time
{
    int hour, minute;
    double second;
    Time(int h, int m, int s)/*this is a constructor*/
    {
        hour = h;
        minute = m;
        second = s;
    }
    Time(int h, int m)
    {
        hour = h;
        minute = m;
        second = 0;
    }
    Time(int h)
    {
        hour = h;
        minute = 0;
        second = 0;
    }
    /*Time()//this is a default constructor
    {
        hour = 0;
        minute = 0;
        second = 0;
    }*/

    void printTime()
    {
        /*Time time = *this;*//* "*this" represents the current object in context, "Time time = {11, 59, 3.14159};" in this case*/
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void increment(double); /*forward declaration*/
};

/*void Time::printTime() //:: is a "scope resolution operator" and signifies that that printTime is a function in the struct
{
    Time time = *this; //"*this" represents the current object in context, "Time time = {11, 59, 3.14159};" in this case
    cout << hour << ":" << minute << ":" << second << endl;
}*/
void Time::increment(double secs)
{
    second += secs;
    while (second >= 60)
    {
        second -= 60;
        minute += 1;
    }
    while (minute >= 60)
    {
        minute -= 60;
        hour += 1;
    }
}

void print_time(Time &t)
{
  cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}



bool after(Time &time1, Time &time2)
{
  if (time1.hour > time2.hour) { return true; }
  if (time1.hour < time2.hour) { return false; }

  if (time1.minute > time2.minute) { return true; }
  if (time1.minute < time2.minute) { return false; }

  if (time1.second > time2.second) { return true; }
  return false;
}

/*Time add_time(Time &t1, Time &t2)
{
  Time sum;
  sum.hour = t1.hour + t2.hour;
  sum.minute = t1.minute + t2.minute;
  sum.second = t1.second + t2.second;

  if (sum.second >= 60) {
        hour = h;
        minute = m;
        second = s;
    sum.second -= 60.0;
    sum.minute += 1;
  }
  if (sum.minute >= 60) {
    sum.minute -= 60;
    sum.hour += 1;
  }
  return sum;
}*/

int main()
{
    Time theTime = {11, 59, 3};
    Time time2 = {13,48,0};
    Time newTime = {3, 56, 30};
    Time someTime = {4, 0, 0};
    //Time noTime = {};

    theTime.printTime();

    cout << endl;

    print_time(time2);
    time2.increment(60);
    time2.printTime();

    cout << endl;

    newTime.printTime();
    newTime.increment(45);
    newTime.printTime();

    cout << endl;

    someTime.printTime();
    someTime.increment(145);
    someTime.printTime();
    return 0;
}
