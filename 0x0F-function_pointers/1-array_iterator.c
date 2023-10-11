#include "function_pointers.h"
/**
 * array_iterator - iteratres over an array
 * @array: a PTR to an array.
 * @size: an unsigned int (size of array)
 * @action: the function that's gonna run on
 * each of those elements
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
