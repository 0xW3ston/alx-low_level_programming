#include "main.h"

/**
 * strtow - splits a string => words.
 * @str: string ptr
 *
 *
 * Return: array ptr if successful
 * else NULL if not successful
*/
char **strtow(char *str)
{
	int _wc(char *str);
	char **m, *tab;
	int i, j, length = 0, w_len, charr = 0, start, end;

	j = 0, charr = 0, length = 0;
	while (str[length])
		length++;
	w_len = _wc(str);
	if (w_len == 0)
	{
		return (NULL);
	}
	m = (char **) malloc(sizeof(char *) * (w_len + 1));

	if (m == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (charr)
			{
				end = i;
				tab = (char *) malloc(sizeof(char) * (charr + 1));
				if (tab == NULL)
					return (NULL);
				while (start < end)
					*tab++ = str[start++];
				*tab = '\0';
				m[j] = tab - charr;
				j++;
				charr = 0;
			}
		}
		else if (charr++ == 0)
			start = i;
	}

	m[j] = NULL;
	return (m);
}

/**
 * _wc - word counter
 * @str: str to test
 *
 * Return: always returns int (amount of words)
 */

int _wc(char *str)
{
	int count, i, total;

	count = 0;
	total = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			count = 0;
		}
		else if (count == 0)
		{
			count = 1;
			total++;
		}
	}

	return (total);
}
