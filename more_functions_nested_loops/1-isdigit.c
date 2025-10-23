#include "main.h"
/**
 * isdigit - returns 1 if digit, 0 otherwise
 * @c: Input parameter in ASCII
 * Return: On success 1
 * On error, -1 is returned, and erno is set appropriately
 */
int _isdigit(int c)
{
	int n;

	if ((c > 47) && (c < 58))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
