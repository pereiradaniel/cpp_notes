#include <iostream>
using namespace std;

int main()
{
    int arr[10]{};
    for (auto& item : arr)
    {
        cout << item << ", ";
    }
    cout << endl;

    // int* ptr = &arr[5];
    // ptr[-1] = 10;

    for (int* ptr = arr +5; ptr < arr + 10; ++ptr)
        *ptr =33;

    for (auto& item : arr)
    {
        cout << item << ", ";
    }
    cout << endl;
}