#include <iostream>

int main()
{
	int left {};
	int right {};

	std::cout << "Enter two integers: ";
	std::cin >> left >> right;

	std::cout << left << " + " << right << " is " << left + right << ".\n";
	std::cout << left << " - " << right << " is " << left - right << ".\n";

	return 0;
}
