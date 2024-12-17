#include <iostream>

int main()
{
	int x { 0 };
	int y { --x };

	std::cout << "x = " << x << ", y = " << y << "\n";	

	return 0;
}
