#include <bitset>
#include <iostream>

std::bitset<8> rotl(std::bitset<8> bs, long unsigned int n)
{
	return (bs << (n % bs.size())) | (bs >> ((bs.size() - n) % bs.size()));
}

std::bitset<8> rotr(std::bitset<8> bs, long unsigned int n)
{
	return (bs >> (n % bs.size())) | (bs << ((bs.size() - n) % bs.size()));
}

int main()
{
	std::cout << "Rotate left or right? (l/r):\n";
	char side {};
	std::cin >> side;

	std::cout << "Rotate how many times:\n";
	int times {};
	std::cin >> times;

	std::cout << "Enter bit content of bitset (8-bit size):\n";
	std::bitset<8> bs1 {};
	std::cin >> bs1;

	if (side == 'l')
		std::cout << rotl(bs1, static_cast<long unsigned int>(times)) << "\n";
	else if (side == 'r')
		std::cout << rotr(bs1, static_cast<long unsigned int>(times)) << "\n";
	else
		return 1;

	return 0;
}
