#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be computed.
 *
 * Return: The length of the string.
 *
 * Description: This function calculates the length of a string
 * using recursion, by counting characters until the null terminator
 * is reached.
 */
int _str_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
