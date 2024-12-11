#include <iostream>

int main()
{
	char c { 0 };
	for (int asciiCode { 0 }; asciiCode <= 127; asciiCode++, c++)
		std::cout << asciiCode << " " << c << "\n";
	return 0;
}
