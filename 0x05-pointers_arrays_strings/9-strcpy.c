#include "main.h"
/**
 * _strcpy - copies from dest to src
 * @dest: string destination
 * @src: string source
 *
 * Return: pointer for "dest"
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;

		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
