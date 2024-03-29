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
        
        // Will count how many instances of type Foo<T> are created
        static size_t m_cnt; // class member / type member
    public:
        void display() const;
        Foo();
        // disable constructor
        Foo(const Foo<T>&) = delete; // no longer creates instances that are not counted by m_cnt
    };

    // static members are defined differently
    template<typename T>
    size_t Foo<T>::m_cnt = 0u;

    // Specialization of the counter for Foo<double>
    // Works with double, not type T
    // Still templated class, needs header but nothing in it
    template<>
    size_t Foo<double>::m_cnt = 100u;

    template<typename T>
    Foo<T>::Foo() : m_value{}
    {
        // m_value =0;
        ++Foo<T>::m_cnt;
    }

    template<>
    Foo<double>::Foo() : m_value {1.24}
    {
        --Foo<double>::m_cnt;
    }

    // templated, need to specify template params
    template <typename T>
    void Foo<T>::display() const
    {
        // add colours: console command, not cpp
        // std::cout << "\33[38;2;0;255;0m]";
        std::cout << setw(40) << typeid(*this).name() << "    ";
        // std::cout << "\33[0m]";
        
        // print counter
        std::cout << std::setw(5) << Foo<T>::m_cnt << "    ";

        // print current instance
        std::cout << this->m_value << std::endl;
    }
}
#endif