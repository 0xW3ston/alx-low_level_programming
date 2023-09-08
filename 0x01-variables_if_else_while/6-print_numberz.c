#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all numbers using their ASCII code
 *
 * Return: Nothing
 */
int main(void)
{
	int iNumbers = 48;

	while (iNumbers <= 57)
	{
		putchar(iNumbers++);
	}
	putchar('\n');
}
