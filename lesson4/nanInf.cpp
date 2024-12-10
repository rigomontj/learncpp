#include <iostream>

int main()
{
	double zero 	{ 0.0 };
	double posinf 	{ 5.0 / zero };
	double neginf 	{ -5.0 / zero };
	double z1		{ 0.0 / posinf };
	double z2		{ -0.0 / posinf };

	std::cout << zero << "\n" << posinf << "\n" << neginf << "\n"
		<< z1 << "\n" << z2 << "\n";
	return 0;
}
