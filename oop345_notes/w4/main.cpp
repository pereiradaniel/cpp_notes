#include <iostream>
using namespace std;

// INHERITANCE
// Strongest because it is most difficult to decouple.

// COMPOSITION
// Will do life management of the other instance

// AGGREGATION
// doesn't do life management of the owned object.

// ASSOCIATION
// No ownership, simply using services.

class Foo
{
public:
void display() const {cout << "Hello\n"; }
};

class Bar
{
    // Foo aFoo; // clear composition
    Foo* pFoo;

public:
    Bar(Foo* aFoo) : pFoo {aFoo}
    {
        // pFoo = new Foo(*aFoo);
        pFoo = aFoo;
    }
};

int main()
{
    Foo aFoo;
    {
        Bar aBar(&aFoo);
    }
    aFoo.display();
}