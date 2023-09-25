#include "main.h"
/**
 * _strstr - finds a specific substring in a string
 * @haystack: string
 * @needle: substring to find
 *
 * Return: PTR to the beginning of the locate substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] > '\0'; x++)
	{
		for (y = x; needle[y - x] > '\0' && haystack[y] > '\0'; y++)
		{
			if (needle[y - x] != haystack[y])
			{
				break;
			}
		}

		if (needle[y - x] == '\0')
		{
			return (haystack + x);
		}
	}

	return (0);
}
