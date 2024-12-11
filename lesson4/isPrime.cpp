#include <iostream>

bool isPrime(int number, int max)
{
	if (number < 2)
		return 0;

	for (int i = 2; i <= max; i++)
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

	int numOfPrime { 0 };
	int summed { 0 };
	int actual {};
	for (actual = min; actual <= max; actual++)
		if (isPrime(actual, max))
		{
			std::cout << actual << " ";
			summed += actual;
			numOfPrime++;
		}

	int range = { max - min + 1 };
	int odds { numOfPrime * 100 / range};

	std::cout << "are all the prime numbers from " << min << " (included)"
				<< " to " << max << " (included). \n\n";

	std::cout << "Summed together , they equal " << summed << "\n";

	std::cout
		<< "In your range, prime numbers appeared "
		<< numOfPrime << " times out of " << range 
		<< " numbers which represents " << odds 
		<< "% of it.\n";

	return 0;
}
