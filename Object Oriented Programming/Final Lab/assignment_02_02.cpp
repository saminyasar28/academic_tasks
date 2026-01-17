// Suppose there is a class Library that has a member function
// showLibraryInfo() which displays “Welcome to the Central
// Library!”. Two classes, BookSection and MagazineSection,
// inherit from Library. Another class DigitalLibrary inherits from
// both BookSection and MagazineSection. If we call
// showLibraryInfo() using a DigitalLibrary object, will there be
// any ambiguity? If yes, how can this ambiguity be resolved?
#include <bits/stdc++.h>
using namespace std;
class Library
{
public:
    virtual void showLibrary()
    {
        cout << "Welcome to the Central Library!" << endl;
    }

};
class BookSection :  public virtual Library
{

};
class MagazineSection : public virtual Library
{

};
class DigitalLibrary : public BookSection, public MagazineSection
{

};
int main() {
    DigitalLibrary d1;
    d1.showLibrary();
    return 0;
}