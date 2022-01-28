#include <iostream>
#include <utility>
#include <string>
#include <typeinfo>
#include "Foo.h"
using namespace std;
using namespace lectures;

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

int main()
{
    Foo<int> theFoo_int[5];
    theFoo_int[0].display();

    Foo<double> theFoo_double;
    theFoo_double.display();

    Foo<Number> theFoo_number[3];
    theFoo_number[0].display();
}