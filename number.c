/* create a program that asks the user to guess a number between one and 100 
The program should then give hints to the user until they guess the correct number*/
// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void guess(int N)
{   int number, guess, numberofguess = 0;
	srand(time(NULL));
    number = rand() % N;
	printf("Guess a number between 1 and %d\n",N);
	
	do {

		if (numberofguess > 10) {
			printf("\nYou Loose!Try next time\n");
			break;
		}
		scanf("%d", &guess);
		if (guess > number)
		{
			printf("Lower number!\n");
			numberofguess++;
		}
		else if (number > guess)
		{
			printf("Higher number!\n");
			numberofguess++;
		}
		else
			printf("You guessed the correct number in %d attempts!\n",numberofguess);

	} while (guess != number);
}


int main()
{
	int N = 100;
	guess(N);
	return 0;
}
