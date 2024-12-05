#include <iostream>

int main()
{
	// when compiler compiles this, it will generate code that causes
	// std::cout to print the value 5. This value is compiled
	// into the executable and can be used directly.
	std::cout << 1 << "\n";

	// we're creating a variable named x and initializing it with the
	// value 5. the compiler will generate code that copies the literal
	// value 5 into whatever memory location is given to x.
	// when we print x, the compiler will generate code that causes
	// std::cout to print the value at the memory location of x (now 5)
	int x { 9 };
	std::cout << x << "\n";

	return 0;
}
