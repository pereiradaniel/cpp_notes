#include <iostream>
#include "utils.h"
using namespace std;
int g_data = 10;
void sayHi() {
    cout << "Hello world!\n";
    cout << "Data "<< g_data <<"\n";
}