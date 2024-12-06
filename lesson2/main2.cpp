#include "main2.h"
#include <iostream>

int main()
{
	int x { 5 };
	int y { 6 };

	std::cout << "The sum of " << x << " and " << y << " is " << add(x, y)
		<< "\n";
	return EXIT_SUCCESS;
}
