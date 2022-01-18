#include <iostream>
using namespace std;
int main()
{
    int arr[]{ 12, 5, 7, 54, 76, 32};
    
    int* pArr = arr; // arr is address of frist address of the array!

    // pArr could not be used in the for each loop...
    // Range form can not be used for pointers! Only statically allocated array.

    // auto& avoids making copies
    // const prevents array elements from being accidentally changed
    // works faster

    for (const auto& item : arr)
        cout << item <<", ";
    cout << endl;
}