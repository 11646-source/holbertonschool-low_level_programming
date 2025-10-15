#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a randomly generated number.
 * Description: The program generates a random number, stores it in n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("last digit of %d and is greater than 5/n", lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
