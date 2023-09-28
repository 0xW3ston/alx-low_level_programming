#include "main.h"

/**
 * factorial - gives the factorial of a specific number
 * @n: given number
 *
 * Return: (n) if successful
 * -1 if error.
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n < 2)
		{
			return (1);
		}
		else
		{
			return (factorial(n - 1) * n);
		}
	}
	else
	{
		return (-1);
	}
}
