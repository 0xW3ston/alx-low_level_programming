#include "function_pointers.h"
/**
 * int_index - a function that searches for
 * a specific integer
 *
 * @array: a PTR to an array.
 * @size: an int (size of array)
 * @cmp: the function that's gonna run on
 * each of those elements to check if it's
 * the desired integer or not.
 *
 * Return: Integer != -1 (always if successful).
 * (-1) (if not successful)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
