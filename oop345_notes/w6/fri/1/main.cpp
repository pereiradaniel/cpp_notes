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

class Foo
{
    public:
        void operator()(const char* data) const
        {
            cout << "Hello from functors. [" << data << "\n]";
        }
};

int main()
{

    // TODO: stack & queue
    std::function<void (const char*)> f1 = func;
    std::function<void (const char*)> f2 = [](const char* data) {
        cout << "Hello from lambda. [" << data << "]\n";
    };
    std::function<void (const char*)> f3 = func;

    f1("C++");
    f2("C++ with lambda");
    f3("C++ with function object.");

    // for workshop 5
    //std::function<???> errorReport;
}