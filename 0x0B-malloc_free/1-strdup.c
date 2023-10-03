#include "main.h"

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory. which contains
 * copy of the given string.
 *
 * @str: the string
 *
 *
 * Return: PTR to string
*/

char *_strdup(char *str)
{
	int i = 0;
	int s_size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; s_size++, i++)
		;

	s = malloc((s_size * sizeof(*str)) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s_size; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
