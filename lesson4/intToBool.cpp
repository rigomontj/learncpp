#include <iostream>

int main()
{
	std::cout << std::boolalpha;
	//bool b0 { 880 }; // error/warning narrowing conversion
	//std::cout << b0 << "\n";
	bool b1 = 99999; // copy init allows implicit conversion int->bool
	std::cout << b1 << "\n";
	bool b2 = 0; // copy init allows implicit conversion int->bool
	std::cout << b2 << "\n";
	bool b3 = -0; // copy init allows implicit conversion int->bool
	std::cout << b3 << "\n";
	bool b4 = -930; // copy init allows implicit conversion int->bool
	std::cout << b4 << "\n";
	return 0;
}
