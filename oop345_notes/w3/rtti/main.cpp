// OOP345 w3 notes
// INCOMPLETE

#include <iostream>
#include <typeinfo>
using namespace std;

class Animal
{
    public:
    virtual void move() = 0; // pure virtual function
    virtual void eat() = 0; // pure virtual function
};

#pragma region Dog
class Dog : public Animal
{
    std::string m_name = "Hunter";
public:
    virtual void move() override;
    virtual void eat() override;
    void bark();
};

void Dog::move()
{
    cout << "The dog is moving...\n";
}

void Dog::eat()
{
    cout << "The dog is eating...\n";
}

void Dog::bark()
{
    cout << m_name << " barks.\n";
}

#pragma region endregion Dog

#pragma region Cat
class Cat:public Animal
{
public:
    void move() override;
    void eat() override;
};

void Cat::move()
{
    cout << "Cat jumps into a tre.\n";
}

void Cat::eat()
{
    cout << "Cat caught a mouse and eats it.\n";
}
#pragma endregion Cat

class MechanicalDog:public Dog
{
public:
    void eat();
};

int main()
{
    Animal* theAnimal{}; // Cannot create an instance of type animal, make a pointer
    char choice = '\0';
    cout << "What animal? (d/c) ";
    cin >> choice;
    if (choice == 'd')
        theAnimal = new Dog; // instantiate Dog class
    else
        theAnimal = new Cat;
    
    theAnimal->move(); // late binding or dynamic dispatch
    theAnimal->eat();

    // Dynamic cast to force Cat to bark
    Dog* ptrDog = dynamic_cast<Dog*>(theAnimal);
    // How do I check if this is a Dog?
    // Dynamic case returns NULL if the conversion is not possible
    if (ptrDog != nullptr)
        ptrDog->bark();
    else
        cout << "Not a dog!\n";

    // theAnimal->bark();

    typeid(theAnimal);
    cout << "The type is: " << typeid(*theAnimal).name();

    return 0;
}