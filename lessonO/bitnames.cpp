#include <bitset>
#include <iostream>

void printHeroState(bool state, std::string_view stateName)
{
	std::cout << "Hero is" << (state ? " " : " not ") << stateName << ".\n";
}

int main()
{
	[[maybe_unused]] constexpr int	isAlive		{ 0 };
	[[maybe_unused]] constexpr int	isThirsty	{ 1 };
	[[maybe_unused]] constexpr int	isHungry	{ 2 };
	[[maybe_unused]] constexpr int	isAsleep	{ 3 };
	[[maybe_unused]] constexpr int	isMad		{ 4 };
	[[maybe_unused]] constexpr int	isSad		{ 5 };
	[[maybe_unused]] constexpr int	isLaughing	{ 6 };
	[[maybe_unused]] constexpr int	isHappy		{ 7 };

	std::bitset<8> hero { 0b00000000 };

	// best scenario
	hero.set(isAlive);

	hero.reset(isThirsty);
	hero.reset(isHungry);
	hero.reset(isAsleep);
	hero.reset(isMad);
	hero.reset(isSad);

	hero.set(isLaughing);
	hero.set(isHappy);

	std::cout << hero << "\n";
	printHeroState(hero.test(isAlive),		"alive");
	printHeroState(hero.test(isThirsty),	"thirsty");
	printHeroState(hero.test(isHungry),		"hungry");
	printHeroState(hero.test(isAsleep),		"asleep");
	printHeroState(hero.test(isMad),		"mad");
	printHeroState(hero.test(isSad),		"sad");
	printHeroState(hero.test(isLaughing),	"laughing");
	printHeroState(hero.test(isHappy),		"happy");

	return 0;
}
