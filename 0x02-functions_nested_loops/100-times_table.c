#include "main.h"

/**
 * print_times_table - Prints the times table X amount of times
 * @n: Integer that is passed to make the table
 *
 * Return: Nothing (always)
 */
void print_times_table(int n)
{
	void compare_then_print(int);

	int num = 0;
	int power = 0;
	int result = 0;

	if (n >= 0 && n <= 15)
	{
		while (num <= n)
		{
			while (power <= n)
			{
				result = num * power;
				if (power == 0)
				{
					_putchar('0');
				}
				if (power != 0)
				{
					compare_then_print(result);
				}
				power++;
			}
			power = 0;
			num++;
			_putchar('\n');
		}
	}
}

void compare_then_print(int result)
{
	_putchar(',');
	_putchar(' ');
	if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
	}
	if (result > 9 && result < 100)
	{
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
	}
	if (result > 99)
	{
		_putchar('0' + (result / 100));
		_putchar('0' + ((result / 10) % 10));
		_putchar('0' + (result % 10));
	}
}
