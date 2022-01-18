#include <iostream>
using namespace std;

int main()
{
    int arr[]{ 12, 5, 7, 54, 76, 32};
    
    int& item = arr[1]; // lvalue Reference
    int&& rValRef = 10; // rvalue reference

    cout << item << endl;
    item = 43;
    cout << arr[1];
}