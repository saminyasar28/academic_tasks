#include <bits/stdc++.h>
using namespace std;
template <typename T>
T Swap(T &a, T &b)
{
    // T temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b << endl ;
    swap(a, b);
}
template <typename T>
class Swapper
{
    public:
        T a;
        T b;
        T temp;
        Swapper(T a, T b)
        {
            this->a = a;
            this->b = b;
        }
        void swap_value()
        {
            temp = a;
            a = b;
            b = temp;
        }
        void display()
        {
            cout << a << " " << b << endl;
        }

};

int main() {
    int x = 10, y = 20;
    Swap(x, y);
    cout << x << " " << y << endl;

    float a = 6.5, b = 3.6;
    Swap(a, b);
    //cout << a << " " << b << endl;

    Swapper<int> s1(40, 50);
    s1.swap_value();
    s1.display();

    Swapper<float> s2(5.7, 6.9);
    s2.swap_value();
    s2.display();




    
    
    return 0;
}