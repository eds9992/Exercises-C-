#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int xcor, int ycor)
    {
        x = xcor;
        y = ycor;
    }
    int getX() { return x;}
    int getY() { return y;}
    void setX(int xCor)
    {
        x = xCor;
    }
    void setY(int yCor)
    {
        y = yCor;
    }
    friend bool operator==(Point &, Point &);
    friend bool operator!=(Point &, Point &);
    friend ostream &operator<<(ostream  &os, Point &p);
    friend istream &operator>>(istream  &is, Point &p);
};

bool operator==(Point &point1, Point &point2)
{
    return ((point1.getX() == point2.getX()) &&
             (point1.getY() == point2.getY()));
}

bool operator!=(Point &point1, Point &point2)
{
    return !((point1.getX() == point2.getX()) &&
             (point1.getY() == point2.getY()));
}

ostream &operator<<(ostream  &os, Point &p)
{
    os << p.getX() << ", " << p.getY();
}

istream &operator>>(istream  &is, Point &p)
{
    is >> p.getX() >> p.getY();
}

int main()
{
    Point p1(1, 2);
    Point p2(2, 3);
    if (p1 == p2)
    {
        cout << "p1 and p2 are the same" << endl; // this is displayed
    }
    else
    {
        cout << "p1 and p2 are different" << endl;
    }
    p1.setX(2);
    p1.setY(3);
    if (p1 != p2)
    {
        cout << "p1 and p2 are different" << endl; // this is displayed
    }
    else
    {
        cout << "p1 and p2 are the same" << endl;
    }
    cout << "Point 1: " << p1 << endl;
    return 0;
}
