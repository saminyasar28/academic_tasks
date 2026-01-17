#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
    virtual double area()
    {
        //cout << "Area from Shape class" << endl;
    }
};
class Circle : public Shape
{
public:
    double radius;
    Circle(double radius)
    {
        this->radius = radius;
    }
    void draw () override
    {
        cout << "Shape type Circle " << endl;
        cout << "Radius is : " << radius << endl;
    }
    double area() 
    {
        return (3.1416*radius*radius);
    }
};

class Square : public Shape
{
public:
    double side;
    Square(double side)
    {
        this->side = side;
    }
    void draw () override
    {
        cout << "Shape type Square " << endl;
        cout << "Side is : " << side << endl;
    }
    double area() 
    {
        return (side*side);
    }
};
class Triangle : public Shape
{
public:
    double height;
    double base;
    Triangle(double height, double base)
    {
        this->height = height;
        this->base = base;
    }
    void draw () override
    {
        cout << "Shape type Triangle " << endl;
        cout << "Height is : " << height << endl;
        cout << "Base is : " << base << endl;
    }
    double area() 
    {
        return (0.5*height*base);
    }
};
int main() {
    Shape *s1;

    Circle c1(5.0);

    s1 = &c1;
    s1->draw();
    cout << s1->area() << endl;

    Square p1(5.0);

    s1 = &p1;
    s1->draw();
    cout << s1->area() << endl;

    Triangle t1(5.0,4.0);

    s1 = &t1;
    s1->draw();
    cout << s1->area() << endl;

    
    
    return 0;
}