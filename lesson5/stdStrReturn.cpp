#include <iostream>
#include <string>

std::string getString()
{
	std::string string { "Hey" };
	string = "Hello world.";

	return string;
}

std::string getAnotherString()
{
	return getString();
}

std::string getTempString()
{
	return std::string { "Temp" };
}

int main()
{
	std::string str {};
	// local variable of type std::string.
	str = getString();
    // std::string returned by value from another function call or operator.
	str = getAnotherString();
    // std::string temporary that is created as part of return statement.
	str = getTempString();

	std::cout << str;
	return 0;
}
