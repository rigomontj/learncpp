#include <format>
#include <iostream>

int main()
{
	// C++20, formats the arguments as binary digits
	std::cout << std::format("{:b}\n", 0b1010);
	// C++20, formats the arguments as 0b-prefixed binary digits
	std::cout << std::format("{:#b}\n", 0b1010);

	// C++23, print two arguments
	//std::cout << std::println("{:#b} {:b}", 0b1010, 0b0101);

	return 0;
}
