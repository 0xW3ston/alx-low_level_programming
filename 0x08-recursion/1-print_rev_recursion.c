#include "main.h"

/**
 * _print_rev_recursion - prints a string (array of chars)
 * in reverse using recursion
 * @s: string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
