#include <bitset>
#include <iostream>

int main()
{
	/*
	std::bitset<4> bs { 0b1010 };

	std::cout << bs << "\n";
	std::cout << (bs >> 1) << "\n";
	std::cout << (bs << 1) << "\n";
	*/

	/*
	std::bitset<4> bs4 { 0b1010 };
	std::bitset<8> bs8 { 0b1010 };
	std::cout << bs4 << "\n";	
	std::cout << bs8 << "\n";	
	std::cout << ~bs4 << "\n";	
	std::cout << ~bs8 << "\n";	
	*/

	std::bitset<8> bs1 { 0b1011 };
	std::bitset<8> bs2 { 0b0111 };
	std::bitset<8> bs3 { 0b0001 };
	std::cout << (bs1 & bs2 & bs3) << "\n";

	return 0;
}
