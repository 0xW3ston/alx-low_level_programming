#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all numbers that belong to base 10
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i++);
	}
	printf("\n");

	return (0);
}
