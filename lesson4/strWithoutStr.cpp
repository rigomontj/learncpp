#include <iostream>

int main()
{
	char c {};
	
	std::cout << "Enter a phrase/word/letter.\n";

	for (int i = 0; i <= 127; i++)
	{
		std::cin.get(c);
		std::cout << c;
	}

	return 0;
}
