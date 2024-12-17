#include <iostream>

constexpr bool isEven(int number)
{
	return !(number % 2);
}

int main()
{
	std::cout << "Enter an integer: ";
	int num {};
	std::cin >> num;

	if (isEven(num))
		std::cout << num << " is even\n";
	else
		std::cout << num << " is odd\n";

	return 0;
}
