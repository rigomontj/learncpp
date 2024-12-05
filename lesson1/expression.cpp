int five()
{
	return 5;
}

int main()
{
	[[maybe_unused]] int a { 2 };		// literal
	[[maybe_unused]] int b {2 + 3}; 		// computed 
	[[maybe_unused]] int c { 2 * 3 + 4 };// computed
	[[maybe_unused]] int d { b };		// variable
	[[maybe_unused]] int e { five() };	// function return value
}
