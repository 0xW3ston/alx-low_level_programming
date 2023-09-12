#include "main.h"
/**
 * print_sign - Prints the sign of a specific integer passed to
 * @n: The parameter for the integer
 *
 * Return: 1 if Greater Than Zero
 * 0 if its Zero
 * -1 if its less than Zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
