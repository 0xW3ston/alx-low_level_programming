#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print base 16 characters
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int iNumbers = 48;
	int iAlphabet = 97;

	while (iNumbers <= 57)
	{
		putchar(iNumbers++);
	}
	while (iAlphabet <= 102)
	{
		putchar(iAlphabet++);
	}
	putchar('\n');

	return (0);
}
