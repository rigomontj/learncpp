#include <iostream>

//int getInteger();

int getInteger()
{
	return 99;
}

int main()
{
	int y { getInteger() };
	int z { getInteger() };

	std::cout << y << " + " << z << " is " << y + z << "\n";
	return EXIT_SUCCESS;
}
