#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: counts the number of parameters that go in to main
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n, p;

	p = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		p = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (p);
}
