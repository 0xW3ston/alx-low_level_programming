#include <stdio.h>
/**
 * main - the function is used to figure out natural numbers
 * under 1024
 *
 * Return: 0 if successful (Always)
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (!(n % 3) || !(n % 5))
		{
			sum = sum + n;
		}
		n++;
	}

	printf("%d\n", sum);
	return (0);
}
