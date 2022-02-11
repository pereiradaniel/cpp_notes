#include <iostream>
using namespace std;
void display(int arr[], size_t size)
{
    for (auto i = 0; i < size; ++i)
        cout << arr[i] << ", ";
    cout << endl;
}
bool desc(int a, int b) { return a < b; }
bool asc(int a, int b) { return a > b; }
bool oddEven(int a, int b)
{
    // all even numbers are considered smaller than odd numbers
    if ((a%2==1||a%2==-1)&&b%2==0)
        return true;//
    return false;
}
// use a function object when needing to maintain a state
// functor, function object
class Comparator
{
    int m_usageCount{}; // counts how many times the operator() has been used
    // overloading() operator means this class is a functor!
    public:
    bool operator()(int a, int b)
    {
        ++m_usageCount;
        return a < b; // sort descending
    }; // overload operator

    void display() const {cout<< "Made [" << m_usageCount << "] comparisons.\n"; }
};

// bool (*compare(int, int)) // this is a callback function!
// void bubbleSort(int arr[], size_t size, bool (*compare)(int, int))
// void bubbleSort(int arr[], size_t size, Comparator& compare)
// Restriction on Comp must match the prototype bool (int, int)
template<typename Comp>
void bubbleSort(int arr[], size_t size, Comp& compare)
{
    // cout << typeid(compare);
    for (size_t i = 0; i < size - 1; ++i)
        for (size_t j = i+1; j < size; ++j)
            if (compare(arr[i], arr[j])) // should the numbers be switched?
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

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

    int usageCnt = 0;
    Comparator comp_fo;

    auto comp_lambda = [&usageCnt](int a, int b) -> bool
    {
        ++usageCnt;
        cout << "Lambda Cnt: " << usageCnt << endl;
        return a < b;
    };

    int arr[]{32,1,67,32,9,-4,3,76};

    display(arr, sizeof(arr) / sizeof(arr[0])); // number of bytes used by array / size of single element = number of elems
    
    // bubbleSort(arr, sizeof(arr) / sizeof(arr[0]), comp_fo);
    
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]), comp_lambda);
    display(arr, sizeof(arr) / sizeof(arr[0]));
    
    // third method of injecting code into bubblesort:
    // [] captures context, local variables
    // () parameters for the lambda
    // {} needs to return something and have implementation
    // []() -> bool {};
    
    // lambdas are functions objects generated by the compiler

    // when to use
    
    // lambda used when throw away function is needed,
    // something that is just used locally
    
    // function object
    // the most complicated usage cases
    // something to maintain state in between calls
    // comp_fo.display();
    cout << "Made [" << usageCnt << "] comparisons.\n";
}