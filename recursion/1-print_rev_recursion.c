#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 * 
 * Description: This function uses recursion to print each character
 * of the input string in reverse order. It begins from the end of
 * the string and works its way back to the beginning, ensuring
 * the output displays the characters in an inverted sequence.
 *
 * Notes:
 * - The function relies on the null terminator to identify when
 *   it has reached the beginning of the string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
