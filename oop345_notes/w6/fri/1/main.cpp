#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <functional>
using namespace std;

// std:: array -- manages statically allocated array of any type
// std:: vector -- manages dynamically allocated array of any type
// std::list --

void func(const char* data)
{
    cout << "Hello from function. [" << data << "]\n";
};

int main()
{

    // TODO: stack & queue
    std::function<void (const char*)> f1 = func;  // function object
    std::function<void (const char*)> f2 = [](const char* data) {
        cout << "Hello from lambda. [" << data << "]\n";
    };

    f1("C++");
    f2("C++ with lambda");
}