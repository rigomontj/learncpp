/* preprocessor directive, use the contents of the iostream library, part of std library, that allows
us to read and write text from/to the console. we need it to use std::cout on line 7
excluding this line would result in a compile error on line 7 because compiler wouldnt understand std::cout */
#include <iostream>

//define a function with the 'main' identifier, no main() means failure to link. returns a value of integer type.
int main() 
//defines function body as content between both braces
{
	//first statement within main, cout means character output, << displays info on the console
	std::cout << "Hello world!\n";
	/* return statement. when an executable finishes running, the program sends a value back to the OS to indicate if it ran
	successfully or not, 0 here means everything went okay. */
	return 0;
}
