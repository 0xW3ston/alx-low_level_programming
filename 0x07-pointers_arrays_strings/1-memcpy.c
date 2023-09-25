#include "main.h"
/**
 * _memcpy - copies a string from src to dest
 * @dest: Destination
 * @src: Source
 * @n: number of bytes
 *
 * Return: PTR to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
