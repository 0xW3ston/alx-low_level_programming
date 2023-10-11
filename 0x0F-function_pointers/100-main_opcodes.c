#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: number of args
 * @argv: array of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *a;
	int by, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *) main;

	for (i = 0; i < by; i++)
	{
		if (i == by - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}

	return (0);
}
