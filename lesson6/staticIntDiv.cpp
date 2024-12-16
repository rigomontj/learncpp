#include <iostream>

int main()
{
	std::cout << "Enter two integers: ";
	int x {};
	std::cin >> x;
	int y {};
	std::cin >> y;

	double result { static_cast<double>(x) / static_cast<double>(y) };
	std::cout << x << " / " << y << " = " << result << "\n";
	return 0;
}
