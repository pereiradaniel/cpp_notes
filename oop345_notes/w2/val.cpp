#include <iostream>
using namespace std;
int main()
{

    // const is attached to the integer not the value at the address stored in pointer!
    // This is LEGAL in cpp!

    // to make the pointer const:
    // const int* const val
    const int* val;
    val = new int;
    cout << *val << endl;
}