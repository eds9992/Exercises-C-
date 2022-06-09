#include <iostream>
#include <string>

using namespace std;

class Name
{
private:
    static int numName;
    string first, last;
public:
    Name(string, string);
    string toString();
};

Name::Name(string f, string l)
{
    first = f;
    last = l;
    ++numName;
}

string Name::toString()
{
   return "First: " + first + "\n" + "Last: " + last + "\n"
    + "Count: " + to_string(numName);
}

int Name::numName = 0;

class StopWatch
{
private:
    double seconds;
public:
    const static int SecondsInMinutes = 60;
    StopWatch()
    {
        seconds = 0;
    }
};

int main()
{
    Name aName("John", "Doe");
    cout << aName.toString() << endl;
    Name someName("Jane", "Doe");
    cout << someName.toString() << endl;
    return 0;
}
