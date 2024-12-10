#include <iostream>

void print(float num)
{
	std::cout << num << "\n";
}

int main()
{
	print(5.0);
	std::cout << 5.0 << " cout\n";
	print(6.7f);
	std::cout << 6.7f << " cout\n";
	print(9876543.21);
	std::cout << 9876543.21 << " cout\n";

	return 0;
}
