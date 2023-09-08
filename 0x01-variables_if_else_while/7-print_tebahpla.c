#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all (lowercase) letters in reverse.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int iLower = 122;

	while (iLower >= 97)
	{
		putchar(iLower--);
	}
	putchar('\n');

	return (0);
}
