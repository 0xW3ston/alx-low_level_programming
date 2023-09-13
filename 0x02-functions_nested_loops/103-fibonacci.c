#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int iTeration = 0;
	unsigned long int sum = 0, new, n1 = 1, n2 = 2;

	while (iTeration < 33)
	{
		iTeration++;

		new = n1 + n2;
		if (n1 < 4000000 && !(n1 % 2))
		{
			sum = sum + n1;
		}
		n1 = n2;
		n2 = new;
	}
	printf("%lu\n", sum);

	return (0);
}
