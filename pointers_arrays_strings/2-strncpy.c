#include "main.h"
/**
 * strncpy - copy a string starting from index 0 of dest
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: dest edited string
 */
char * _strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];

	for (; n > s; s++)
		dest[s] = '\0';
	return (dest);
}
