#include "main.h"

/**
 * leet - Transforms a string into 1337 style
 * aka how the stereotype of "h4xxors" talk.
 * @str: String
 *
 * Return: PTR result
 */
char *leet(char *str)
{
	char *l_let = "aAeEoOtTlL";
	char *l_cds = "4433007711";
	int i = 0, k = 0;

	for (i = 0; str[i]; i++)
	{
		for (k = 0; l_let[k]; k++)
		{
			if (str[i] == l_let[k])
			{
				str[i] = l_cds[k];
				break;
			}
		}
	}

	return (str);
}
