#include <iostream>
#include <utility>
using namespace std;

class Numbers
{
    // Make a resource that is a collection of numbers: Pointer to an array.
    short* m_resource{}; // initialize the pointer with nullptr

    // A method to determine the size of the dynamically created array is required!
    size_t m_size{}; // Do not leave this uninitialized! nullptr
public:
    // custom implementation of copy operation
    // what is prototype of copy constructor?
    Numbers(const Numbers&); // Do not forget const!

};

int main()
{
    // TODO: Rule of 5
    // TODO: Enumerations

}