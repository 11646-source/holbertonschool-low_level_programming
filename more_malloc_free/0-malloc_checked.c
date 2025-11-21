#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc check - allocates using memory of malloc
 * @b: The numer of bytes to be allocated
 *
 * Return: A pointer to the allocated
 */
void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);
	if (check == NULL)
		exit(98);
	return(check);
}
