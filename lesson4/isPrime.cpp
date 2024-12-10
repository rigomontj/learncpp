#include <iostream>
#define MAX_INT 2147483647

bool isPrime(int number)
{
	if (number < 2)
		return 0;

	for (int i = 2; i <= 10; i++)
		if (i != number && number % i == 0)	
			return 0;

	return 1;
}

int main()
{
	std::cout << "Enter a number range (two numbers): ";
	int min {};
	std::cin >> min;	
	int max {};
	std::cin >> max;	

	int actual {};
	for (actual = min; actual <= max; actual++)
		if (isPrime(actual))
			std::cout << actual << " ";
	std::cout << "are all the prime numbers from " << min << " (included)"
				<< " to " << max << " (included). \n";

	return 0;
}
