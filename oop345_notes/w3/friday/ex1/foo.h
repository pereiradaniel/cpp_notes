#ifndef FOO_H
#define FOO_H
#include <typeinfo>
#include <iomanip>
#include <iostream>

namespace lectures
{
    template <typename T>
    class Foo
    {
        T m_value; // placeholder for a type
    public:
        void display() const;
        Foo();
    };

    template<typename T>
    Foo<T>::Foo() : m_value{}
    {
        // m_value =0;
    }

    // templated, need to specify template params
    template <typename T>
    void Foo<T>::display() const
    {
        // add colours: console command, not cpp
        // std::cout << "\33[38;2;0;255;0m]";
        std::cout << setw(40) << typeid(*this).name() << "    ";
        // std::cout << "\33[0m]";
        std::cout << this->m_value << std::endl;
    }
}
#endif