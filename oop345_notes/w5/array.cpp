#include <iostream>
using namespace std;
void display(int arr[], size_t size)
{
    for (auto i = 0; i < size; ++i)
        cout << arr[i] << ", ";
}

bool desc(int a, int b)
{
    return a < b;
}

bool asc(int a, int b)
{
    return a > b;
}

bool oddEven(int a, int b)
{
    // all even numbers are considered smaller than odd numbers
    if ((a%2==1||a%2==-1)&&b%2==0)
        return true;//
    return false;
}

void bubbleSort(int arr[], size_t size)
{
    for (size_t i = 0; i < size - 1; ++i)
        for (size_t j = 0; i < size; ++j)
            if (arr[i] > arr[j]) // should the numbers be switched?
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int main()
{
    bool (*compare)(int, int);
    char choice = '\0';
    cin >> choice;
    if (choice == 'a')
        compare = &asc;
    else if (choice == 'd')
        compare = desc;
    else
        compare = oddEven;

    int arr[]{32,1,67,32,9,-4,3,76};
    display(arr, sizeof(arr) / sizeof(arr[0])); // number of bytes used by array / size of single element = number of elems
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    display(arr, sizeof(arr) / sizeof(arr[0]));
}