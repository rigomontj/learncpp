#include <iostream>

int main()
{
	unsigned int sub {};
	std::cout << "subtract to my min unsigned int :";
	std::cin >> sub;

	unsigned int minUns { 0 };
	unsigned int answer { minUns - sub };
	std::cout << "Min unsigned int value is " << minUns << "\n";
	std::cout << "Overflow turns it into " << answer << "\n";
	
	return 0;
}
