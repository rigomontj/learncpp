#include <iostream>

int main()
{
	int a {};
	int b {};
	int c {};

	std::cout << "Please enter three numbers:\n";
	//the program will wait for input. Enter the value 4,
	//the input 4\n goes into the input buffer and the value 4 is extracted to variable a
	std::cin >> a;
	//the program will wait for input. Enter the value 5,
	//the input 5\n goes into the input buffer and the value 5 is extracted to variable b
	std::cin >> b;
	//the program will wait for input. Enter the value 6,
	//the input 6\n goes into the input buffer and the value 6 is extracted to variable c
	std::cin >> c; 
	std::cout << "You entered " << a << " " << b << " and " << c << "\n";

	std::cout << "Please enter three numbers:\n";
	//the program will wait for input. Enter 4 5,
	//the input 4 5\n goes into the input buffer and only the value 4 is extracted to variable a
	//(extraction stops at the space)
	std::cin >> a;
	//the program will NOT wait for input. Instead, the 5 that is still in the input buffer is
	//extracted to variable b.
	std::cin >> b;
	//the program will wait for input. Enter the value 6,
	//the input 6\n goes into the input buffer and the value 6 is extracted to variable c
	std::cin >> c; 
	std::cout << "You entered " << a << " " << b << " and " << c << "\n";

	return 0;
}
