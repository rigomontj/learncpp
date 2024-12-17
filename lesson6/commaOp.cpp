#include <iostream>

int main()
{
	int x { -100 };
	int y { 9 };
	std::cout << (++x, ++y) << "\n";

	return 0;
}
