#include "hiLo.h"

int getRandInRange(int range)
{
	return rand() % range;
}

void printClue(int guess, int answer)
{
	if (guess > answer)
		std::cout << "Lower\n";
	if (guess < answer)
		std::cout << "Higher\n";
	if (guess == answer)
		std::cout << answer << " is the right number!\n";
}

int getGuess()
{
	int guess {};
	std::cout << "Enter a guess: ";
	std::cin >> guess;
	return guess;
}

int main()
{
	int answer { getRandInRange(100) };

	int guess { getGuess() };
	printClue(guess, answer);

	while (guess != answer)
	{
		guess = getGuess();
		printClue(guess, answer);
	}

	return 0;
}
