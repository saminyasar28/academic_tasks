#include <iostream>
using namespace std;

// Function Template
template <typename T>
T findMax(T a, T b, T c)
{
    T maxVal = a;

    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;

    return maxVal;
}

int main()
{
    // Using int
    //int x = 10, y = 25,   z = 15;
    cout << "Max (int): " << findMax(10, 20, 30) << endl;

    // Using float
    float f1 = 3.5, f2 = 7.2, f3 = 4.8;
    cout << "Max (float): " << findMax(f1, f2, f3) << endl;

    // Using char
    char c1 = 'A', c2 = 'Z', c3 = 'M';
    cout << "Max (char): " << findMax(c1, c2, c3) << endl;

    return 0;
}
