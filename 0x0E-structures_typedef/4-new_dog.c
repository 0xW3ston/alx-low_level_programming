#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog object then
 * returns a ptr to that object
 *
 * @name: name (of the dog)
 * @age: age (of the dog)
 * @owner: owner's name
 *
 * Return: PTR to newly created dog object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int l_name, l_owner, i, j;
	dog_t *new_d;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	for (l_name = 0; name[l_name] != '\0'; l_name++)
		;
	for (l_owner = 0; owner[l_owner] != '\0'; l_owner++)
		;
	new_d = (dog_t *) malloc(sizeof(dog_t *));
	if (new_d == NULL)
		return (NULL);
	new_d->name = (char *) malloc(sizeof(char) * (l_name + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = (char *) malloc(sizeof(char) * (l_owner + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < l_name; i++)
		new_d->name[i] = name[i];
	for (j = 0; j < l_owner; j++)
		new_d->owner[j] = owner[j];

	new_d->name[l_name] = '\0';
	new_d->age =
	new_d->owner[l_owner] = '\0';

	return (new_d);
}
