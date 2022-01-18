#include <iostream>
using namespace std;

// Overload the print function
int print(int& data)
{
    cout << "lValue\n";
    return 10; // return temporary object
}

void print(int&& data) // receives an rvalue reference
{
    cout << "rValue\n";
}

int main()
{
    int val = 10;
    print (10);
    // print(val) = 43; // returns a TEMPORARY object, does not work!
    print(print(val)); // second print receives an rvalue reference
}