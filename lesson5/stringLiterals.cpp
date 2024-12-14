#include <iostream>
#include <string>

int main()
{
	using namespace std::string_literals;

	std::cout << "Jules\n";
	std::cout << "Test\n"s;
	constexpr std::string name { "Jules"s };
	std::cout << name;
	
	return 0;
}
