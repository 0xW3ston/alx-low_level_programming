#include "main.h"

/**
 * _realloc - reallocates a table of chars
 *
 * @ptr: ptr for old array
 * @old_size: int of old size
 * @new_size: int of new size
 *
 * Return: PTR If successful
 * else NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_m, *old_m;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	new_m = malloc(new_size);

	if (new_m == NULL)
		return (NULL);
	old_m = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(new_m + i) = old_m[i];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*(new_m + i) = old_m[i];
	}

	free(ptr);

	return (new_m);
}
