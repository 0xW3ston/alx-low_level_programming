#include "main.h"
/**
 * print_number - prints any integer (-/~/+)
 * @n: Number
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		number = -(number);
		_putchar('-');
	}

	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}

	_putchar('0' + (number % 10));
}
