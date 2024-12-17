#include <iostream>

int main()
{
	int x {};
	int y {};

	std::cout << "Enter two integers: ";
	std::cin >> x;
	std::cin >> y;

	std::cout << (x > y ? x : y) << "\n";

	return 0;
}
