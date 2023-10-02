#include <stdio.h>

/**
 * main - Entry Point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) always.
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));

	return (0);
}
