#include <iostream>
#include <string>

int main()
{
	std::string lang {};
	std::string time {};

	std::cout << "How long have you been learning for ? \n";
	std::cout << "Use this format: MONTHS DAYS, with spaces\n";
	std::cin >> time;

	std::cout << "What language have you been learning ? ";
	std::cin >> lang;
	std::cout << "You've been learning " << lang
		<< " for " << time << "months\n";
	return 0;
}
