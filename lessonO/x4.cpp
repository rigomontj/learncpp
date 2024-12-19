#include <iostream>
#include <cstdint>


int main()
{
	unsigned int input {};
	std::cout << "Enter a number between 0 and 255: ";
	std::cin >> input;
	std::cout << input << "\n";

	// 128 / mask7
	// 64  / mask6
	// 32  / mask5
	// 16  / mask4
	// 8   / mask3
	// 4   / mask2
	// 2   / mask1
	// 1   / mask0

	std::uint8_t result {};
	std::cout << result;

	return 0;
}
