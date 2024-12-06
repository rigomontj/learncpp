#include <iostream>

using namespace std;

int cout()
{
	return 5;
}

int a { 5 };

int main()
{
	// this works because C++ is a whitespace independent language
	// and operator:: is like any other operator, has two operands
	// so you can add whitespace before and after
	//std ::
	//				cout << "Works!\n";

	// this works because :: and no left identifier assumes global namespace
	// and the variable a of int type and value 5 is defined in global scope
	// (defining it in main wouldn't work)
	cout << ::a << "\n";
	return EXIT_SUCCESS;
}
