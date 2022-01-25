// OOP345 w3 notes
// review parametric polymorphism
#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void move() = 0; // pure virtual function
    virtual void eat() = 0; // pure virtual function
};

class Dog : public Animal
{
public:
    virtual void move();
    virtual void eat();
};

void Dog::move()
{
    cout << "The dog is moving...\n";
}

void Dog::eat()
{
    cout << "The dog is eating...\n";
}

int main()
{
    Dog theDog;

    return 0;
}