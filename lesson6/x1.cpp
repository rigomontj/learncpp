#include <iostream>
#include <string_view>

std::string_view getQuantityPhrase(int appleAmount)
{
	if (appleAmount < 0)
		return "negative";
	else if (!appleAmount)
		return "no";
	else if (appleAmount == 1)
		return "a single";
	else if (appleAmount == 2)
		return "a couple of";
	else if (appleAmount == 3)
		return "a few";
	else // > 3
		return "many";
}

std::string_view getApplesPluralized(int apples)
{
	return ((apples == 1) ? "apple" : "apples");
}

int main()
{
	constexpr int maryApples { 3 };
	std::cout << "Mary has " << getQuantityPhrase(maryApples)
		<< " " << getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";	
	int numApples {};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples)
		<< " " << getApplesPluralized(numApples) << ".\n";

	return 0;
}
