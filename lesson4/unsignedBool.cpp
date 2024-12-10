#include <iostream>
#define MAX_UINT 4294967295

int main()
{
	unsigned int toOverflow { MAX_UINT };
	std::cout << "Should I increment ?\n";
	bool incrementCommand {};
	std::cin >> incrementCommand;
	std::cout << std::boolalpha;
	std::cout << "You said " << incrementCommand << "\n"; 
	std::cout << std::noboolalpha;
	toOverflow += incrementCommand;


	if (4)
		std::cout << "4 gets turned into a boolean 1 \n";
	if (!toOverflow)
		std::cout << "Yep, back to zero.\n";
	else
		std::cout << "I'm different than 0, atleast.\n";
	
	return 0;
}
