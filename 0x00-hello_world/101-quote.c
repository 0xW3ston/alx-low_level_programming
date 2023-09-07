#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char paragraph[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (paragraph[i] != '\0')
	{
		putchar(paragraph[i]);
	}
	putchar('\n');
	return (1);
}
