#include "variadic_functions.h"

/**
 * print_all - print formatted arguments (like in printf)
 *
 * @format: formatted args passed.
 *
 * Return: Nothing (always)
 */
void print_all(const char * const format, ...)
{
	int indx = 0;
	char *str;
	char *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[indx])
		{
			switch (format[indx])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				default:
					indx++;
					continue;
			}
			sep = ", ";
			indx++;
		}
	}
	printf("\n");
	va_end(list);
}
