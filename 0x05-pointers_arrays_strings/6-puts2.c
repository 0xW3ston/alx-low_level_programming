#include "main.h"
/**
 * puts2 - prints only the pair indexed chars in a string
 * @str: the string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
}
