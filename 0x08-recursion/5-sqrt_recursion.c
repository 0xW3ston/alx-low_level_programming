#include "main.h"

/**
 * _sqrt_recursion - square root (natural) of a number
 * @n: a number
 * Return: sqrt(n) of n if successful
 * -1 if errored.
 */

int _sqrt_recursion(int n)
{
	int get_squared(int number, int sq);

	int result = get_squared(n, 0);

	return (result);
}

/**
 * get_squared - function added
 * @sq: square Root
 * @number: number
 *
 * Return: sqrt(n) if successful
 * -1 if errored
 */

int get_squared(int number, int sq)
{
	if (sq * sq == number)
		return (sq);
	else if (sq * sq > number)
		return (-1);
	else
		return (get_squared(number, sq + 1));
}
