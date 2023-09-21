#include "main.h"
/**
 * _strncat - used to concatenate 2 string
 * @dest: PTR of dest
 * @src: PTR of src
 * @n: how many b used from src at most.
 *
 * Return: ptr to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;

	while (j < n)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
		{
			break;
		}

		i++;
		j++;
	}

	return (dest);
}
