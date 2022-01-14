#include <iostream>
#include <cstdlib>
#include "utils.h"
using namespace std;
int main (int argc, char** argv)
{
	// TODO
	// linkage: external + internal
	// constants
	// typedef
	// memory segments

	// g_secret = -9.1
	sayHi();
	g_data = 12345;
	sayHi();
	cout << "In main: " << g_data << endl;

    return 0;
}