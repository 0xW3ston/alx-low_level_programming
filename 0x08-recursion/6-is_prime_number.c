#include "main.h"

/**
 * real_prime - returns if number is a prime num.
 * @Numb: Number Int
 * @Ter: Itération
 *
 * Return: always 1 if prime
 * 0 if not prime.
 */

int real_prime(int Numb, int Ter)
{
	if (Ter == 1)
	{
		return (1);
	}
	else if (Ter > 0 && !(Numb % Ter))
	{
		return (0);
	}
	return (real_prime(Numb, Ter - 1));
}

/**
 * is_prime_number - returns if the number is prime.
 * @n: Number
 *
 * Return: always 1 if prime
 * 0 if not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}
