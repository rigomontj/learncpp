// what's the point of noReturn() ?
int noReturn()
{
	// generates a warning without -Werror, an error with -Werror.
}

// C99 and C++ special case the main function to return 0 if control reaches
// the end without an explicit return.
// This only applies to the main function.
int main()
{
	noReturn();
	// C++ doesn't care that we don't return 0 for main;
}
