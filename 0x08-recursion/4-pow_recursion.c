#include "main.h"

/**
 * _pow_recursion - x^y
 * @x: Numb
 * @y: Pow
 *
 * Return: x^y if succesful
 * -1 if errored.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (y + 1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
