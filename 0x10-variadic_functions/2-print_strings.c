#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 *
 * @separator: str1 <seperator> str2
 * @n: count of args
 * @...: A variable amount of strings to print
 *
 * Return: Nothing (always)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all_strings;
	unsigned int i = 0;
	char *n_str;

	va_start(all_strings, n);

	while (i < n)
	{
		n_str = va_arg(all_strings, char *);

		if (n_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", n_str);
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(all_strings);
}

