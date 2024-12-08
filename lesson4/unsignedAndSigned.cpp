#include <iostream>

int main()
{
	// when you mix signed and unsigned integers, s*** can happen
	// if you perform a mathematical operation (arithmetic or comparison)
	// on unsigned integer and signed integer operands, the signed one
	// will usually be converted to an unsigned integer.
	unsigned int u { 1 };
	int			 s { 0 };

	std::cout << u == s;
	return 0;
}
