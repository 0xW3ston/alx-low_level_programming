#include "main.h"

/**
 * wildcmp - CMP s1 with s2
 * @s1: str 1
 * @s2: str 2
 *
 * Return: always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		int res = (*s2 == 0);

		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (res);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
