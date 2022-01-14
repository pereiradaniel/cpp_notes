#include <iostream>
#include "utils.h"
using namespace std;

int g_data = 10;
static double g_secret = 4.567;

void sayHi() {
    // Create a static variable inside the function, this will exist in memory for the entire program.
    static int cnt = 1;
    
    cout << cnt << "Hello world!\n";
    cout << "Data ["<< g_data <<"]\n";
    cout << "Secr.["<< g_secret <<"]\n";

    ++cnt;
}