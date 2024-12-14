#include <iostream>
#include <string>

int main()
{
	std::cout << "Choose 1 or 2";	
	std::string choice {};
	std::cin >> choice;
	//std::getline(std::cin, choice);

	std::cout << "Now enter your name: ";	
	std::string name {};
	std::getline(std::cin >> std::ws, name); // note: no std::ws here

	std::cout << "Hello " << name << ", you picked " << choice << "\n";	

	return 0;
}
