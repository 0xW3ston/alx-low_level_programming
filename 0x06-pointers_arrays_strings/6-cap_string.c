#include <string.h>
#include "main.h"

/**
 * cap_string - Capitalizes completely the nouns in some paragraph (string)
 * @str: string
 *
 * Return: PTR string
 */
char *cap_string(char *str)
{
	int i;
	char *seps = " \n\t;,.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || strchr(seps, str[i - 1]))
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
