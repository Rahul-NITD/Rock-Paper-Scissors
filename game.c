
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
		printf("Get Ready.\n");
		Sleep(800);
		for (int i = 3; i >= 1; i--)
		{
			printf("%d\n\n", i);
			Sleep(500);
		}
		if (decision == ROCK)
			printf("    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___) \n");
		if (decision == PAPER)
			printf("    _______\n---'   ____)____\n          ______)\n          _______)\n         _______)\n---.__________) \n");
		if (decision == SCISSORS)
			printf("    _______\n---'   ____)____\n          ______) \n       __________) \n      (____)\n---.__(___) \n");
	
		printf("\nPress Enter to continue to play. Enter any other character to quit.\nYour Choice : ");
		if (getc(stdin) != 10)
			break;

	}

}
