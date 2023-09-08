#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the whole alphabet in order using their ascii code.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int iLower = 97;
	int iUpper = 65;

	while (iLower <= 122)
	{
		putchar(iLower++);
	}
	while (iUpper <= 90)
	{
		putchar(iUpper++);
	}
	putchar('\n');

	return (0);
}

