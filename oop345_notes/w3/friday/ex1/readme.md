# CL Compiler Warning
---
main.cpp
C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\include\ostream(284): warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc
C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.29.30133\include\ostream(269): note: while compiling class template member function 'std::basic_ostream<char,std::char_traits<char>> &std::basic_ostream<char,std::char_traits<char>>::operator <<(int)'
main.cpp(21): note: see reference to function template instantiation 'std::basic_ostream<char,std::char_traits<char>> &std::basic_ostream<char,std::char_traits<char>>::operator <<(int)' being compiled
main.cpp(21): note: see reference to class template instantiation 'std::basic_ostream<char,std::char_traits<char>>' being compiled
Microsoft (R) Incremental Linker Version 14.29.30139.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:main.exe
main.obj

g++ compiler errors:
$ g++ main.cpp
In file included from main.cpp:5:
Foo.h: In member function ‘void lectures::Foo<T>::display() const’:
Foo.h:52:22: error: there are no arguments to ‘setw’ that depend on a template parameter, so a declaration of ‘setw’ must be available [-fpermissive]
   52 |         std::cout << setw(40) << typeid(*this).name() << "    ";
      |                      ^~~~
Foo.h:52:22: note: (if you use ‘-fpermissive’, G++ will accept your code, but allowing the use of an undeclared name is deprecated)
Foo.h: In instantiation of ‘void lectures::Foo<T>::display() const [with T = int]’:
main.cpp:28:27:   required from here
Foo.h:52:26: error: ‘setw’ was not declared in this scope, and no declarations were found by argument-dependent lookup at the point of instantiation [-fpermissive]
   52 |         std::cout << setw(40) << typeid(*this).name() << "    ";
      |                      ~~~~^~~~
In file included from Foo.h:4,
                 from main.cpp:5:
/usr/include/c++/9/iomanip:225:3: note: ‘std::_Setw std::setw(int)’ declared here, later in the translation unit
  225 |   setw(int __n)
      |   ^~~~
In file included from main.cpp:5:
Foo.h: In instantiation of ‘void lectures::Foo<T>::display() const [with T = double]’:
main.cpp:31:27:   required from here
Foo.h:52:26: error: ‘setw’ was not declared in this scope, and no declarations were found by argument-dependent lookup at the point of instantiation [-fpermissive]
   52 |         std::cout << setw(40) << typeid(*this).name() << "    ";
      |                      ~~~~^~~~
In file included from Foo.h:4,
                 from main.cpp:5:
/usr/include/c++/9/iomanip:225:3: note: ‘std::_Setw std::setw(int)’ declared here, later in the translation unit
  225 |   setw(int __n)
      |   ^~~~
In file included from main.cpp:5:
Foo.h: In instantiation of ‘void lectures::Foo<T>::display() const [with T = Number]’:
main.cpp:34:30:   required from here
Foo.h:52:26: error: ‘setw’ was not declared in this scope, and no declarations were found by argument-dependent lookup at the point of instantiation [-fpermissive]
   52 |         std::cout << setw(40) << typeid(*this).name() << "    ";
      |                      ~~~~^~~~
In file included from Foo.h:4,
                 from main.cpp:5:
/usr/include/c++/9/iomanip:225:3: note: ‘std::_Setw std::setw(int)’ declared here, later in the translation unit
  225 |   setw(int __n)
      |   ^~~~