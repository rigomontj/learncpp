#include <iostream>

int main()
{
	std::cout << "Would you like a burrito? (Y/n)";
	char answer {};
	std::cin >> answer;

	if (answer == 'Y' || answer == 'y')
		std::cout << "You've requested a burrito.\n";
	else if (answer == 'n')
		std::cout << "You do not want a burrito.\n";
	else
		std::cout << "Unsupported answer.\n";

	return 0;
}
