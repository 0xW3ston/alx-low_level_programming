#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: num of arguments
 * @argv: array of arguments (the array is *argv[]);
 *
 * Return: always 0 if successful
*/

int main(int argc, char *argv[])
{
	int total;
	int num1;
	int num2;
	char *oper;
	int (*selected_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' &&
		argv[2][0] != '*' && argv[2][0] != '/' &&
		argv[2][0] != '%') || argv[2][1] != '\0'
	)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	oper = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	selected_func = get_op_func(oper);

	total = selected_func(num1, num2);
	printf("%d\n", total);

	return (0);
}
