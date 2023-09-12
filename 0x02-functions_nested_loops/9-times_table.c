#include "main.h"
/**
 * times_table - This function prints the times table from 0 to 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int num = 0;
	int power = 0;

	while (num < 10)
	{
		while (power < 10)
		{
			if (power != 0)
			{
				_putchar(',');
				_putchar(' ');
				if ((num * power) < 10)
				{
					_putchar(' ');
				}
			}
			if (((num * power) / 10) > 0 && ((num * power) % 10) == 0)
			{
				_putchar('0' + ((num * power) / 10));
				_putchar('0');
			}
			else
			{
				if ((num * power) > 10)
				{
					_putchar('0' + ((num * power) / 10));
				}
				_putchar('0' + ((num * power) % 10));
			}
			power++;
		}
		power = 0;
		num++;
		_putchar('\n');
	}
}
