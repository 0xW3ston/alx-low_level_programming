#include "main.h"
/**
 * rot13 - Cipheres a string with rot13 cipher
 * @str: String
 *
 * Return: String
 */
char *rot13(char *str)
{
	int i, j;
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (!(str[i] != in[j]))
			{
				str[i] = out[j];
				break;
			}
		}
	}

	return (str);
}
