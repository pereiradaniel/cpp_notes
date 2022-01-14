#include <iostream>
// #include <cstdlib>
// #include "utils.h"
using namespace std;

// const: value cannot change after creation
// constexpr: value cannot change after creation AND must
// be known at compile time

constexpr int getValue(int seed)
{
	return 2 * seed;
}

int main (int argc, char** argv)
{
	size_t val;
	cout << "Size of the array >6? ";
	cin >> val;

	// const size_t size = val;
	constexpr size_t size = 10;

	int arr[size]{1,2,3,4,5,6};
	
	for (int i=0; i<size; i++)
		cout <<arr[i]<<", ";
	cout << endl;

	// TODO
	// linkage: external + internal
	// constants
	// typedef
	// memory segments

    return 0;
}