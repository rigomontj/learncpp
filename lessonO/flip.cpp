#include <cstdint>
#include <bitset>
#include <iostream>

int main()
{
	[[maybe_unused]] constexpr std::uint8_t mask0 { 0x1 };
	[[maybe_unused]] constexpr std::uint8_t mask1 { 0x2 };
	[[maybe_unused]] constexpr std::uint8_t mask2 { 0x4 };
	[[maybe_unused]] constexpr std::uint8_t mask3 { 0x8 };
	[[maybe_unused]] constexpr std::uint8_t mask4 { 0x10 };
	[[maybe_unused]] constexpr std::uint8_t mask5 { 0x20 };
	[[maybe_unused]] constexpr std::uint8_t mask6 { 0x40 };
	[[maybe_unused]] constexpr std::uint8_t mask7 { 0x80 };

	std::uint8_t flags { 0b0100'1100 };
	std::cout << static_cast<std::bitset<8>>(flags) << "\n";
	
	std::cout << "bit 0 is "
		<< (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");

	flags ^= mask0;

	std::cout << "bit 0 is now "
		<< (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");
	// remember, bitset indexes go from left to right,
	// so rightmost is index 0 and leftmost is index 7
	
	std::cout << static_cast<std::bitset<8>>(flags) << "\n";

	std::cout << "bit 1 is "
		<< (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");
	std::cout << "bit 2 is "
		<< (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

	flags ^= mask1 | mask2;

	std::cout << "bit 1 is now "
		<< (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");
	std::cout << "bit 2 is now "
		<< (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

	std::cout << static_cast<std::bitset<8>>(flags) << "\n";

	return 0;
}
