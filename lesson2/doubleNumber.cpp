#include <iostream>

int doubleNumber(int num)
{
	return num * 2;
}

int main()
{
	int input {};
	std::cout << "Enter an integer: ";
	std::cin >> input;
	std::cout << input << " times 2 is " << doubleNumber(input) << "\n";
	return EXIT_SUCCESS;
}
