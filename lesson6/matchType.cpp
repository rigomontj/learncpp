#include <iostream>
#include <string>

int main()
{
	constexpr int x { 5 };
	// std::cout << ((x != 5) ? std::to_string(x) : "x is 5"); 

	// or use an if-else statement
	if (x != 5)
		std::cout << x << "\n";
	else
		std::cout << "x is 5" << "\n";

	return 0;
}
