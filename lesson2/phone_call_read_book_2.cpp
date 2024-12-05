#include <iostream>

void phoneCall() 	// function header, tells the compiler about the 
{					// existence of the function.
					// function body, what it does
	std::cout << "We're at the start of phoneCall()\n";
	std::cout << "We're at the end of phoneCall()\n";
}

// readBook is caller
// phoneCall is callee
// readBook invokes phoneCall
void readBook()
{
	std::cout << "We're at the start of readBook()\n";
	phoneCall();
	std::cout << "We're at the end of readBook()\n";
}

// main is caller
// readBook is callee
// main invokes readBook
int main()
{
	std::cout << "We're at the start of main()\n";
	readBook();
	std::cout << "We're at the end of main()\n";
	return 0;
}

