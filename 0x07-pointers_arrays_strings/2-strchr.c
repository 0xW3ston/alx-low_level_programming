#include "main.h"
/**
 * _strchr - searches for a character in ASCII In a string
 * @s: Whole string
 * @c: A character
 *
 * Return: *s[X] if found, else NULL
 */
char *_strchr(char *s, char c)
{
	int x;
	char *ptr = NULL;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			ptr = &s[x];
			break;
		}
	}

	return (ptr);
}
