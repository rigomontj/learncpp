#include <iostream>
#include <bitset>

int main()
{
	std::bitset<8> bin1 { 0305 };
	std::cout << bin1 << "\n";
	std::bitset<8> bin2 { 0xC5 };
	std::cout << bin2 << "\n";
	std::bitset<8> bin3 { 0b1100'0101 };
	std::cout << bin3 << "\n";
	std::bitset<8> bin4 { 197 };
	std::cout << bin4 << "\n";
	std::cout << "\n";

	std::cout << std::oct << bin1.to_ulong() << "\n";
	std::cout << std::hex << bin2.to_ulong() << "\n";
	std::cout << bin3.to_string() << "\n";
	std::cout << std::dec << bin4.to_ulong() << "\n";
	std::cout << "\n";

	std::cout << std::bitset<8> { 0305 } << "\n";
	std::cout << std::bitset<8> { 0xC5 } << "\n";
	std::cout << std::bitset<8> { 0b11000101 } << "\n";
	std::cout << std::bitset<8> { 197 } << "\n";
	std::cout << "\n";

	return 0;
}
