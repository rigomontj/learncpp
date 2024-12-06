#include <iostream>
#define INTEGER int

INTEGER five()
{
	return 5;
}

INTEGER main()
{
	std::cout << five() << "\n";
	return EXIT_SUCCESS;
}
