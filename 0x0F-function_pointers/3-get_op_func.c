#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a router for arithmetic functions
 *
 * @s: String (operation sign +,-,%,/,*)
 *
 * Return: address of the requested function
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s != NULL && s[1] == '\0' && ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
