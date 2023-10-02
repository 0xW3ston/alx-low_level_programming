#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 * -1 if not successful (errored)
*/

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
