#include <iostream>
#define GRAVITY 9.8

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight {};
	std::cin >> towerHeight;

	return towerHeight;
}

double getInterval()
{
	std::cout << "Enter interval in seconds (ex: 0.05, 0.5): ";
	double interval {};
	std::cin >> interval;

	return interval;
}

double getBallHeight(double seconds, double towerHeight)
{
	double height {};
	height = towerHeight - GRAVITY / 2 * seconds * seconds;

	return height;
}

void printBallHeight(double seconds, double height)
{
	std::cout << "At "; 
	std::cout << seconds << " seconds, the ball is "; 

	if (height > 0)
		std::cout << "at height: " << height << " meters\n";
	else
		std::cout << "on the ground.\n";
}

void printBallSpeed(double heightT0, double heightT1, double interval)
{
	double distance { heightT0 - heightT1 };
	double speed { distance / interval };

	if (heightT1 <= 0) // makes impact speed and distance correct
	{
		distance  = heightT0 - heightT1;
		speed =  distance / interval;

		distance = heightT0;
		std::cout << "Ball traveled " << distance << " meters in "
			<< distance / speed << " seconds at " << speed 
			<< " meters per second\n";

		std::cout << "Then spent "
			<< interval - (distance / speed) << " seconds on the ground.\n";
	}
	else	
	{
		std::cout << "Ball traveled " << distance << " meters in "
			<< interval << " seconds at " << speed 
			<< " meters per second\n";
	}
}

int main()
{
	double towerHeight = getTowerHeight();
	double interval = getInterval();

	if (getBallHeight(0 - interval, towerHeight) <= 0)
	{
		printBallHeight(0, getBallHeight(0, towerHeight));
		printBallSpeed(
				towerHeight,
				getBallHeight(interval, towerHeight),
				interval);
		printBallHeight(interval, getBallHeight(interval, towerHeight));
	}

	for (double seconds = 0;
		getBallHeight(seconds - interval, towerHeight) > 0;
		seconds += interval)
	{
		if (seconds)
			printBallSpeed(
					getBallHeight(seconds - interval, towerHeight),
					getBallHeight(seconds, towerHeight),
					interval);

		printBallHeight(seconds, getBallHeight(seconds, towerHeight));
	}

	return 0;
}
