#include <stdio.h>
/**
 * main - Prints the first fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int iFibo;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long sum;

	while (iFibo < 50)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lu", sum);
		if (iFibo != 49)
		{
			printf(", ");
		}
		else
		{
			putchar('\n');
		}
		iFibo++;
	}

	return (0);
}
