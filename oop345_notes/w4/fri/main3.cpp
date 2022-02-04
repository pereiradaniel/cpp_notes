#include <iostream>
#include <string>
#include <bitset>

using namespace std;

std::string getData()
{
    cout <<"Hello\n";
    return "10";
}


int main()
{
    cout << "is unsigned 0 greater than signed -1? " << (0u > -1?"yes":"no") << endl;

    auto a = 0u;
    cout << "Unsigned int: "<<a<<" -> " <<bitset<32>(a) << "\n";

    --a;

    cout << "Unsigned int: "<<a<<" -> " <<bitset<32>(a) << "\n";

}