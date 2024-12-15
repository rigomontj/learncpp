#include <iostream>
#include <string>
#include <string_view>

std::string_view viewLastName(std::string_view lastName)
{
	lastName.remove_prefix(6);

	return lastName;
}

std::string_view viewFirstName(std::string_view firstName)
{
	firstName.remove_suffix(9);

	return firstName;
}

void printSV(std::string_view viewer)
{
	std::cout << viewer << "\n";
}

int main()
{
	constexpr std::string_view viewer { "Jules RIGOMONT" };
	
	printSV(viewFirstName(viewer));
	printSV(viewLastName(viewer));
	printSV(viewer);
}
