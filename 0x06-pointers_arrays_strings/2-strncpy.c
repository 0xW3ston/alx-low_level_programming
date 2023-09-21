#include "main.h"
/**
 * _strncpy - copies a string from destination to source (at most n characters)
 * @dest: PTR To dest
 * @src: PTR to src
 * @n: the ammount of byte from src
 *
 * Return: PTR dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * The Following loop is to stuff the end of the dest
	 * string with \0 (NULL Bytes)
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
