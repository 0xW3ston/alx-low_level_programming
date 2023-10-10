#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints Dog
 *
 * @d: dog struct object
 *
 * Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((d->name != NULL) ? d->name : "(nil)"));
	printf("Age: %f", d->age);
	printf("Owner: %s", ((d->owner != NULL) ? d->owner : "(nil)"));
}
