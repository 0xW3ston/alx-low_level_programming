#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Role: Print a Quote
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned int textSize = (sizeof(txt) / sizeof(char));

	write(0, txt, textSize);
	return (1);
}
