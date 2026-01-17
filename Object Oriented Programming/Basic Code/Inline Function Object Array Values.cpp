#include <iostream>
using namespace std;

class A {
public:
    inline int square(int x);
};

// Define the function
inline int A::square(int x) {
    return x * x;
}

int main() {
    int i, n;
    A obj;
    cout<<"Enter the value of total objects: ";
    cin>> n;
    int arr [n];


    // Input loop
    for (i = 0; i <n; i++) {
        cout << "Enter Value " << i+1 << ": ";
        cin >> arr[i];
    }

    cout <<endl<<endl;

    // Output square of each value
    for (i = 0; i <n; i++) {
        cout <<"Square of " << arr[i] << " = " << obj.square(arr[i]) << endl;
    }

    return 0;
}
