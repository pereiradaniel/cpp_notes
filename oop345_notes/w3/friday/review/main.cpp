#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Number
{
    int val = 123;
public:
    Number() = default;
    int size() const {return 100;}
    friend ostream& operator<<(ostream& out,const Number& num);
    Number(const Number&) = delete; // Don't add this operation!
};

ostream& operator<<(ostream& out, const Number& num)
{
    out << num.val;
    return out;
}

template<typename T>
void print(const T& val)
{
    // assumes that T has size() function
    // that << works

    // cout << val.size() << endl;
    // cout << "int -> "<<val<<endl;
    cout << typeid(val).name() << " -> " << val << endl;
    return val;
}

class ABC
{
    short m_notAResource{};
    int* m_resource{};
public:
    // move constructor
    ABC(ABC&& other)
    {
        m_resource = nullptr;
        *this = std::move(other); 
    }
    // move =
    ABC& operator=(ABC&& other)
    {
        // check for self-assignment
        if(this != &other)
        {
            // do move
            m_notAResource = other.m_notAResource;
            // clean up
            delete m_resource;

            // move resource
            this->m_resource = other.m_resource;
            other.m_resource = nullptr;
        }
        return *this;
    }
};

int main()
{
    int data = 23;
    print(data) = 8765;
    cout << data;
    // Number theNum;
    // print(theNum);
    // print(19);
    // print("Hello");
    // print(std::string("Hi"));
}