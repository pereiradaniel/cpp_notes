#include <iostream>
#include <cstdlib>
#include "utils.h"
using namespace std;
int main (int argc, char** argv) {

	// for (auto i = 0; i < argc; i++)
	// 	std::cout << i << ". " << argv[i] << endl;
	
	// auto res = atoi(argv[1]) * 2;
	// cout << "The number is: " << res << endl;
	
	// TODO
	// linkage: external + internal
	// constants
	// typedef
	// memory segments

	sayHi();
	g_data = 12345;
	sayHi();

    return 0;
}