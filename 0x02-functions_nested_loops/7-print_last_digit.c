#include "main.h"
/**
 * print_last_digit - it prints out the last digit in a number
 * @n: we pass the integer through this parameter
 *
 * Return: a Number (+/~/-) (Always)
 */
int print_last_digit(int n)
{
	int num = n;

	if (n < 0)
	{
		num = -(num);
	}
	num = num % 10;
	_putchar('0' + num);

	return (num);
}
