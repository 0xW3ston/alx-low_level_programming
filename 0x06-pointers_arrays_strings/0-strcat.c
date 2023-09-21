#include "main.h"
/**
 * _strcat - appends string from *dest to *src
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; *(src + i) != '\0'; i++)
		;
	for (j = 0; *(dest + j) != '\0'; j++)
		;

	for (k = 0; k <= i; k++)
	{
		dest[j + k] = src[k];
	}

	return (dest);
}
