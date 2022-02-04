#include <iostream>
using namespace std;

std::string getData()
{
    return "10";
}

int main()
{
    double arr[5]{};
    int zero = 0;
    const char* str = {"hello"};
    
    decltype(getData()+"6.2") val{};

    cout << typeid(val).name() << endl;
}