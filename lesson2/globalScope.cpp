#include <iostream>

// OK
int function(); // forward declaration of function() 
// DISCOURAGED
int x; // definition without initializer of x in global scope.
// DISCOURAGED
int y { 5 }; // definition with initializer of y in global scope.
x = 5; // compile error: executable statements are not allowed in namespaces

int main()
{
	return EXIT_SUCCESS;
}

void uselessFunction(int a, int b); // forward declaration of function 
