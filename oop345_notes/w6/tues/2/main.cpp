#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
using namespace std;

// std:: array -- manages statically allocated array of any type
// std:: vector -- manages dynamically allocated array of any type
// std::list -- 

template<typename T>
void display(const T& arr)
{
    // for (auto i=0; i < arr.size(); ++i)
    // {
    //     cout << arr[i] << ", ";
    // }
    // cout << endl;

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it << ", ";
    }
}

int main()
{
    // std::array<int, 10> arr_1 = {1,2,3,4,5,6,7,8};
    // std::array<int, 10> arr_2;
    // int arr_1[10]{1,3,4,5,6};
    // int arr_2[10];

    // arr_2 = arr_1;

    // display(arr_1);
    // display(arr_2);

    // arr_1 = arr_2;

    // std::vector<int> col {1,3,4,5,7,9};
    // col.push_back(11);
    // col.push_back(13);

    std::list<int> col{1,3,5,7,9};
    display(col);
    
    col.push_front(21);
    col.push_front(22);
    
    {
        auto it = col.begin();
        ++(++it);
        col.insert(it, 123);
    }

    {
        // remove an element
        auto it = col.begin();
        ++it;
        col.erase(it);
    }

    display(col);
}