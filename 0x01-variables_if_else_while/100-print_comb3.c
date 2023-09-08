#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all the combinations of 2 numbers (0 - 9)
 * without the combination nor the numbers themselves (n1 and n2) being
 * repeated.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int iOuter = 48;
	int iInner = 48;

	while (iOuter <= 57)
	{
		while (iInner <= 57)
		{
			if (iInner <= iOuter)
			{
				iInner++;
				continue;
			}
			putchar(iOuter);
			putchar(iInner);
			if (!(iOuter == 56 && iInner == 57))
			{
				putchar(',');
				putchar(' ');
			}
			iInner++;
		}
		iInner = 48;
		iOuter++;
	}
	putchar('\n');

	return (0);
}
