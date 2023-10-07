#include "main.h"

/**
 * array_range - generates an array containing
 * integers from "min" to "max"
 *
 * @min: min int
 * @max: max int
 *
 * Return: PTR If successful
 * else NULL
*/

int *array_range(int min, int max)
{
	int *mem;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; min <= max && i < size; i++, min++)
	{
		mem[i] = min;
	}

	return (mem);
}
