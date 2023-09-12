#include "main.h"
/**
 * jack_bauer - a function that prints from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;

	while (hours < 24)
	{
		while (mins < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));

			_putchar(':');

			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			mins++;
			_putchar('\n');
		}
		mins = 0;
		hours++;
	}
}
