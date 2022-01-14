#include <iostream>
#include <cstdlib>
{
	 for (auto i = 0; i < argc; i++)
		std::cout << i << ". " << argv[i] << endl;
	
	auto res = atoi(argv[1]) * 2;
	cout << "The number is: " << res << endl;
	
	// TODO
	// linkage: external + internal
	// constants
	// typedef
	// memory segments

    return 0;
}