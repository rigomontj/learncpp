#include <cstdint>
#include <iostream>

int main()
{
	[[maybe_unused]] constexpr std::uint8_t isHungry   {  0x1  }; 
	[[maybe_unused]] constexpr std::uint8_t isSad      {  0x2  }; 
	[[maybe_unused]] constexpr std::uint8_t isMad      {  0x4  }; 
	[[maybe_unused]] constexpr std::uint8_t isHappy    {  0x8  }; 
	[[maybe_unused]] constexpr std::uint8_t isLaughing {  0x10 }; 
	[[maybe_unused]] constexpr std::uint8_t isAsleep   {  0x20 }; 
	[[maybe_unused]] constexpr std::uint8_t isDead     {  0x40 }; 
	[[maybe_unused]] constexpr std::uint8_t isCrying   {  0x80 }; 

	std::uint8_t player {}; 
	player |= (isHappy | isLaughing); // sets isHappy and isLaughing to 1
	player &= static_cast<std::uint8_t>(~isLaughing); // resets isLaughing to 0

	std::cout << std::boolalpha; 
	std::cout << "I am happy? " << static_cast<bool>(player & isHappy) << '\n';
	std::cout << "I am laughing? " << static_cast<bool>(player & isLaughing) << '\n';

	return 0;
}
