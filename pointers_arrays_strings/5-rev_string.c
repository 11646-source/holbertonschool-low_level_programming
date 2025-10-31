#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char * s)
{
	char tmp;
	int c, len, len2;

	len = 0;
	len = 2;

	while (s[len] != '\0')
	{
		len++;
	}
	len2 = len -1;

	for (c = 0; c < len / 2; c++)
	{
		tmp = s[c];
		s[c] = s[len2];
		s[len2--] = tmp;
	}
}

