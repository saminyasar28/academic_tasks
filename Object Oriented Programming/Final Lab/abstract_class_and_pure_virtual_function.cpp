#include <bits/stdc++.h>
using namespace std;
class Shape // abstract class..........
{
public:
    virtual void draw() = 0; // declaring pure virtual function........
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing circle" << endl;
    }
};
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape *shapepointer;
    Circle c1;
    Square s1;

    shapepointer = &c1;
    shapepointer->draw();

    shapepointer = &s1;
    shapepointer->draw();
    
    
    return 0;
}