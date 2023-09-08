#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print from 0 to 9 in a specific way
 *
 * Return: Nothing
 */
int main(void)
{
	int iNumbers = 48;

	while (iNumbers <= 57)
	{
		putchar(iNumbers);
		if (iNumbers != 57)
		{
			putchar(',');
			putchar(' ');
		}
		iNumbers++;
	}
	putchar('\n');
}
