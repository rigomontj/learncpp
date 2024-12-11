#include <iostream>

int main()
{
	std::cout << "\60 \x30 0";
	std::cout << '\n';

	std::cout << '\a';
	std::cout << '\n';

	std::cout << '\b';
	std::cout << '\n';

	std::cout << '\f';
	std::cout << '\n';

	std::cout << '\n';
	std::cout << '\n';

	std::cout << '\r';
	std::cout << '\n';

	std::cout << '\t';
	std::cout << '\n';

	std::cout << '\v';
	std::cout << '\n';

	std::cout << '\'';
	std::cout << '\n';

	std::cout << '\"';
	std::cout << '\n';

	std::cout << '\\';
	std::cout << '\n';

	std::cout << '\?';
	std::cout << '\n';

	std::cout << '\0';
	std::cout << '\n';

	std::cout << '\x0';
	std::cout << '\n';

	return 0;
}
