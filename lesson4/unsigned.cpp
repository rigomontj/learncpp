#include <iostream>

int main()
{
	unsigned int excess {};
	std::cout << "Add to my max unsigned int :";
	std::cin >> excess;

	// 8 * sizeof(unsigned int)
	// unsigned int unsIntBitSize = 32;
	// (2^unsIntBitSize) - 1 
	unsigned int maxUns { 4294967295 };
	unsigned int answer { maxUns + excess };
	std::cout << "Max unsigned int value is " << maxUns << "\n";
	std::cout << "Overflow turns it into " << answer << "\n";
	
	return 0;
}
