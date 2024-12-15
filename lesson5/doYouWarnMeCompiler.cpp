#include <iostream>
#include <string>
#include <string_view>

std::string_view view()
{
	return std::string_view { "Hey" };
}

int main()
{
	std::cout << view() << "\n";

	return 0;
}
