#include <iostream>
#include <array>
using namespace std;

template<typename T>
void display(const T& arr)
{
    for (auto i=0; i < arr.size(); ++i)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    std::array<int, 10> arr_1 = {1,2,3,4,5,6,7,8};
    std::array<int, 10> arr_2;
    // int arr_1[10]{1,3,4,5,6};
    // int arr_2[10];

    arr_2 = arr_1;
    
    display(arr_1);
    display(arr_2);

    // arr_1 = arr_2;
}