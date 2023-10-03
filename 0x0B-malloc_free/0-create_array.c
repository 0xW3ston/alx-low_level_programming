#include "main.h"

/**
 * create_array - creates an array using malloc
 * then initializes it with a specific character.
 * @size: integer that is positive (0 or above)
 * @c: the character to initialize with
 *
 * Return: PTR array of chars.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr_ptr;

	if (size == 0)
	{
		return (NULL);
	}

	arr_ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr_ptr[i] = c;
	}

	return (arr_ptr);
}
