#include <iostream>
using namespace std;

int main()
{
    int* val = new int{10};

    *val = 12;

    // void* ptr = val; // generic pointer

    // cout << *ptr << endl; // cannot de reference generic pointer
    cout << *val << endl;
}