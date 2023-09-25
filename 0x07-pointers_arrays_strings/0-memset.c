#include "main.h"
/**
 * _memset - Occupies the first n bytes from a String with
 * a specific character passed to the parameter "b"
 * @s: STR
 * @b: Character
 * @n: Unsigned int
 *
 * Return: PTR to String
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return(s);
}
