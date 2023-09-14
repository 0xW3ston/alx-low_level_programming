#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: The number of times the \ should be printed.
 *
 * Return: Nothing (always)
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n')
}
