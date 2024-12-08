#include <iostream>

int main()
{
	int x {};

	x = sizeof(bool);
	std::cout << "bool" << " is " << x << " bytes long.\n";
	x = sizeof(char);
	std::cout << "char" << " is " << x << " bytes long.\n";
	x = sizeof(short);
	std::cout << "short" << " is " << x << " bytes long.\n";
	x = sizeof(int);
	std::cout << "int" << " is " << x << " bytes long.\n";
	x = sizeof(long);
	std::cout << "long" << " is " << x << " bytes long.\n";
	x = sizeof(long long);
	std::cout << "long long" << " is " << x << " bytes long.\n";
	x = sizeof(float);
	std::cout << "float" << " is " << x << " bytes long.\n";
	x = sizeof(double);
	std::cout << "double" << " is " << x << " bytes long.\n";
	x = sizeof(long double);
	std::cout << "long double" << " is " << x << " bytes long.\n";

	return 0;
}
