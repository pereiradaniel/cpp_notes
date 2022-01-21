#include <iostream>
#include <utility>
using namespace std;

enum class Colours
{
    Red,    //0
    Green,  //1
    Blue    //2
};

enum class WebColours // use "class" to disambiguate
{
    Magenta,
    Pink,
    Red,
    Orange
};

void paintHouse(Colours colour)
{
    if (colour == Colours::Red)
        cout << "House is painted RED.";
    else if (colour == Colours::Green)
        cout << "House is painted GREEN.";
    else if (colour == Colours::Blue)
        cout << "House is painted BLUE.";
    cout << endl;
}

// First 4 bytes: INT, Next 8 bytes: DOUBLE, Next 32 bytes char[]
struct StrucData // 44 bytes
{
    int m_int;          //4
    double m_double;    //8
    char m_strp[32];    //32
};

union UnionData // Will have the size of the biggest field (32 bytes)
{
    int m_int;          //4
    double m_double;    //8
    char m_strp[32];    //32
};

int main()
{
    paintHouse(Colours::Blue);
}