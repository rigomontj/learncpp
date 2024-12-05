//we know we're gonna need to output text to the console
#include <iostream>

//we know we need a main function like every c++ project
int main()
{
	int num {};

	std::cout << "Enter an integer: ";
	std::cin >> num;

	std::cout << "Double " << num << " is: " << num * 2 << "\n";
	std::cout << "Triple " << num << " is: " << num * 3 << "\n";

	return 0;
}
