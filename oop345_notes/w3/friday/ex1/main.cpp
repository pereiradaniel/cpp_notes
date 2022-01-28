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
    Foo<int> theFoo_int;
    theFoo_int.display();
}