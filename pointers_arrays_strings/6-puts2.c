#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a newline
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, pc;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (pc = 0; pc < len; pc += 2)
	{
		_putchar(str[pc]);
	}
	_putchar('\n');
}
