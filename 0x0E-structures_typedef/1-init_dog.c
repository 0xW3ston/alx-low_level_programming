#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a dog struct with specific
 * values.
 *
 * @d: dog struct object
 * @name: name (of the dog)
 * @age: age (of the dog)
 * @owner: owner's name
 *
 * Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).age = age;
	(*d).name = name;
	d->owner = owner;
}
