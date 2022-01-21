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
    Numbers(size_t initialSize) : m_size{initialSize}
    {
        cout << "Cust C: " << this << " with size " << initialSize << endl;
        // this->m_size = initialSize;
        this->m_resource = new short[this->m_size];
        for (auto i=0u; i<m_size; ++i)
            this->m_resource[i] = i*2;
    }
    // custom implementation of copy operation
    // what is prototype of copy constructor?
    Numbers(const Numbers& other){ // Do not forget const! 
        // Inline implementation
        cout << "Copy C: " << this << " from " << &other << endl;
        *this = other; // call the copy assignment
    }
    // prototype for copy assignment operator
    Numbers& operator=(const Numbers& other)
    {
        cout << "Copy =: " << this << " from " << &other << endl;
        // two objects are the same if they have the same address!
        // 1. Check for self-assignment
        if (&other != this) { // compare two addresses:
            // different objects; start to copy
            // 2. Shallow copy (copy everything that is not a resource)
            this->m_size = other.m_size;

            // 3. Clean-up (delete the resource from it's current instance)
            delete[] this->m_resource;

            // 4. Deep copy
            this->m_resource = new short[this->m_size];
            for (auto i = 0u; i < this->m_size; ++i) // m_size is unsigned
            {
                this->m_resource[i] = other.m_resource[i];
            }
        }
        return *this;
    }
    ~Numbers()
    {

        cout << " ~Numbers(): " << this << " Resource[" << this->m_resource << "]\n";
        delete[] this->m_resource; // ?????
    }
};

int main()
{
    Numbers f(5);
    // TODO: Rule of 5
    // TODO: Enumerations

}