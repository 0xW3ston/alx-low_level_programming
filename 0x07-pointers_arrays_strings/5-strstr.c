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
	char *ptr = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (needle[y] != haystack[x + y])
				{
					break;
				}
			}

			if (needle[y] == '\0')
			{
				ptr = &haystack[x];
			}
		}
	}

	return (ptr);
}
