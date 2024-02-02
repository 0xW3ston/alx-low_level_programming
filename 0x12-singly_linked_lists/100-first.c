#include <stdio.h>

/**
 * print_first - before_main
 * Description : with __attribute__((constructor)) [for process taking]
 * Return: None
 */

void __attribute__ ((constructor))  print_first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
