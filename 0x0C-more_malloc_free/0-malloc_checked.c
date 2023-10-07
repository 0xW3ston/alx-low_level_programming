#include "main.h"

/**
 * malloc_checked - allocates memory then confirms if it's
 * allocated or not.
 * @b: Number of Bytes (positive)
 *
 * Return: PTR If successful
 * Exit: with 98 if not allocated
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
