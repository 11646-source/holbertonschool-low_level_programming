#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpharev = 'z';

	while (alpharev >= 'a')
	{
		putchar(alpharev);
		alpharev--;
	}
	putchar('\n');
	return (0);
}
	
