#include <iostream>
using namespace std;

// Base class
class Library {
public:
    void showLibraryInfo() {
        cout << "Welcome to the Central Library!" << endl;
    }
};

// Derived classes with virtual inheritance
class BookSection : virtual public Library {
};

class MagazineSection : virtual public Library {
};

// DigitalLibrary inherits from both
class DigitalLibrary : public BookSection, public MagazineSection {
};

int main() {
    DigitalLibrary dl;
    dl.showLibraryInfo();  // No ambiguity because of virtual inheritance
    return 0;
}