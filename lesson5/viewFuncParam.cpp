#include <iostream>
#include <string>
#include <string_view>

void printRO(std::string_view string)
{
	std::cout << string << "\n";
}

int main()
{
	printRO("Hey!"); // C-style
	
	std::string str1 { "Hey!" };
	printRO(str1); // std::string

	std::string_view str2 { str1 };
	printRO(str2); // std::string_view

	return 0;
}
