#include "main.h"

/**
 * _strlen_recursion - gives out the length of some string
 * passed to the parameter "s"
 * @s: string
 *
 * Return: Always Int (Length)
 */

int _strlen_recursion(char *s)
{
	return ((*s == 0) ? (*s) : (_strlen_recursion(s + 1) + 1));
}
