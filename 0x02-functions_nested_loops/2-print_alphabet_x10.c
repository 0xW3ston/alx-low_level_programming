#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times using _putchar
 *
 * Returns: Nothing
 */
void print_alphabet_x10(void)
{
	int iLoop = 0;
	int iLower = 97;

	while (iLoop < 10)
	{
		while (iLower <= 122)
		{
			_putchar(iLower++);
		}
		iLower = 97;
		_putchar('\n');
	}
}
