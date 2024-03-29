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

    // MOVE OPERATIONS
    // rvalue references are called move references

    // Move constructor
    Numbers(Numbers&& other) noexcept // use of rvalue is how we identify a dying object
    {
        cout << "Move =: " << this << " from " << &other << endl;
        this->m_resource = nullptr;
        *this = std::move(other); // move assignment

        // cout << "Move C: " << this << " from " << &other << endl;
        // // this->m_resource = nullptr; // not sure, so make sure it is null
        // *this = other; // copy  assignment
    }

    // Move assignment (returns an lvalue reference of type Numbers)
    Numbers& operator=(Numbers&& other) noexcept
    {
        cout << "Move =: " << this << " from " << &other << endl;
        // 1. Check for self assignment
        if (this != &other)
        {
            // 2. Shallow copy
            this->m_size = other.m_size;

            // 3. clean-up
            delete[] this->m_resource;

            // 4. Move the resource
            this->m_resource = other.m_resource;
            other.m_resource = nullptr;
        }
        return *this;
    }

    ~Numbers()
    {

        cout << " ~Numbers(): " << this << " Resource[" << this->m_resource << "]\n";
        delete[] this->m_resource; // ?????
    }

    // reverse number sign
    Numbers transform()
    {
        Numbers tmp = *this; // copy 
        for (auto i=0; i< tmp.m_size; ++i)
            tmp.m_resource[i] *= -1; // flip sign
        
        return tmp;
    }

    void display()
    {
        for (auto i =0u; i < this->m_size; ++i)
            cout << this->m_resource[i] << ", ";
        cout << endl;
    }
};


int main()
{
    Numbers f(5);
    //f = Numbers(2); // copy assignment
    // Numbers f2(f);
    Numbers f2 = f.transform();
    f.display();
    f2.display();
    // TODO: Rule of 5
    // TODO: Enumerations

}