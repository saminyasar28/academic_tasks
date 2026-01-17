#include <iostream>
using namespace std;

class Student {
protected:
    string name;
public:
    Student() {
        cout << "Student constructor called." << endl;
    }
    ~Student() {
        cout << "Student destructor called." << endl;
    }
    void getStudentData() {
        cout << "Enter student name: ";
        cin >> name;
    }
    void showStudentData() {
        cout << "Name: " << name << endl;
    }
};

class Exam : public Student {
protected:
    int marks;
public:
    Exam() {
        cout << "Exam constructor called." << endl;
    }
    ~Exam() {
        cout << "Exam destructor called." << endl;
    }
    void getExamData() {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void showExamData() {
        cout << "Marks: " << marks << endl;
    }
};

class Result : public Exam {
    protected:
    string grade;
public:
    Result() {
        cout << "Result constructor called." << endl;
    }
    ~Result() {
        cout << "Result destructor called." << endl;
    }
    void getResultData() {
        cout << "Enter grade: ";
        cin >> grade;
    }
    void showResultData() {
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result r;  // Creates object, constructors will run automatically

    r.getStudentData();
    r.getExamData();
    r.getResultData();

    cout << "\n--- Displaying Information ---" << endl;
    r.showStudentData();
    r.showExamData();
    r.showResultData();

    return 0;  // Destructors will run automatically here
}
