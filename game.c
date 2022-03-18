
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	srand(time(0));
	int decision = rand() % 3;

	enum signs{ROCK, PAPER, SCISSORS};

	printf("Get Ready.\n");
	Sleep(800);
	for (int i = 3; i >= 1; i--)
	{
		printf("%d\n\n", i);
		Sleep(500);
	}
	if (decision == ROCK)
		printf("ROCK\n");
	if (decision == PAPER)
		printf("PAPER\n");
	if (decision == SCISSORS)
		printf("SCISSORS\n");
	

}