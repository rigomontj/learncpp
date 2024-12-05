//forward declaration of foo()
void foo();

#include <iostream>

int main()
{
	foo();
	return 0;
}

void foo()
{
	std::cerr << ".";
	main();
}
