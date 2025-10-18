#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single numbers of base 10 starting from 0
 * followed by a newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		
	}
	putchar('\n');	
	return (0);
}

