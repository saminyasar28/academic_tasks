// A class named Complex is designed to represent complex numbers,
// where each object stores two integer data members representing the real
// and imaginary parts. The program must overload the ‘+’ operator as a
// member function to enable the addition of two complex numbers. When
// two objects are added using this operator, the function should return a
// new object containing the sum of their corresponding real and imaginary
// parts. Write a C++ program that takes input for two complex numbers,
// adds them using the overloaded operator, and displays the final result in
// the form a + bi.
#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int real;
    int imaginary;
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    
    void display()
    {
        cout << real << " + " << imaginary <<"i" << endl;
    }
    friend Complex operator + (const Complex &c1, const Complex &c2);

};
Complex operator + (const Complex &c1, const Complex &c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;

}


int main() {
    Complex c1(2,4);
    Complex c2(6,8);
    Complex c3;
    c3 = c1+c2;
    c3.display();
    
    
    return 0;
}