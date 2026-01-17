#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    friend double calculate(Rectangle obj);
    friend class RectangleAnalyzer;
};
double calculate(Rectangle obj)
{
    return (obj.length * obj.width);
}
class RectangleAnalyzer
{
public:

    void display(Rectangle &r1)
    {
        cout << endl;
        r1.length = 10;
        r1.width = 10;
        cout << ((r1.length == r1.width) ? "Square " : "Not Square ");
    }
    // Rectangle r1;
    // void display(Rectangle r1)
    // {
    //     r1.
    // }
};

int main()
{

    Rectangle obj(4.5, 6.9);

    cout << "Area is : " << calculate(obj);

    RectangleAnalyzer r1;
    r1.display(obj);
    cout << "Area is : " << calculate(obj);


    return 0;
}