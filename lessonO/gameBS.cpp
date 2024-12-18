#include <bitset>
#include <iostream>
#include <cmath>

int main()
{
	[[maybe_unused]] std::bitset<8> isHungry   {  0x1  }; 
	[[maybe_unused]] std::bitset<8> isSad      {  0x2  }; 
	[[maybe_unused]] std::bitset<8> isMad      {  0x4  }; 
	[[maybe_unused]] std::bitset<8> isHappy    {  0x8  }; 
	[[maybe_unused]] std::bitset<8> isLaughing {  0x10 }; 
	[[maybe_unused]] std::bitset<8> isAsleep   {  0x20 }; 
	[[maybe_unused]] std::bitset<8> isDead     {  0x40 }; 
	[[maybe_unused]] std::bitset<8> isCrying   {  0x80 }; 

	std::bitset<8> player {}; 
	player |= (isHappy | isLaughing); // sets isHappy and isLaughing to 1
	size_t position = static_cast<size_t>(std::log2(isLaughing.to_ulong()));
	player.reset(position); // resets isLaughing to 0

	std::cout << std::boolalpha; 
	std::cout << "I am happy? " << (player & isHappy).any() << '\n';
	std::cout << "I am laughing? " << (player & isLaughing).any() << '\n';

	return 0;
}
