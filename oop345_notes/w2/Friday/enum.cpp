#include <iostream>
#include <utility>
using namespace std;

enum Colours
{
    Red,    //0
    Green,  //1
    Blue    //2
};

void paintHouse(Colours colour)
{
    if (colour == Red)
        cout << "House is painted RED.";
    else if (colour == Green)
        cout << "House is painted GREEN.";
    else if (colour == Blue)
        cout << "House is painted BLUE.";
    cout << endl;
}

int main()
{
    paintHouse(Blue);
}