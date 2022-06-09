#include <iostream>

using namespace std;

class Shape {
protected: //Same as private, but can be accessed by base class and derived class
    int x, y;
public:
    Shape(int newx, int newy);
    int getX();
    int getY();
    void setX(int newx);
    void setY(int newy);
    void moveTo(int newx, int newy);
    void rmoveTo(int deltax, int deltay);
    virtual void draw() = 0;//Sets function to a pure virtual function, which creates an abstract base class, which means that the class can't be implemented
};

Shape::Shape(int newx, int newy) {
  moveTo(newx, newy);
}

int Shape::getX() { return x; }
int Shape::getY() { return y; };
void Shape::setX(int newx) { x = newx; }
void Shape:: setY(int newy) { y = newy; }

void Shape::rmoveTo(int deltax, int deltay) {
  moveTo(getX() + deltax, getY() + deltay);
}

void Shape::moveTo(int newx, int newy) {
  setX(newx);
  setY(newy);
}

void Shape::draw() {
  cout << "Drawing a shape at: " << x << ", " << y << endl;
}

class Rectangle : public Shape {
private:
    int width, height;

public:
  Rectangle(int newx, int newy,
            int newwidth, int newheight);
  int getWidth();
  int getHeight();
  void setWidth(int newwidth);
  void setHeight(int newheight);
  void draw();
};

Rectangle::Rectangle(int newx, int newy,
                     int newwidth, int newheight) : Shape(newx, newy){
                setWidth(newwidth);
                setHeight(newheight);
}

// accessors
int Rectangle::getWidth() { return width; }
int Rectangle::getHeight() { return height; }
void Rectangle::setWidth(int newwidth) {
  width = newwidth;
}
void Rectangle::setHeight(int newheight) {
  height = newheight;
}

void Rectangle::draw() {
  cout << "Drawing a rectangle at: (" << getX() << ", "
     << getY() << "), width: " << getWidth() << ", height: "
     << getHeight() << endl;
}

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int newx, int newy, int newradius);
    int getRadius();
    void setRadius(int newradius);
    void draw();
};

Circle::Circle(int newx, int newy, int newradius) :
    Shape(newx, newy) {
      radius = newradius;
    }

int Circle::getRadius() { return radius; }
void Circle::setRadius(int newradius) {
  radius = newradius;
}

void Circle::draw() {
  cout << "Drawing a circle at: (" << getX() << ", "
      << getY() << "), radius: " << getRadius() << endl;
}

int main()
{
    /*Shape s1(1,2);
    s1.draw();
    s1.rmoveTo(2,3);
    s1.draw();*/
    Rectangle *r1 = new Rectangle(1, 2, 5, 8); //Need to use pointer(*) to access classes w/ virtual functions
    //r1->draw(); //Need to use -> to access virtual functions, instead of .
    Circle *c1 = new Circle(3, 4, 5);
    //c1->draw();

    //cout << endl;

    Rectangle *r2 = new Rectangle(0, 0, 6, 9);
    Circle *c2 = new Circle(2, 6, 8);
    Shape *shapes[4];
    shapes[0] = r1;
    shapes[1] = c1;
    shapes[2] = r2;
    shapes[3] = c2;
    for(int i = 0; i < 4; ++i)
    {
        shapes[i]->draw();
        shapes[i]->moveTo(100, 100);
        shapes[i]->draw();
        cout << endl;
    }
    return 0;
}
