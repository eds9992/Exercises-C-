#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;

};

void print_Point(Point &p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

double distance(Point &p1, Point &p2)
{
   double dx = p2.x - p1.x;
   double dy = p2.y - p1.y;
   return sqrt(dx*dx + dy*dy);
}

void reflect(Point &p)
{
    double temp = p.x;
    p.x = p.y;
    p.y = temp;
}

struct Rectangle
{
    Point corner;
    double width, height;
};

int main()
{
    Point blank;
    blank.x = 3.0;
    blank.y = 5.0;
    int n = 10;
    int sumX = blank.x + n;
    int sumY = blank.y + n;
    cout << blank.x << ", " << blank.y << endl;
    cout << "New point is " << sumX << ", " << sumY << endl;
    print_Point(blank);
    Point corner = {0.0, 0.0};
    Rectangle box = {corner, 100.0, 200.0};
    /*cout << "The corner of the box is " << box.corner << ", the width is " << box.width
         << ", and the height is " << box.height <<  endl;*/
    /*Point no_return = {3.0, 4.0};
    cout << no_return.x << ", " << no_return.y << endl;
    Point p1 = blank;
    cout << p1.x << ", " << p1.y << endl;
    double Slope = */
    return 0;
}
