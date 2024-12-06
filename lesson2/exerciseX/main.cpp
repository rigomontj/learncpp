#include "main.h"

int main()
{
	int left 	{ readNumber() };	
	int right	{ readNumber() };	
	int answer	{ left + right };

	writeAnswer(answer);	

	return 0;
}
