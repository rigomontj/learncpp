#include <iostream>
#include <string_view>

int main()
{
	std::string car { "Toyota" };
	std::string_view sv { car }; // sv is now viewing car
	std::cout << sv << "\n";	 // prints Toyota
	
	sv = "Orange Juice";		 // sv is now viewing "Orange Juice"
								 // does not change car

	std::cout << sv << "\n";	 // prints "Orange Juice"
	std::cout << car << "\n";	 // prints "Toyota"

	return 0;
}
