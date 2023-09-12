#include <stdio.h>
/**
 * print_to_98 - Prints from the current (passed to parameter integer) to 98.
 * @n: From which integer should we start (integer)
 *
 * Return: Nothing (always)
 */
void print_to_98(int n)
{
	int number = n;

	while (number != 98)
	{
		if (number != n)
		{
			printf(", ");
		}
		printf("%d", number);
		if (number < 98)
		{
			number++;
		}
		else
		{
			number--;
		}
	}
	printf(", %d", number);
}
