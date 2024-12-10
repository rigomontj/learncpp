#include <iostream>

int main()
{
	std::cin >> std::boolalpha;
	std::cout << "Are you the best ? \n";
	bool answer {};
	std::cin >> answer; 

	if (answer)
		std::cout << "Yes you are !\n";
	else if (!answer)
		std::cout << "Trust yourself !\n";
	else
		std::cout << "Only YOU can know.\n";

	return 0;
}
