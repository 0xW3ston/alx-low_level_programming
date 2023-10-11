#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to handle the printing.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
