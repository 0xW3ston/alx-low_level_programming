#include "main.h"
/**
 * print_last_digit - it prints out the last digit in a number
 * @n: we pass the integer through this parameter
 *
 * Return: a Number (+/~/-) (Always)
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if ((n % 10) < 0)
	{
		num = -(n % 10);
	}
	_putchar('0' + num);

	return (num);
}
