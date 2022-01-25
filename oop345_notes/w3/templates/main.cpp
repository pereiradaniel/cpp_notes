#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template<typename T>
void print(T val)
{
    cout << "int -> "<<val<<endl;
}

void print(std::string val)
{
    cout << "std::string -> "<<val<<endl;
};

int main()
{
    print(19);
    print("Hello");
    print(std::string("Hi"));
}