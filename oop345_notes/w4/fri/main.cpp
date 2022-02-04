#include <iostream>
using namespace std;
int main()
{
    double arr[5]{};
    double val = 10;

    double* pArr = arr;

    // for (auto i=0;i< sizeof(pArr) / sizeof(pArr[0]); ++i)
    //     cout <<arr[i]<<" ";
    // cout << endl;

    cout << "Sizeof: " << sizeof(pArr) / sizeof(pArr[0]+1) <<endl;
}