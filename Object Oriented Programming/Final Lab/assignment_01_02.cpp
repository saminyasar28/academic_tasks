// You are designing a small hierarchy for a vehicle system. The
// base class Vehicle has a function startEngine(). Two derived
// classes Car and Bike both inherit from Vehicle and override this
// function to show different messages. Write a main function to
// demonstrate runtime polymorphism using pointers or references.
// Explain which type of inheritance and which concept of OOP
// are used here.
#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    virtual void startEngine()
    {
        cout << "Called from Vehicle class" << endl;
    }
};
class Car : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Called from Car class" << endl;
    }
};
class Bike : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Called from bike class" << endl;
    }
};

int main()
{
    Vehicle *vehicle_pointer;

    Car c1;
    Bike b1;

    vehicle_pointer = &c1;
    vehicle_pointer->startEngine();

    vehicle_pointer = &b1;
    vehicle_pointer->startEngine();

    return 0;
}