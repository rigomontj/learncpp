#include <iostream>

int main()
{
	std::cout << std::boolalpha;
	std::cout << "Enter a boolean: ";
	bool bInput {};
	std::cin >> bInput;

	std::cout << "It is " << bInput << "\n"; 

	std::cin >> std::boolalpha;
	std::cout << "Enter a boolean: ";
	std::cin >> bInput;

	std::cout << "It is " << bInput << "\n"; 


	return 0;
}
