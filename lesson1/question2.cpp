#include <iostream>

//Prompts three number inputs, and outputs those numbers.
int main()
{
	//input (and output) numbers
	int a {};
	int b {};
	int c {};

	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	std::cout << "You entered " << a << ", " << b << ", and " << c << ".\n";

	return 0;
}
