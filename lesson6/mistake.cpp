#include <iostream>

int getValue()
{
	std::cout << "Enter an integer: ";

	int x {};
	std::cin >> x;
	return x;
}

void printCalculation(int x, int y, int z)
{
	std::cout << x + (y * z);
}

int main()
{
	int a { getValue() };
	int b { getValue() };
	int c { getValue() };
	printCalculation(a, b, c);

	return 0;
}
