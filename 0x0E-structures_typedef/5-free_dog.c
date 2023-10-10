#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the allocation for a specific dog.
 * values.
 *
 * @d: dog struct object
 *
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
