#include <iostream>
using namespace std;

template<typename A, typename B>
auto process(A a, B, b) -> decltype(a+b)
{
    return a + b;
}

int main()
{
    cout << process(1, 2.3) << endl;
}