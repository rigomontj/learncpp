//compile without -Werror OR without -Wall and -Wextra
#include <iostream>

int main()
{
	int x;
	int y {};

	std::cout << x << "default-init\n";
	std::cout << y << "direct-list-init\n";

	return 0;
}
