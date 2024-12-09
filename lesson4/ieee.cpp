#include <iostream>
#include <limits>

int main()
{
	std::cout << "long double: " << std::numeric_limits<long double>::is_iec559;
	return 0;
}
