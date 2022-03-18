
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	enum signs{ROCK, PAPER, SCISSORS};

	while (1)
	{

		srand(time(0));
		int decision = rand() % 3;
		printf("\n\n\nGet Ready.\n");
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
	
		printf("\nPress Enter to continue to play. Enter any other character to quit.\nYour Choice : ");
		if (getc(stdin) != 10)
			break;

	}

}
