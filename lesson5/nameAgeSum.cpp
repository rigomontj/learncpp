#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name {};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your age: ";
	int age {};
	std::cin >> age;
	
	int sum { static_cast<int>(std::ssize(name)) + age };
	std::cout << "Your age + length of name is: " << sum << "\n";

	return 0;
}
