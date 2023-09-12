#include "main.h"
/**
 * print_alphabet - prints the entire alphabet in lowcase
 *
 * Return: Always Nothing
 */
void print_alphabet(void)
{
	int iLower = 97;

	while (iLower <= 122)
	{
		_putchar(iLower++);
	}
	_putchar('\n');
}
