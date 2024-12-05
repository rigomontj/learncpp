#include <iostream>

int getInput()
{
	int input {};

	std::cout << "Enter an integer: ";
	std::cin >> input;
	return input;
}

int multiplyByTwo(int number)
{
	return number * 2;	
}

void printResult(int initialValue, int result)
{
	std::cout << initialValue << " times two is " << result << "\n";
}

int main()
{
	int consoleInput {getInput()};	
	printResult(consoleInput, multiplyByTwo(consoleInput));
	return 0;
}
