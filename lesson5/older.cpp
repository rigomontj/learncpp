#include <iostream> 
#include <string>
#include <string_view>

void printOlder(std::string_view name1, int age1,
				std::string_view name2, int age2)
{
	if (age1 > age2)
		std::cout	<< name1 << " (age " << age1 << ") is older than "
				 	<< name2 << " (age " << age2 << ")\n";
	else if (age2 > age1)
		std::cout	<< name2 << " (age " << age2 << ") is older than "
				 	<< name1 << " (age " << age1 << ")\n";
	else
		std::cout	<< name1 << " (age " << age1 << ") is the same age as "
				 	<< name2 << " (age " << age2 << ")\n";
}

std::string getName(int ID)
{
	std::cout << "Enter the name of person #" << ID << ": ";
	std::string name {};
	std::getline(std::cin >> std::ws, name);

	return name;
}

int getAge(std::string_view name)
{
	std::cout << "Enter the age of " << name << ": ";
	int age {};
	std::cin >> age;

	return age;
}

int main()
{
	int	ID {};

	ID = 1;
	std::string 	name1 	{ getName(ID) };
	int				age1  	{ getAge(name1) };

	ID = 2;
	std::string 	name2 	{ getName(ID) };
	int				age2  	{ getAge(name2) };

	printOlder(name1, age1, name2, age2);

	return 0;
}
