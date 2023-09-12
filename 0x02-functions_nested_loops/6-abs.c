#include "main.h"
/**
 * _abs - Gives us the absolut value of an integer, weither it is
 * negative, positive or zero.
 * @n: Parameter for the numerical value passed to the parameter.
 *
 * Return: an Integer (always)
 */
int _abs(int n)
{
	int num = n;

	if (n < 0)
	{
		num = -(num);
	}
	return (num);
}
