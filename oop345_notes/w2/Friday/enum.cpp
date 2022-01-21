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

int main()
{
    paintHouse(Colours::Blue);
}