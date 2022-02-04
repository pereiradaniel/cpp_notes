#include <iostream>
#include <string>
#include <typeinfo>
#include <bitset>
using namespace std;
class Foo
{

};

void doStuff(char* str)
{
    cout << "Str: " << str;
}

int main()
{
    const char* hello = "Hello World";
    doStuff(const_cast<char*>(hello));
    // Foo f;
    // decltype(f) data;
}