#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the attributes of a dog.
 * @d: A pointer to the dog structure to be printed.
 *
 * Description: This function takes a pointer to a struct dog as an
 * argument and prints out the name, age, and owner of the dog.
 * If any of the attributes are NULL, it will print "(nil)" instead.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", (*d).age);

		if ((*d).owner != 0)

			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
