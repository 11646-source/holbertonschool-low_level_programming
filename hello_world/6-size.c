#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: always 0
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", (int) sizeof(float));
	return (0);
}
