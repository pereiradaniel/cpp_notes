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

    cout << val.size() << endl;
    cout << "int -> "<<val<<endl;
}

int main()
{
    Number theNum;
    print(theNum);
    // print(19);
    // print("Hello");
    // print(std::string("Hi"));
}