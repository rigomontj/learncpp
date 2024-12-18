#include <bitset>
#include <iostream>

int main()
{
	std::bitset<8> bits { 0b0101'0101 };
	bits.set(1);
	bits.flip(3);
	bits.reset(4);
	bits.reset(6);

	std::cout << bits << "\n";

	return 0;
}
