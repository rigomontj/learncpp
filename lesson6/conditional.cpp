#include <iostream>

bool isOdd(int n)
{
	return n % 2 ? false : true; 
}

int main()
{
	std::cout << "Do you want to start the program? type y for yes: ";

	char input {};
	std::cin >> input;

	std::cout << ((input == 'y') ? "Start" : "ABORT");
	std::cout << "\n";
	if (input != 'y')
		return 1;

	std::cout << "number ? type the word number for yes: ";

	std::string choice {};
	std::getline(std::cin >> std::ws, choice);

	std::cout << (choice == "number" ?
		"You chose number" : "ABORT");
	std::cout << "\n";
	if (choice != "number")
		return 1;
	
	

	return 0;
}
