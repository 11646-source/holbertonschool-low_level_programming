#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
