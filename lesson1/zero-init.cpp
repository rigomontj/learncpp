#include <iostream>

int main()
{
	int a { 0 }; //direct-list-init with initial value 0
	std::cout << a; //using that 0 value here
	
	int b {}; //value initialization
	std::cin >> b; //we're immediately replacing that value so an explicit 0 would be meaningless.
}
