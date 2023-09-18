#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: String
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	length = length - 1;

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
