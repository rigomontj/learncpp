#include <iostream>

int getInput()
{
	int input {};
	std::cin >> input;

	return input;
}

int intPow(int x, int n)
{
	int result { x };

	for (int i = 1; i < n; i++)
		result *= x;

	return result; 
}

int main()
{
	int number { getInput() };
	int power  { getInput() };

	std::cout << intPow(number, power) << "\n";

	return 0;
}
