#include <iostream>
#include "utils.h"
using namespace std;
int g_data = 10;
// double g_secret = 4.567;
void sayHi() {
    cout << "Hello world!\n";
    cout << "Data ["<< g_data <<"]\n";
    // cout << "Secr.["<< g_secret <<"]\n";
}