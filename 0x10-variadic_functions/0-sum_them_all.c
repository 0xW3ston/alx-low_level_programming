#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - Gives sum of all params
 * @n: count of paramters passed to the function.
 * @...: The variadic list of arguments (not fixed)
 *
 * Return: if number passed is 0 then 0 (is returned)
 * else (n1 + n2 + n3...)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	unsigned int total = 0;
	unsigned int i = 0;


	va_start(arg, n);

	while (i < n)
	{
		total += va_arg(arg, int);
		i++;
	}

	va_end(arg);

	return (total);
}
