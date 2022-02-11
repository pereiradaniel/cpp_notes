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

// bool (*compare(int, int)) // this is a callback function!
// void bubbleSort(int arr[], size_t size, bool (*compare)(int, int))
// void bubbleSort(int arr[], size_t size, Comparator& compare)
// Restriction on Comp must match the prototype bool (int, int)
template<typename Comp>
void bubbleSort(int arr[], size_t size, Comp& compare)
{
    for (size_t i = 0; i < size - 1; ++i)
        for (size_t j = 0; i < size; ++j)
            if (compare(arr[i], arr[j])) // should the numbers be switched?
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}


// functor, function object
class Comparator
{
    // overloading() operator means this class is a functor!
    public:
    bool operator()(int a, int b) const
    {
        return a < b; // sort descending
    }; // overload operator
};

int main()
{
    // bool (*compare)(int, int);
 
    // char choice = '\0';
    // cout << "How to sort? (a/d/o) ";
    // cin >> choice;
    // if (choice == 'a')
    //     compare = &asc;
    // else if (choice == 'd')
    //     compare = desc;
    // else
    //     compare = oddEven;

    Comparator comp_fo;

    int arr[]{32,1,67,32,9,-4,3,76};

    display(arr, sizeof(arr) / sizeof(arr[0])); // number of bytes used by array / size of single element = number of elems
    
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]), comp_fo);
    display(arr, sizeof(arr) / sizeof(arr[0]));
}