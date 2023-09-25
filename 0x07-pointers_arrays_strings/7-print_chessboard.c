#include "main.h"
/**
 * print_chessboard - Prints a chess board
 * @a: a 2D array.
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int v;
	int h;

	for (v = 0; v < 8; v++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[v][h]);
		}
		_putchar('\n');
	}
}
