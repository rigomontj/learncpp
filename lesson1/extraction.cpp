#include <iostream>

int main()
{
	int input {};
	int a {};
	int b {};
	int c {};

	std::cout << "Enter a number:\n";
	std::cin >> input;
	std::cout << "\nYou entered \'" << input << "\'\n";

	std::cout << "Enter three numbers separated by a SPACE, TAB or ENTER(newline):\n";
	std::cin >> a >> b >> c;
	std::cout << "\nYou entered"
			<< " \'" << a << "\'"
			<< " \'" << b << "\'"
			<< " and \'" << c << "\'\n";
	return 0;
}
