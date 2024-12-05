#include <iostream>

void printHi()
{
	std::cout << "Hi!\n";
}

int main()
{
	printHi();
	//printHi() + 1; does not work because printHi() returns void
	//				 and operator+ needs two operands of non-void type
	return EXIT_SUCCESS;
}
