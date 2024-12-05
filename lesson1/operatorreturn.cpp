#include <iostream>
#include <string>

int main()
{
	int x { 1 };
	int y { x = 5 };
	// prints 5 which is proof that x = 5 returns 5.
	std::cout << y;
	
	return 0;
}
