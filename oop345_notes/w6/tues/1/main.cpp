#include <iostream>
using namespace std;
// string: is a concept, not a type (a sequence of characters, null terminated)
// char*, char[], std::string, wchar_t*, wchar_t[], std::wstring

//  cl /std:c++17 .\main.cpp
int main()
{
    // STL
    // std::string class has large overhead -> use string_view
    
    // char arr[]{"Hello World!"};
    char* arr = new char[] {"Hello World!"};
    std::string str = arr;
    std::string_view strV = arr;

    cout << arr << "  " << str << "  " << strV << endl;
    delete[] arr;
    cout << "  " << str << "  " << strV << std::endl;
}