#include <iostream>

using namespace std;

class Shape //bas class
{
private:
    int x, y;
public:
    Shape(int NewX, int NewY);
    int getx();
    int gety();
    void setX(int NewX);
    void sety(int NewY);
    void XmoveTo();
};

class Rectangle: public Shape
{
private:
    int width, height;
public:
    Rectangle(int newX, int newY, int newWidth, int newHeight);
    int getWidth();
    int getHeight();
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    void draw();
};

Rectangle::Rectangle(int NewX, int NewY, int newWidth, int newHeight) : Shape(newX, newY)
{

}

int main()
{

    return 0;
}
