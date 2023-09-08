#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints combinations of 3 numbers without them
 * repeating.
 *
 * Return: 0 if Successful
 */
int main(void)
{
	int iO = 48;
	int iM = 48;
	int iI = 48;

	while (iO <= 57)
	{
		while (iM <= 57)
		{
			if (iM <= iO)
			{
				iM++;
				continue;
			}
			while (iI <= 57)
			{
				if (iI <= iM || iI <= iO)
				{
					iI++;
					continue;
				}
				putchar(iO);
				putchar(iM);
				putchar(iI);
				if (!(iO == 55 && iM == 56 && iI == 57))
				{
					putchar(',');
					putchar(' ');
				}
				iI++;
			}
			iI = 48;
			iM++;
		}
		iI = 48;
		iM = 48;
		iO++;
	}
	putchar('\n');

	return (0);
}
