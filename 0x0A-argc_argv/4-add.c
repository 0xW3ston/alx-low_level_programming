#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 * 1 if not successful (errored)
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
	(void) argc;

	for (i = 1; argv[i] != NULL; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
