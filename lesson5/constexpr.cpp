#include <iostream>

int getNumber()
{
	std::cout << "Enter a number: ";
	int y {};
	std::cin >> y;

	return y;
}

int five()
{
	return 5;
}

int main()
{
	// literals can be used in constant expressions	
	5;
	1.2;
	"Hello world!";

	// Most operators that have constant expression operands
	// can be used in constant expressions
	5 + 6;
	1.2 * 3.4;
	8 - 5.6;
	sizeof(int) + 1;
	
	// Calls to non constexpr functions can only be used in
	// runtime expressions
	getNumber();
	five();

	// usable in constant expressions
	const int a { 5 };
	const int b { a };
	const int c { b + 2 };

	// unusable in constant expressions
	int d { 5 }; // d is non-const
	const int e { d }; // initializer is non-const
	const double f { 1.2 }; // not a const integral variable

	return 0;
}
