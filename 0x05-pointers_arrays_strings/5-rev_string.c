#include "main.h"
/**
 * rev_string - reverses a string (using its pointer)
 * @s: String parameter
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int length = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	int l = length + 1;

	char str_rev[l];

	str_rev[length] = '\0';

	length = length - 1;

	for (i = 0; i <= length; i++)
	{
		str_rev[i] = *(s + (length - i));
	}

	for (i = 0; i <= length; i++)
	{
		*(s + i) = str_rev[i];
	}
}
