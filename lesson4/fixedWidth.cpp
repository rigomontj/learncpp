#include <cstdint>
#include <iostream>

int main()
{
	std::uint8_t x { 144 };
	std::cout << x << "\n";
	x += 1;
	std::cout << x << "\n";
	return 0;
}
