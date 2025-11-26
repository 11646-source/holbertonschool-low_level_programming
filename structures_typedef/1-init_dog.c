#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 *
 * Description: This function sets the member variables of the struct dog
 * with the values provided. It is used to initialize a dog structure so
 * that it can be used properly in the program.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
