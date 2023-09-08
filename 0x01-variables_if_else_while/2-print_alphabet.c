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
	int i = 97;

	while (i <= 122)
	{
		putchar(i++);
	}
	putchar('\n');
}
