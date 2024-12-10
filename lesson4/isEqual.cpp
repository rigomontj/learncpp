#include <iostream>

bool isEqual(int left, int right)
{
	return left == right;
}

int main()
{
	std::cout << "Enter two integers: ";
	int left {};
	int right {};
	std::cin >> left;
	std::cin >> right;
	
	if (isEqual(left, right))
		std::cout << "They're like, exactly the same. Crazy.\n";
	else if (!isEqual(left, right))
		std::cout << "Not quite, they're similar but ...\n";
	else 
		std::cout << "How did we even get here?\n";

	return 0;
}
