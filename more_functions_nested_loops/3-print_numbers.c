#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * void: No input parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void print_numbers(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
