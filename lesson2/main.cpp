#include "sayHello.h"
#include "Jules.h"
#include <iostream>

int main()
{
#ifdef SAY_HELLO 
	std::cout << "Hello " << NAME << " !\n";
#endif
	return 0;
}
