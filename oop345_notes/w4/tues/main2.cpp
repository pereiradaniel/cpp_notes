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

     // TODO: casting operators (review)
     //         declytype (use it to reveal value categories of expressions)
     //         dangers of working close to the range edges.
     //         bring up other things.
}