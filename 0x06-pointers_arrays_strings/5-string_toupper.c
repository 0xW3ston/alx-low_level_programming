#include "main.h"
/**
 * string_toupper - Uppers all characters in a string
 * @str: String Param
 *
 * Return: pointer to @str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((int) str[i] - 32);
		}
	}

	return (str);
}
