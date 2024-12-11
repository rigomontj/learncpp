#include <iostream>

double doCalc(double input1, char operation, double input2)
{
	if (operation == '+')
		return input1 + input2;
	else if (operation == '-')
		return input1 - input2;
	else if (operation == '*')
		return input1 * input2;
	else if (operation == '/')
		return input1 / input2;
	else
		return;
}

int main()
{
	std::cout << "Enter a double value: ";
	double input1 {};
	std::cin >> input1;

	std::cout << "Enter a double value: ";
	double input2 {};
	std::cin >> input2;

	std::cout << "Enter +, -, *, or /: ";
	char operation {};
	std::cin >> operation;

	if (operation == '+' || operation == '-'
	 || operation == '*' || operation == '/')
	{
		double result { doCalc(input1, operation, input2) };
		std::cout << input1 << " " << operation << " " << input2
				  << " is " << result << "\n";
	}

	return 0;
}
