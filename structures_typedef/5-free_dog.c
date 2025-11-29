#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function checks if the pointer to the dog
 * structure is NULL, and if not, it frees the memory
 * allocated for the name and owner strings. Finally,
 * it frees the memory for the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
